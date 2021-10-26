---
title: Convert WOFF to TTF |Java
linktitle: Convert WOFF to TTF
type: docs
weight: 30
url: /java/convert/woff-to-ttf
keywords: woff converter, convert webfont to ttf
description: Examples illustrated with code snippets of using Aspose.Font for .NET for converting font woff to ttf
---

The information below is to describe how to use the Aspose.Font for .NET to convert fonts from `Web Open Font Format` to `True Type font`.
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

Conversion fundamentals are available in [How to convert the font into the desired format?](https://docs.aspose.com//font/java/convert/#how-to-convert-the-font-into-the-desired-format) chapter.

To fulfil the conversion from `WOFF` to `TTF` font you need to follow the next steps:

1. Open `Woff` font file.
{{< highlight java >}} 
    // Open woff font
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.woff").toString();
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new FileSystemStreamSource(fontPath)));
    Font font = Font.open(fontDefinition);
{{< /highlight >}}

2. Specify the output setting.
{{< highlight java>}} 
    // Ttf output settings
    String outPath = Paths.get(getOutputDir(), "WoffToTtf_out1.ttf").toString();
    FileOutputStream outStream = new FileOutputStream(outPath);
{{< /highlight >}}

3. Use [*SaveToFormat()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#saveToFormat-java.io.OutputStream-com.aspose.font.FontSavingFormats-) method of the base abstract [*Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) class instance to transform font and save results.
{{< highlight java >}} 
    // Convert woff to ttf
    font.saveToFormat(outStream, FontSavingFormats.TTF);
{{< /highlight >}}

{{% alert color="primary" %}}
If you need more examples of the solution you may check [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples/convertfont), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

To try the functionality you can also go to our free web [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose.
{{% /alert %}}