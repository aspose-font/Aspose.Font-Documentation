---
title: Convert EOT | Java
linktitle: Convert EOT
type: docs
weight: 70
url: /java/convert/eot
keywords: convert eot to ttf java, eot woff woff2 java.
description: Aspose has now in its family a solution that is aimed to convert different font formats. Here you will find examples of how to convert CFF format.
---

It is known that `Embedded Open Type` (`EOT`) is supported mainly by the Internet Explorer browser. Because of that, to render correctly you will need to build in your software converter to `EOT` from other font formats and vice versa. In this article, it is described how to use  Aspose.Font for Java to convert `EOT` to `TTF`, `EOT` to `WOFF`, and `EOT` to `WOFF2`.
_____________

For all the conversions you will need to import the next classes:
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

The information about the font conversion fundamentals is notified in [How to convert the font into the desired format?](https://docs.aspose.com//font/java/convert/#how-to-convert-the-font-into-the-desired-format) chapter.

## Convert EOT to TTF

To transform `Embedded Open Type` to `True Type Format` you will need:
1. Open `EOT` font.
2. Notify the output settings for `TTF` font.
3. Run the fon conversion.

{{< highlight java>}}
    // Open eot font, passing TTF as value for FontType, TtfFont will be returned as result of call Font.Open()
    String fontPath = Paths.get(getDataDir(), "LoraRegular.eot").toString();
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
    Font font = Font.open(fontDefinition);

    // Ttf output settings
    String outPath = Paths.get(getOutputDir(), "EotToTtf_out1.ttf").toString();            

    // Save opened font to TrueType format
    font.save(outPath);
{{< /highlight >}}

## Convert EOT to WOFF
To get `Web Open Font Format` from `Embedded Open Type` the next actions have to be done:

1. Open `EOT` font.
2. Notify the output settings for the `WOFF` font.
3. Fulfill the font conversion.

{{< highlight java >}}
    // Open eot font
    String fontPath = Paths.get(getDataDir(), "LoraRegular.eot").toString();
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
    Font font = Font.open(fontDefinition);

    // Woff output settings
    String outPath = Paths.get(getOutputDir(), "EotToWoff_out3.woff").toString();
    final FileOutputStream outStream = new FileOutputStream(outPath);   
    try {
	    // Convert eot to woff
	    font.saveToFormat(outStream, FontSavingFormats.WOFF);
        } finally {
		    if (outStream != null)
		    outStream.close();
        }
{{< /highlight >}}

## Convert EOT to WOFF2

If you need to get the second version of the `Web Open Font Format` from `Embedded Open type` the taken steps are the same:
1. Open `EOT` Font.
2. Add the output settings for the `WOFF2` font.
3. Convert `EOT` to `WOFF2` and save the result.

{{< highlight java >}}
    // Open eot font
    String fontPath = Paths.get(getDataDir(), "LoraRegular.eot").toString();
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
    Font font = Font.open(fontDefinition);

    // Woff2 output settings
    String outPath = Paths.get(getOutputDir(), "EotToWoff2_out3.woff2").toString();
    final FileOutputStream outStream = new FileOutputStream(outPath);   
    try {
	    // Convert eot to woff2
	    font.saveToFormat(outStream, FontSavingFormats.WOFF2);
        } finally {
		    if (outStream != null)
		    outStream.close();
        }
{{< /highlight >}}

{{% alert color="primary" %}}
Our folder [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples/convertfont), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) has these and many more examples on how to use the Aspose solution.

Similar functionality is also given by the free online [*Font Conversion*](https://products.aspose.app/font/conversion) application. Learn what opportunities it gives to you.
{{% /alert %}}
