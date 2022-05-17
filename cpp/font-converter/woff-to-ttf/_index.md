---
title: Convert WOFF to TTF |C++
linktitle: Convert WOFF to TTF
type: docs
weight: 30
url: /cpp/convert/woff-to-ttf
keywords: woff converter, convert webfont to ttf
description: Examples illustrated with code snippets of using namespace Aspose.Font for C++ for converting font woff to ttf
---

The information below is to describe how to use the Aspose.Font for C++ to convert fonts from `Web Open Font Format` to `True Type font`.
_______

Apply the next namespaces at the head of the file:
```C++ 
using namespace Aspose::Font::Sources;
using namespace Aspose::Font::Ttf;
```

Conversion fundamentals are available in [How to convert the font into the desired format?](https://docs.aspose.com//font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) chapter.

To fulfil the conversion from `WOFF` to `TTF` font you need to follow the next steps:

1. Open `Woff` font file.
```C++ 
    // Open woff font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Montserrat-Regular.woff");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"woff", System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
```

2. Specify the output setting.
```C++ 
    // Ttf output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"WoffToTtf_out1.ttf");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
```

3. Use [*SaveToFormat()*](https://apireference.aspose.com/font/cpp/class/aspose.font.font#a670ea97404fd72c2e51b0e8c543c8a45) method of the base abstract [*Font*](https://apireference.aspose.com/font/cpp/class/aspose.font.font) class instance to transform font and save results.
```C++ 
    // Convert woff to ttf
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::TTF);
```

{{% alert color="primary" %}}
If you need more examples of the solution you may check [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

To try the functionality you can also go to our free web [*Font Conversion application*](https://products.aspose.app/font/conversion) application from Aspose.
{{% /alert %}}