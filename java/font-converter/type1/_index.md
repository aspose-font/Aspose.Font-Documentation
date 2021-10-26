---
title: Convert Type1 | Java
linktitle: Convert Type1
type: docs
weight: 80
url: /java/convert/type1
keywords: java type 1 font converter , convert type 1 font to ttf java, type 1 to ttf java, type one to woff java.
descroption: Here is the explanation with code examples on how to use the Aspose solution to convert Type 1 format to TTF, WOFF, and WOFF2 formats.
---

In this article, you will see how to convert `Type 1` format. Aspose.Font for Java offers you solutions for conversion `Type 1` to `TTF`, `Type 1` to `WOFF`, and `Type 1` to `WOFF2`. 
____

For all three conversions you need to import the following classes:

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

Reach [How to convert the font into the desired format?](https://docs.aspose.com//font/java/convert/#how-to-convert-the-font-into-the-desired-format) chapter to see about the Aspose conversion fundamentals.

## Convert Type1 to TTF 

Fulfill the actions written below to tranform `Type one` to `True Type Font`:
1. Open `Type1` font.
2. Apply the output settings for the `Type1` font.
3. Fulfill the conversion.

{{< highlight java>}} 
    // Open Type 1 font
    String fontPath = Paths.get(getDataDir(),"Courier.pfb").toString();
    FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new FileSystemStreamSource(fontPath)));
    Font font = Font.open(fontDefinition);

    // Ttf output settings
    String outPath = Paths.get(getOutputDir(), "Type1ToTtf_out1.ttf").toString();
    FileOutputStream outStream = new FileOutputStream(outPath);

    // Convert type1 to ttf
    font.saveToFormat(outStream, FontSavingFormats.TTF);
{{< /highlight >}}


## Convert font formats from Type 1 to Woff 

For this you will need to take the next steps:

1. Open `Type1` font.
2. Add the output settings.
3. Fulfill the conversion.

{{< highlight java >}} 
    // Open Type 1 font
    byte[] fontMemoryData = Files.readAllBytes(Paths.get(getDataDir(), "Courier.pfb"));
    FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new ByteContentStreamSource(fontMemoryData)));
    Font font = Font.open(fontDefinition);

    // Woff output settings
    String outPath = Paths.get(getOutputDir(), "Type1ToWoff_out3.ttf").toString();
    FileOutputStream outStream = new FileOutputStream(outPath);

    // Convert type1 to woff
    font.saveToFormat(outStream, FontSavingFormats.WOFF);
{{< /highlight >}}


## Convert Type 1 to WOFF2

Follow the written below algorithm to convert the fonts:

1. Open `Type1` font.
2. Notify the next output settings.
3. Fulfill the conversion.

{{< highlight java>}} 
    // Open Type 1 font
    byte[] fontMemoryData = Files.readAllBytes(Paths.get(getDataDir(), "Courier.pfb"));
    FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new ByteContentStreamSource(fontMemoryData)));
    Font font = Font.open(fontDefinition);

    // Woff2 output settings
    String outPath = Paths.get(getOutputDir(), "Type1ToWoff2_out4.ttf").toString();
    FileOutputStream outStream = new FileOutputStream(outPath);

    // Convert type1 to woff2
    font.saveToFormat(outStream, FontSavingFormats.WOFF2);
{{< /highlight >}}


{{% alert color="primary" %}}
For getting more examples of using the solution go to the [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples/convertfont), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Aspose also offers you a free online [*Font Conversion application*](https://products.aspose.app/font/conversion) where you can try the existing functionality.
{{% /alert %}}