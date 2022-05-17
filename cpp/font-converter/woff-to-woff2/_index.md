---
title: Convert WOFF to WOFF2 | C++
linktitle: Convert WOFF to WOFF2
type: docs
weight: 40
url: /cpp/convert/woff-to-woff2
keywords: woff to woff2, woff woff2
description: This documentation on the Aspose solution is aimed to help you with the conversion from woff to woff2 format
---

If you need to transform `Web OpenFont Format` to its version 2.0, this article provides you with the necessary information.
_____

Fill the head of the file with the following namespaces:
```C++ 
using namespace Aspose::Font::Sources;
using namespace Aspose::Font::Ttf;
```

If you want to learn the Aspose conversion fundamentals go to 
 [How to convert the font into the desired format?](https://docs.aspose.com//font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) chapter to find them out.

 Taking the next three steps you will convert `WOFF` to `WOFF2`:

1. Open `Woff` font file.
```C++ 
    // Open woff font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Montserrat-Regular.woff");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"woff", System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
```

2. Notify the output setting.
```C++ 
    // Woff2 output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"WoffToWoff2_out1.woff2");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
```

3. Transform the font into `WOFF2` format and save the result.
```C++ 
    // Convert ttf to woff2
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF2);
```

{{% alert color="primary" %}}
More examples of the solution are placed in [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Check the [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose and see the solutions it offers.
{{% /alert %}}