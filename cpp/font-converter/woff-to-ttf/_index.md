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

Conversion fundamentals are available in [How to convert the font into the desired format?](https://docs.aspose.com//font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) chapter.

To fulfill the conversion from `WOFF` to `TTF` font you need to follow the next steps:

1. Open the `Woff` font file using the *System::IO::Path::Combine()* Method, which combines the path to the directory with the font file name. Then Open the font using the *Aspose::Font::Font::Open* Method and passing the FontDefinition object as a parameter. 
2. Specify the output setting using again the *System::IO::Path::Combine()* Method.
3. Use [*SaveToFormat()*](https://reference.aspose.com/font/cpp/class/aspose.font.font#a670ea97404fd72c2e51b0e8c543c8a45) method of the base abstract [*Font*](https://reference.aspose.com/font/cpp/class/aspose.font.font) class instance to transform font and save results to the output file specified by *outPath*.

{{< blocks/products/pf/agp/feature-section >}}
{{< app/font/converter "C++ code example WOFF to TTF conversion" WOFF TTF WOFF2>}}
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
If you need more examples of the solution you may check [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

To try the functionality you can also go to our free web [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose.
{{% /alert %}}