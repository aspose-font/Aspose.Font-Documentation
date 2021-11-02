---
title: Convert WOFF2 to TTF | Java
linktitle: Convert WOFF2 to TTF
type: docs
weight: 50
url: /java/convert/woff2-to-ttf
keywords: java woff2 to ttf converter, woff2 font converter java.
description: To convert woff2 to ttf with Aspose is easy. Use this documentation to see how exactly
---

This page is aimed to show how to convert fonts from `Web Open Font Format 2` to `True Type` font using the Aspose.Font for Java
_______

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

 [How to convert the font into the desired format?](https://docs.aspose.com//font/java/convert/#how-to-convert-the-font-into-the-desired-format) chapter will let you know about the Aspose conversion fundamentals.

To convert `WOFF2` to `TTF` make the next actions:

1. Open `Woff2` font. 
{{< highlight java >}} 
    // Open woff2 font
    string fontPath = Path.Combine(DataDir, "Montserrat-Regular.woff2");
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff2", new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);
{{< /highlight >}}

2. Add the output setting.
{{< highlight java >}} 
    // Ttf output settings
    string outPath = Path.Combine(OutputDir, "Woff2ToTtf_out1.ttf");
    FileStream outStream = File.Create(outPath);
{{< /highlight >}}

3. Convert font and save the result.
{{< highlight java >}} 
    // Convert woff2 to ttf
    font.SaveToFormat(outStream, FontSavingFormats.TTF);
{{< /highlight >}}

{{% alert color="primary" %}}
Go to [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples/convertfont), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository for getting more examples.

Aspose also offers a free web [*Font Conversion application*](https://products.aspose.app/font/conversion) application where you can try the functionality online.
{{% /alert %}}
