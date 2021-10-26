---
title: Convert WOFF2 to WOFF | Java
linktitle: Convert WOFF2 to WOFF
type: docs
weight: 60
url: /java/convert/woff2-to-woff
keywords: woff2 to woff java,webfont2 to webfont java.
description: Aspose.Font for Java provides you with an easy solution for converting fonts. This documentation will tell about the woff2 to woff conversion.
---

From this article, you will find out how to convert fonts from `WOFF2` to `WOFF` format with the help of Aspose solution.
____

First, you need to import the following classes:

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

Make sure you've learned the conversion fundamentals in [How to convert the font into the desired format?](https://docs.aspose.com//font/java/convert/#how-to-convert-the-font-into-the-desired-format) section.

Then to fulfil `WOFF2` to `WOFF` conversion you will need to take these three steps:

1. Open `Woff2` font file.
{{< highlight java >}} 
    // Open woff2 font
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.woff2").toString();
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff2", new FileSystemStreamSource(fontPath)));
    Font font = Font.open(fontDefinition);
{{< /highlight >}}

2. Write the output setting for the `WOFF` format.
{{< highlight java >}} 
    // Woff output settings
    String outPath = Paths.get(getOutputDir(), "Woff2ToWoff_out1.woff").toString();
    FileOutputStream outStream = new FileOutputStream(outPath);
{{< /highlight >}}

3. Convert and save the font result.
{{< highlight java >}} 
    // Convert woff2 to woff
    font.saveToFormat(outStream, FontSavingFormats.WOFF);
{{< /highlight >}}

{{% alert color="primary" %}}
Other examples and documentation are also always available in [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples/convertfont), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Also, get to the [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose to try the functionality.
{{% /alert %}}