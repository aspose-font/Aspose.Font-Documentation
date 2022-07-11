---
title: Convert TTF to WOFF | C++
linktitle: Convert TTF to WOFF
type: docs
weight: 10
url: /cpp/convert/ttf-to-woff
keywords: font converter ttf to woff, convert ttf font to webfont.
description: Examples with code snippets how to use Aspose.Font for C++ to convert ttf to woff 
---



If you came across a font you like to use in your interface, and it is only available in `TTF` format, but you use `WOFF` in your project, you may need a solution that converts fonts.
The following documentation will show you how to easily use the Aspose.Font for C++ to transform fonts from `True type` to `WebFont`.

______

The fundamentals for the conversion are placed in [How to convert the font into the desired format?](/font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) section.

To convert `TTF` to `WOFF` you will need to take the following steps:


{{< blocks/products/pf/agp/feature-section >}}
{{< app/font/converter "C++ code example TTF to WOFF conversion" TTF WOFF WOFF2>}}
    using namespace System;
    using namespace Aspose::Font::Sources;
    using namespace Aspose::Font::Ttf;
    using namespace Aspose::Font;

    // Open ttf font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"{{inputFile}}");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(FontType::{{input}}, System::MakeObject<FontFileDefinition>(System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);

    // {{output camel}} output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"{{outputFile}}");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);

    // Convert ttf to {{output lower}}
    font->SaveToFormat(outStream, FontSavingFormats::{{output upper}});
{{< /app/font/converter >}}
{{< /blocks/products/pf/agp/feature-section >}}

Here the [*SaveToFormat()*](https://apireference.aspose.com/font/cpp/class/aspose.font.font#a670ea97404fd72c2e51b0e8c543c8a45) method of the base abstract [*Font*](https://apireference.aspose.com/font/cpp/class/aspose.font.font) class instance was used. 
It takes two arguments: output stream and [*FontSavingFormats*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#a93d0dcc7c00f5c7027d60e14a5433c74) enumeration to choose the output font format.

{{% alert color="primary" %}}
All of the code snippets provided and others are placed in the [*Aspose.Font.Examples.CPP.sln*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) solution, in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

To convert fonts online you may also try a free online [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose.
{{% /alert %}}