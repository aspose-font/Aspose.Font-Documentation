---
title: Convert WOFF to WOFF2 | Java
linktitle: Convert WOFF to WOFF2
type: docs
weight: 40
url: /java/convert/woff-to-woff2
keywords: java woff to woff2, woff woff2 transform java
description: This documentation on the Aspose solution is aimed to help you with the conversion from woff to woff2 format
---

If you need to transform `Web OpenFont Format` to its version 2.0, this article provides you with the necessary information.
_____

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

If you want to learn the Aspose conversion fundamentals go to 
 [How to convert the font into the desired format?](https://docs.aspose.com//font/java/convert/#how-to-convert-the-font-into-the-desired-format) chapter to find them out.

 Taking the next three steps you will convert `WOFF` to `WOFF2`:

1. Open `Woff` font file.
{{< highlight java >}} 
    // Open woff font
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.woff").toString();
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new FileSystemStreamSource(fontPath)));
    Font font = Font.open(fontDefinition);
{{< /highlight >}}

2. Notify the output setting.
{{< highlight java >}} 
    // Woff2 output settings
    String outPath = Paths.get(getOutputDir(), "WoffToWoff2_out1.woff2").toString();
    FileOutputStream outStream = new FileOutputStream(outPath);
{{< /highlight >}}

3. Transform the font into `WOFF2` format and save the result.
{{< highlight java >}} 
    // Convert ttf to woff2
    font.saveToFormat(outStream, FontSavingFormats.WOFF2);
{{< /highlight >}}

{{% alert color="primary" %}}
More examples of the solution are placed in [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples/convertfont), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Check the [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose and see the solutions it offers.
{{% /alert %}}