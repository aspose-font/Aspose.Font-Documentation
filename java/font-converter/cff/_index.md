---
title: Convert CFF | Java
linktitle: Convert CFF
type: docs
weight: 90
url: /java/convert/cff
keywords: convert cff to ttf java, java cff to ttf converter, convert compact font format
description: Aspose has now in its family a solution that is aimed to convert different font formats. Here you will find examples of how to convert CFF format.
---

The article will explain to you with the code how to transform `CFF` format. Aspose solution now gives you the opportunity to convert `CFF` to `TTF`, `CFF` to `WOFF`, and `CFF` to `WOFF2`.
____

First, use the next statements:
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

In [How to convert the font into the desired format?](https://docs.aspose.com//font/java/convert/#how-to-convert-the-font-into-the-desired-format) section you can find the font conversion fundamentals.

## Convert CFF to TTF

To fulfill the operation follow the next steps:

1. Open `CFF` font.
2. Notify the output settings.
3. Run the conversion.

{{< highlight java >}} 
    // Open cff font
    String fontPath = Paths.get(getDataDir(), "CenturyGothic.cff").toString();
    FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new FileSystemStreamSource(fontPath)));
    Font font = Font.open(fontDefinition);

    // Ttf output settings
    String outPath = Paths.get(getOutputDir(), "CffToTtf_out1.ttf").toString();
    FileOutputStream outStream = new FileOutputStream(outPath);

    // Convert cff to ttf
    font.saveToFormat(outStream, FontSavingFormats.TTF);
{{< /highlight >}}


## Convert CFF to WOFF

To transform `Compact Font Format` to `Web Open Font Format` you will need to follow the algorithm:

1. Open `CFF` font.
2. Place the settings for the output font stream.
3. Process the conversion.

{{< highlight java >}} 
    // Open cff font
    byte[] fontMemoryData = Files.readAllBytes(Paths.get(getDataDir(), "CenturyGothic.cff"));
    FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new ByteContentStreamSource(fontMemoryData)));
    Font font = Font.open(fontDefinition);

    // Woff output settings
    String outPath = Paths.get(getOutputDir(), "CffToWoff_out3.woff").toString();
    FileOutputStream outStream = new FileOutputStream(outPath);

    // Convert cff to woff
    font.saveToFormat(outStream, FontSavingFormats.WOFF);
{{< /highlight >}}


## Convert CFF to WOFF2

To fulfill `Compact Font Format` to `Web Open Font Format version 2` conversion, take the three steps below:

1. Open the `CFF`.
2. Notify the output settings.
3. Convert `CFF` to `WOFF2` and save the result.
{{< highlight java >}} 
    // Open cff font
    byte[] fontMemoryData = Files.readAllBytes(Paths.get(getDataDir(), "CenturyGothic.cff"));
    FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new ByteContentStreamSource(fontMemoryData)));
    Font font = Font.open(fontDefinition);

    // Woff2 output settings
    String outPath = Paths.get(getOutputDir(), "CffToWoff2_out4.woff2").toString();
    FileOutputStream outStream = new FileOutputStream(outPath);

    // Convert cff to woff2
    font.saveToFormat(outStream, FontSavingFormats.WOFF2);
{{< /highlight >}}


{{% alert color="primary" %}}
If you need to learn more examples of using the solution to convert fonts you will find useful the [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples/convertfont), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation).


Try [*Font Conversion application*](https://products.aspose.app/font/conversion) in case you want to learn the functional online for free.
{{% /alert %}}