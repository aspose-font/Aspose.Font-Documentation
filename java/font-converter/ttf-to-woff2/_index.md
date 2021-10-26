---
title: Convert TTF to WOFF2 | Java
linktitle: Convert TTF to WOFF2
type: docs
weight: 20
url: /njava/convert/ttf-to-woff2
keywords: convert ttf to woff2 java
description: Here you will find out how to convert ttf to woff2 using the Aspose.Font for Java
---

On this page you will find the example of using the Aspose solution for converting font format from `TrueType` font to `Web Open Font Format version 2`.
_______

Import the following classes:

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

If you need to know the Aspose conversion fundamentals get to 
 [How to convert the font into the desired format?](https://docs.aspose.com//font/java/convert/#how-to-convert-the-font-into-the-desired-format) chapter.

Then take the next steps:

1. Open `TTF` font.
{{< highlight java >}}
    // Open ttf font
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
    Font font = Font.open(fontDefinition);
{{< /highlight >}}

2. Write the output settings for the `WOFF2` format.
{{< highlight java >}}
    // Woff2 output settings
    String outPath = Paths.get(getOutputDir(), "TtfToWoff2_out1.woff2").toString();
    FileOutputStream outStream = new FileOutputStream(outPath);
{{< /highlight >}}

3. Make conversion from `TTF` to `WOFF2` and save the result using [*SaveToFormat()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#saveToFormat-java.io.OutputStream-com.aspose.font.FontSavingFormats-) method of the base abstract [*Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) class instance.
{{< highlight java >}}
    // Convert ttf to woff2
    font.saveToFormat(outStream, FontSavingFormats.WOFF2);
{{< /highlight >}}

{{% alert color="primary" %}}
For more examples check [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples/convertfont), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Also go to our free online [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose to see the functionality.
{{% /alert %}}