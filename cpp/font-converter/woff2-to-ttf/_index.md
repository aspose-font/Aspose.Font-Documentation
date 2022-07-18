---
title: Convert WOFF2 to TTF | C++
linktitle: Convert WOFF2 to TTF
type: docs
weight: 50
url: /cpp/convert/woff2-to-ttf
keywords: woff2 to ttf converter, woff2 font converter
description: To convert woff2 to ttf with Aspose is easy. Use this documentation to see how exactly
---

This page is aimed to show how to convert fonts from `Web Open Font Format 2` to `True Type` font using the Aspose.Font for C++. 
_______

Set the following namespaces at the head of the file:

[How to convert the font into the desired format?](https://docs.aspose.com//font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) chapter will let you know about the Aspose conversion fundamentals.

To convert `WOFF2` to `TTF` make the next actions:

1. Open `Woff2` font. 
2. Specify the output setting.
3. Use [*SaveToFormat()*](https://reference.aspose.com/font/cpp/class/aspose.font.font#a670ea97404fd72c2e51b0e8c543c8a45) method of the base abstract [*Font*](https://reference.aspose.com/font/cpp/class/aspose.font.font) class instance to transform font and save results.

{{< blocks/products/pf/agp/feature-section >}}
{{< app/font/converter "C++ code example WOFF2 to TTF conversion" WOFF2 TTF WOFF>}}
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

{{% alert color="primary" %}}
Go to [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository for getting more examples.

Aspose also offers a free web [*Font Conversion application*](https://products.aspose.app/font/conversion) where you can try the functionality online.
{{% /alert %}}
