---
title: Convert TTF to WOFF2 | C++
linktitle: Convert TTF to WOFF2
type: docs
weight: 20
url: /cpp/convert/ttf-to-woff2
keywords: convert ttf to woff2
description: Here you will find out how to convert ttf to woff2 using the Aspose.Font for C++.
---

On this page you will find the example of using the Aspose solution for converting from `TrueType` font to `Web Open Font Format version 2`.
_______

Use the following namespaces at the head of the file:
```C++ 
using namespace Aspose::Font::Sources;
using namespace Aspose::Font::Ttf;
```

If you need to know the Aspose conversion fundamentals get to 
 [How to convert the font into the desired format?](https://docs.aspose.com//font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) chapter.

Then take the next steps:

1. Open `TTF` font.
```C++
    // Open ttf font
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(DataPath(u"Montserrat-Bold.ttf"));
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<TtfFont> ttfFont = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(Aspose::Font::Font::Open(fontDefinition));
```

2. Write the output settings for the `WOFF2` format.
```C++
    // Woff output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"TtfToWoff_out2.woff");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
```

3. Make conversion from `TTF` to `WOFF2` and save the result using [*SaveToFormat()*](https://apireference.aspose.com/font/cpp/class/aspose.font.font#a670ea97404fd72c2e51b0e8c543c8a45) method of the base abstract [*Font*](https://apireference.aspose.com/font/cpp/class/aspose.font.font) class instance.
```C++
    // Convert ttf to woff
    ttfFont->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF);
```

{{% alert color="primary" %}}
For more examples check [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Also go to our free online [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose to see the functionality.
{{% /alert %}}