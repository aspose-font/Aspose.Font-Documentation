---
title: Font converter | Java
linktitle: Font converter 
type: docs
weight: 60
url: /java/convert/
keywords: Convert fonts java, font converter java, transform fonts java
description: Aspose.Font for Java library allows you converting fonts easily from a font of one format to a font of another one. Learn more about the solution.
---


## Overview

How much simpler creating interfaces would be if there were only one font format existing. But as we have a lot of different types of gadgets, environments, a few operational systems, and many other areas where we use fonts, we have a bunch of font formats to serve different purposes. Some are better for web pages and applications, some for publishing. There are pros and cons to any font format. If you want the text to render well everywhere, sometimes you will have to transform one font into another. 

{{% alert color="primary" %}}
For some tasks, a web application will be just enough. For example, if you only need to convert one text document into a document with a different font type. And Aspose does have such an application in its ecosystem. Try [*Font Conversion application*](https://products.aspose.app/font/conversion) to see whether it fits your purposes.
{{% /alert %}} 
In case your issues are not covered with the web application, and you need a more solid solution, to use or to build into your product, here is the tool aimed to simplify the font conversion process for you. 
Aspose.Font for Java library is a solution that allows you to convert fonts between most popular formats:
 
It is a flexible and easy-to-use library designed to work with different font files like `TrueType CFF`, `OpenType`, and `Type1`. Apart from converting fonts, it offers some more manipulations with fonts like reading font information, reading glyphs and metrics information, detecting latin symbols, loading fonts, etc.

## Supported font formats

The next formats are supported by Aspose.Font for Java:

| **Format**| **Description**|
| :- | :- |
|`TrueType` (`TTF`)|It is one of the most popular formats between Mac Os and Microsoft Windows operating systems. `True type` fonts have `.ttf` extension. Fonts of the `TrueType` family are easy to scale to any size on computers and other devices like printers, smartphones, etc. The most famous representatives of `TTF` fonts are Times Roman, Helvetica, and Courier families.|
|`Web Open Font Format` (`WOFF`)|This font format is developed for rendering on web pages. Basically, it is `TrueType` or `OpenType` font altered by adding HTML metadata and by applied compression. The format is supported by all major browsers.|
|`Web Open Font Format version 2.0` (`WOFF2`)|The next generation of `WOFF`. It gives you a 30% average compression gain in comparison to `WOFF`. It is not that widespread though yet.|
|`Embedded OpenType format` (`EOT`)|These are made by Microsoft and supported by Internet explorer fonts used on the web. Because of compression, the font files are smaller. `EOT` also provides some copyright protection because of subsetting.|
|`Type 1` format|(also known as `PostScript`, `PS1`, `T1`, `Adobe Type 1`, `Multiple Master`, or `MM`). This format is developed by Adobe Systems for professional digital typesetting. This system uses the `PostScript` file format to encode font information. As this font format is outdated and is not supported in many modern environments, like mobile devices and web browsers, it will not have been supported by Adobe by 2023 anymore. The company recommends using the `Open type` format instead.|
|`Compact Font Format` (`CFF`)|It is also known as `Type 2` font format, or `CFF/Type 2` font format. With this format, you can store different fonts together in one unit called Fontset. As it allows sharing data between fonts, and defaulting frequently occurring data it provides you with notable space saving.|

All of the mentioned formats are supported for reading, and some of them for writing. 

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

- [**TTF to WOFF**](https://docs.aspose.com/font/java/convert/ttf-to-woff/) - `TrueType Font` to `Web Open Font Format` conversion

- [**TTF to WOFF2**](https://docs.aspose.com/font/java/convert/ttf-to-woff2/) - `TrueType Font` to `Web Open Font Format version 2.0` conversion

- [**WOFF to TTF**](https://docs.aspose.com/font/java/convert/woff-to-ttf/) - `Web Open Font Format` to `TrueType Font` conversion

- [**WOFF to WOFF2**](https://docs.aspose.com/font/java/convert/woff-to-woff2/) - `Web Open Font Format` to `Web Open Font Format version 2.0` conversion

- [**WOFF2 to TTF**](https://docs.aspose.com/font/java/convert/woff2-to-ttf/) - `Web Open Font Format version 2.0` to `TrueType Font` conversion

- [**WOFF2 to WOFF**](https://docs.aspose.com/font/java/convert/woff2-to-woff/) - `Web Open Font Format version 2.0` to `Web Open Font Format` conversion

- [**Convert EOT**](https://docs.aspose.com/font/java/convert/eot/) - `Embedded OpenType Font` to `TTF`, `WOFF` or `WOFF2` conversion

- [**Convert Type 1**](https://docs.aspose.com/font/java/convert/type1/) - `Type 1` Font to `TTF`, `WOFF` or `WOFF2` conversion

- [**Convert CFF**](https://docs.aspose.com/font/java/convert/cff/) - `Compact Font Format` to `TTF`, `WOFF` or `WOFF2` conversion

## How to convert the font into the desired format?

1. Load font from any of the supported formats and get reference on base `com.aspose.font.Font` object which represents this font.
2. Save just loaded font into another format with the help of 
[*saveToFormat()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#saveToFormat-java.io.OutputStream-com.aspose.font.FontSavingFormats-) method of the base abstract [*Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font#save-java.lang.String-) class instance. [*saveToFormat()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#saveToFormat-java.io.OutputStream-com.aspose.font.FontSavingFormats-) method takes two arguments: output stream and [*FontSavingFormats*](https://apireference.aspose.com/font/java/com.aspose.font/FontSavingFormats) enumeration for choosing the output font format.
Method [*saveToFormat()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#saveToFormat-java.io.OutputStream-com.aspose.font.FontSavingFormats-) allows you to save fonts into any of the output formats supported. 

You need to use the next statements:
{{< highlight java >}} 
    package com.aspose.font;

    import java.io.FileOutputStream;
    import java.io.IOException;
    import java.nio.file.Files;
    import java.nio.file.Paths;

    import com.aspose.font.ByteContentStreamSource;
    import com.aspose.font.FileSystemStreamSource;
    import com.aspose.font.Font;
    import com.aspose.font.FontDefinition;
    import com.aspose.font.FontFileDefinition;
    import com.aspose.font.FontSavingFormats;
    import com.aspose.font.FontType;
    import com.aspose.font.TtfFont;
{{< /highlight >}}

Below you can see the code sample which converts font from `TTF` to `WOFF` format.

There were taken the next steps:
1. Opened `TTF` font.
2. Added the output settings.
3. Fulfilled the conversion `TTF` to `WOFF` and saved the resultant.

{{< highlight java >}}
    // Open ttf font
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
    Font font = Font.open(fontDefinition);

    // Woff output settings
    String outPath = Paths.get(getOutputDir(), "TtfToWoff_out1.woff").toString();
    FileOutputStream outStream = new FileOutputStream(outPath);   

    // Convert ttf to woff
    font.saveToFormat(outStream, FontSavingFormats.WOFF);
{{< /highlight >}}

Conversions into other formats, like `woff` to `ttf`, `ttf` to `woff2`, `woff2` to `ttf`, and others can be accomplished in a similar way.

## How to get the solution?

If you are interested in getting the library, go to [*Aspose.Font for Java product page*](https://products.aspose.com/font/java/). There you will find more opportunities that the solution gives to you. You can download a free trial from or buy the product there.

If you have any troubles or questions left, feel free to post them at the [*Aspose.Font.Product Family*](https://forum.aspose.com/c/font/41) section of the [*Free Support Forum*](https://forum.aspose.com/) and within a few hours our support team will clear everything up for you.






