---
title: Convert TTF to WOFF | Java
linktitle: Convert TTF to WOFF
type: docs
keywords: font converter ttf to woff java, convert ttf font to webfont java.
description: Examples with code snippets how to use Aspose.Font for Java to convert ttf to woff 
weight: 10
url: /java/convert/ttf-to-woff
---



If you came across a font you like to use in your interface, and it is only available in `TTF` format, but you use `WOFF` in your project, you may need a solution that converts fonts.
The following documentation will show you how to easily use the Aspose.Font for Java to transform fonts from `True type` to `WebFont`.

______

Use the following statements:

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

The fundamentals for the conversion are placed in [How to convert the font into the desired format?](https://docs.aspose.com//font/java/convert/#how-to-convert-the-font-into-the-desired-format) section.

To convert `TTF` to `WOFF` you will need to take the following steps:


1. Open `TTF` font.
{{< highlight java >}}
    // Open ttf font
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
    Font font = Font.open(fontDefinition);
{{< /highlight >}}

2. Write the settings for the output stream.
{{< highlight java >}}
    // Woff output settings
    String outPath = Paths.get(getOutputDir(), "TtfToWoff_out1.woff").toString();
    FileOutputStream outStream = new FileOutputStream(outPath);   
{{< /highlight >}}

3. Convert font to `WOFF`.
{{< highlight java >}}
    // Convert ttf to woff
    font.saveToFormat(outStream, FontSavingFormats.WOFF);
{{< /highlight >}}

Here the [*saveToFormat()*](https://reference.aspose.com/font/java/com.aspose.font/Font#saveToFormat-java.io.OutputStream-com.aspose.font.FontSavingFormats-) method of the base abstract [*Font*](https://reference.aspose.com/font/java/com.aspose.font/Font) class instance was used. 
It takes two arguments: output stream and [*FontSavingFormats*](https://reference.aspose.com/font/java/com.aspose.font/FontSavingFormats) enumeration to choose output font format.

{{% alert color="primary" %}}
All of the code snippets provided and others are placed in the [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples/convertfont), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

To convert fonts online you may also try a free online [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose.
{{% /alert %}}