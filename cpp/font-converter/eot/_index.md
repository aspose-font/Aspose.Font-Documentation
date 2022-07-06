---
title: Convert EOT | C++
linktitle: Convert EOT
type: docs
weight: 70
url: /cpp/convert/eot
keywords: convert eot to ttf, eot woff woff2
description: Aspose has now in its family a solution that is aimed to convert different font formats. Here you will find examples of how to convert EOT fonts.
---

It is known that `Embedded Open Type` (`EOT`) is supported mainly by the Internet Explorer browser. Because of that, to render correctly you will need to build in your software converter to `EOT` from other font formats and vice versa. In this article, it is described how to use the Aspose.Font for C++ to convert `EOT` to `TTF`, `EOT` to `WOFF`, and `EOT` to `WOFF2`.

The information about the font conversion fundamentals is notified in [How to convert the font into the desired format?](https://docs.aspose.com//font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) chapter.

## Convert EOT to TTF | WOFF | WOFF2

To transform `Embedded Open Type` to `True Type Format` you will need:
1. Open `EOT` font.
2. Notify the output settings for `TTF` font.
3. Run the fon conversion.

{{< blocks/products/pf/agp/feature-section >}}
{{< app/font/converter "C++ code example EOT conversion" EOT TTF WOFF WOFF2>}}
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
Our folder [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) has these and many more examples on how to use the Aspose solution.

Similar functionality is also given by the free online [*Font Conversion*](https://products.aspose.app/font/conversion) application. Learn what opportunities it gives to you.
{{% /alert %}}
