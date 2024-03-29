---
title: Font converter C++
linktitle: Font converter
type: docs
weight: 60
url: /cpp/convert/
keywords: Convert fonts, font converter, transform fonts
description: Easy-to-use C++ library for font conversion from Aspose.Font. Allows you to work with a big range of different fonts like True Type or web fonts.
---



## Overview

How much simpler creating interfaces would be if there were only one font format existing. But as we have a lot of different types of gadgets, environments, a few operational systems, and many other areas where we use fonts, we have a bunch of font formats to serve different purposes. Some are better for web pages and applications, and some for publishing. There are pros and cons to any font format. If you want the text to render well everywhere, sometimes you will have to transform one font into another. 

{{% alert color="primary" %}}
For some tasks, a web application will be just enough. For example, if you only need to convert one text document into a document with a different font type. And Aspose does have such an application in its ecosystem. Try the [*Font Conversion application*](https://products.aspose.app/font/conversion) to see whether it fits your purposes.
{{% /alert %}} 
In case your issues are not covered with the web application, and you need a more solid solution, here is the tool aimed to simplify the conversion process for you. 
The Aspose.Font for C++ library is a solution that allows you to convert fonts between popular formats:
 
It is a flexible and easy-to-use library designed to work with different font files like `TrueType CFF`, `OpenType`, and `Type1`. Apart from converting fonts, it offers some more manipulations with fonts like reading font information, reading glyphs and metrics information, detecting Latin symbols in fonts, etc.

## Supported font formats

The next formats are supported by the font converter from Aspose:

| **Format**| **Description**|
| :- | :- |
|`TrueType` (`TTF`)|It is one of the most popular formats between Mac Os and Microsoft Windows operating systems. `True type` fonts have `.ttf` extension. Fonts of the `TrueType` family are easy to scale any size on computers and other devices like printers, smartphones, etc. The most famous representatives of `TTF` fonts are Times Roman, Helvetica, and Courier families.|
|`Web Open Font Format` (`WOFF`)|This font format is developed for web pages. Basically, it is `TrueType` or `OpenType` font altered by adding HTML metadata and by applied compression. The format is supported by all major browsers.|
|`Web Open Font Format version 2.0` (`WOFF2`)|The next generation of `WOFF`. It gives you a 30% average compression gain in comparison to `WOFF`. It is not that widespread though yet.|
|`Embedded OpenType format` (`EOT`)|These are made by Microsoft and supported by Internet explorer fonts used on the web. Because of compression, the font files are smaller. `EOT` also provides some copyright protection because of subsetting.|
|`Type 1` format|(also known as `PostScript`, `PS1`, `T1`, `Adobe Type 1`, `Multiple Master`, or `MM`). This format is developed by Adobe Systems for professional digital typesetting. This system uses the `PostScript` file format to encode font information. As this font type is outdated and is not supported in many modern environments like mobile devices and web browsers, it will not have been supported anymore by Adobe by 2023. The company recommends using the `Open type` instead.|
|`Compact Font Format` (`CFF`)|It is also known as `Type 2` font format, or `CFF/Type 2` font format. With this format, you can store different fonts together in one unit called Fontset. As it allows sharing data between fonts, and defaulting frequently occurring data it provides you with notable space-saving.|

All of the formats are supported for reading and a few of them for writing. 

### Formats supported for reading and/or writing 

|**Format**|**Read**|**Write**|
| :- | :- | :- |
|`TTF`|{{< emoticons/tick >}}|{{< emoticons/tick >}}|
|`CFF`|{{< emoticons/tick >}}| |
|`WOFF`|{{< emoticons/tick >}}|{{< emoticons/tick >}}|
|`WOFF2`|{{< emoticons/tick >}}|{{< emoticons/tick >}}|
|`Type 1`|{{< emoticons/tick >}}| |
|`EOT`|{{< emoticons/tick >}}| |

## Available font conversions

Any font format from those supported for reading can be converted and saved into one of the formats supported for writing.

Here you can learn the pairs of fonts which are currently provided for conversion by the Aspose solution. Following the links, you will find more information and examples of using the library illustrated with the code snippets.

- [**TTF to WOFF**](ttf-to-woff) - `TrueType Font` to `Web Open Font Format` conversion

- [**TTF to WOFF2**](ttf-to-woff2) - `TrueType Font` to `Web Open Font Format version 2.0` conversion

- [**WOFF to TTF**](woff-to-ttf) - `Web Open Font Format` to `TrueType Font` conversion

- [**WOFF to WOFF2**](woff-to-woff2) - `Web Open Font Format` to `Web Open Font Format version 2.0` conversion

- [**WOFF2 to TTF**](woff2-to-ttf) - `Web Open Font Format version 2.0` to `TrueType Font` conversion

- [**WOFF2 to WOFF**](woff2-to-woff) - `Web Open Font Format version 2.0` to `Web Open Font Format` conversion

- [**Convert EOT**](eot) - `Embedded OpenType Font` to `TTF`, `WOFF` or `WOFF2` conversion

- [**Convert Type 1**](type1) - `Type 1` Font to `TTF`, `WOFF` or `WOFF2` conversion

- [**Convert CFF**](cff) - `Compact Font Format` to `TTF`, `WOFF` or `WOFF2` conversion

## How to convert the font into the desired format?

1. Load font from any of the supported formats and get reference on-base Aspose.Font.Font object which represents this font.
2. Save just loaded font into another format with the help of the
[*SaveToFormat()*](https://reference.aspose.com/font/cpp/class/aspose.font.font#a670ea97404fd72c2e51b0e8c543c8a45) method of the base abstract [*Font*](https://reference.aspose.com/font/cpp/class/aspose.font.font) class instance. [*SaveToFormat()*](https://reference.aspose.com/font/cpp/class/aspose.font.font#a670ea97404fd72c2e51b0e8c543c8a45) method takes two arguments: output stream and [*FontSavingFormats*](https://reference.aspose.com/font/cpp/namespace/aspose.font#a93d0dcc7c00f5c7027d60e14a5433c74) enumeration for choosing the output font format.
Method [*SaveToFormat()*](https://reference.aspose.com/font/cpp/class/aspose.font.font#a670ea97404fd72c2e51b0e8c543c8a45) allows you to save fonts into any of the output formats supported. 

Below is the sample which converts font from `TTF` to `WOFF2` format.

{{< blocks/products/pf/agp/feature-section >}}
{{< app/font/converter "C++ code example TTF to WOFF2 conversion" TTF WOFF2 WOFF>}}
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

{{< blocks/products/pf/agp/other-supported-section title="Other Supported Conversions" subTitle="Conversions from other formats can be accomplished in a similar way." >}}

{{< blocks/products/pf/agp/other-supported-section-item href="/font/cpp/convert/cff/" name="CFF" description="Compact Font Format">}}
{{< blocks/products/pf/agp/other-supported-section-item href="/font/cpp/convert/eot/" name="EOT" description="Embedded Open Type">}}
{{< blocks/products/pf/agp/other-supported-section-item href="/font/cpp/convert/type1/" name="Type1" description="Type1 Font">}}

{{< /blocks/products/pf/agp/other-supported-section >}}

## How to get the solution?

If you are interested in getting the library, go to [*Aspose.Font for C++ product page*](https://products.aspose.com/font/cpp/). There you will find more opportunities that the solution gives you. You can download a free trial from or buy the product there.

If you have any troubles or questions left, feel free to post them at the [*Aspose.Font.Product Family*](https://forum.aspose.com/c/font/41) section of the [*Free Support Forum*](https://forum.aspose.com/) and within a few hours our support team will clear everything up for you.






