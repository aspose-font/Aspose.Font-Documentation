---
title: Convert WOFF2 to WOFF | C++
linktitle: Convert WOFF2 to WOFF
type: docs
weight: 60
url: /cpp/convert/woff2-to-woff
keywords: woff2 to woff,webfont2 to webfont
description: Aspose.Font for C++ provides you with an easy solution for converting fonts. This documentation will tell about the woff2 to woff conversion.
---

From this article, you will find out how to convert fonts from `WOFF2` to `WOFF` format with the help of the Aspose solution.
____

Make sure you've learned the conversion fundamentals in [How to convert the font into the desired format?](https://docs.aspose.com//font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) section.

Then to fulfil `WOFF2` to `WOFF` conversion you will need to take these three steps:

1. Open `Woff2` font file.
2. Write the output setting for the `WOFF` format.
3. Convert and save the font result.

{{< blocks/products/pf/agp/feature-section >}}
{{< app/font/converter "C++ code example WOFF2 to WOFF conversion" WOFF2 WOFF TTF>}}
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
Other examples and documentation are also always available in [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Also, get to the [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose to try the functionality.
{{% /alert %}}