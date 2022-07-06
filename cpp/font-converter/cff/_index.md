---
title: Convert CFF | C++
linktitle: Convert CFF
type: docs
weight: 91
url: /cpp/convert/cff
keywords: convert cff to ttf, cff to ttf converter, convert compact font format
description: Aspose has now in its family a solution that is aimed to convert different font formats. Here you will find examples of how to convert CFF format.
---

The article will explain to you with the code how to transform `CFF` format. Aspose solution now gives you the opportunity to convert `CFF` to `TTF`, `CFF` to `WOFF` and `CFF` to `WOFF2`.

## Convert CFF to TTF | WOFF | WOFF2

To fulfill the operation follow the next steps:

1. Open `CFF` font.
2. Notify the output settings.
3. Run the conversion.

{{< blocks/products/pf/agp/feature-section >}}
{{< app/font/converter "C++ code example CFF conversion" CFF TTF WOFF WOFF2>}}
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
If you need to learn more examples of using the solution to convert fonts you will find useful the [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation).


Try [*Font Conversion application*](https://products.aspose.app/font/conversion) in case you want to learn the functional online for free.
{{% /alert %}}