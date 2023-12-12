#include "pch.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <vcclr.h> 
#include "qrcodegen.h"

using std::uint8_t;
using qrcodegen::QrCode;
using qrcodegen::QrSegment;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


public ref class qrData {
public:
    static System::Drawing::Bitmap^ qrGenerate(String^ qrquery) {
        pin_ptr<const wchar_t> wch = PtrToStringChars(qrquery);

        // Convert to a standard C++ string (requires conversion from wide characters)
        size_t convertedChars = 0;
        size_t sizeInBytes = ((qrquery->Length + 1) * 2);
        errno_t err = 0;
        char* ch = (char*)malloc(sizeInBytes);

        err = wcstombs_s(&convertedChars, ch, sizeInBytes, wch, sizeInBytes);
        std::string unmanagedString(ch);
        free(ch); // Free the allocated memory

        if (err != 0) {
            throw gcnew System::Exception("String conversion failed");
        }

        const char* text = unmanagedString.c_str();

        const QrCode::Ecc errCorLv1 = QrCode::Ecc::LOW;
        const QrCode qr = QrCode::encodeText(text, errCorLv1);
        const int scale = 10;
        const int size = qr.getSize() * scale;

        // Create a Bitmap to draw the QR code
        System::Drawing::Bitmap^ bitmap = gcnew System::Drawing::Bitmap(size, size);

        for (int y = 0; y < size; y++) {
            for (int x = 0; x < size; x++) {
                bool black = qr.getModule(x / scale, y / scale);
                System::Drawing::Color color = black ? System::Drawing::Color::Black : System::Drawing::Color::White;
                bitmap->SetPixel(x, y, color);
            }
        }

        return bitmap;
    }
};
