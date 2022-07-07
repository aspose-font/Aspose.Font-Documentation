---
title: Convert Type1 | C++
linktitle: Convert Type1
type: docs
weight: 80
url: /cpp/convert/type1
keywords: type 1 font converter, convert type 1 font to ttf, type 1 to ttf, type one to woff
descroption: Here is the explanation with code examples on how to use the Aspose solution to convert Type 1 format to TTF, WOFF, and WOFF2 formats.
---

In this article, you will see how to convert `Type 1` format. Aspose.Font for C++ offers you solutions for conversion `Type 1` to `TTF`, `Type 1` to `WOFF`, and `Type 1` to `WOFF2`. 

Reach [How to convert the font into the desired format?](https://docs.aspose.com//font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) chapter to see about the Aspose conversion fundamentals.

## Convert Type1 to TTF | WOFF | WOFF2

Fulfill the actions written below to tranform `Type one` to `True Type Font`:
1. Open `Type1` font.
2. Apply the output settings for the `Type1` font.
3. Fulfill the conversion.

{{< blocks/products/pf/agp/feature-section >}}
{{< app/font/converter "C++ code example CFF conversion" "Type1|pfb" TTF WOFF WOFF2>}}
using namespace System;
using namespace Aspose::Font::Sources;
using namespace Aspose::Font::Ttf;
using namespace Aspose::Font;

// Open {{input lower}} font
SharedPtr<FontFileDefinition> fontFileDefinition = MakeObject<FontFileDefinition>(MakeObject<FileSystemStreamSource>(u"{{inputFile}}"));
SharedPtr<FontDefinition> fontDefinition = MakeObject<FontDefinition>(FontType::{{input}}, fontFileDefinition);
SharedPtr<Font> font = Font::Open(fontDefinition);

// {{output camel}} output settings
SharedPtr<IO::FileStream> outStream = IO::File::Create(u"{{outputFile}}");

// Convert {{input lower}} to {{output lower}}
font->SaveToFormat(outStream, FontSavingFormats::{{output upper}});
{{< /app/font/converter >}}
{{< /blocks/products/pf/agp/feature-section >}}

{{% alert color="primary" %}}
For getting more examples of using the solution go to the [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Aspose also offers you a free online [*Font Conversion application*](https://products.aspose.app/font/conversion) where you can try the existing functionality.
{{% /alert %}}