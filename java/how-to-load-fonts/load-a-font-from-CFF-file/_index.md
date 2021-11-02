---
title: Load a font from CFF file | Java
linktitle: Load a font from CFF file
type: docs
weight: 20
url: /java/how-to-load-fonts/load-a-font-from-CFF-file
keywords: load font java, download ccf font java, extract font from cff file java.
description: With Aspose.Font for Java solution you can load a font from a file on your hard drive disk even if this file is not a font inself. Let’s look at how to make it from a CFF file.
---

Get a closer look on how to load font in particulary `CenturyGothic` placed in the file CenturyGothic.cff.
____
If you did not read the Aspose.Font loading fundamentals, go to 
 [*How to load fonts?*](https://docs.aspose.com//font/java/how-to-load-fonts) page.

First let's notify the statements you will need to use:

{{< highlight java >}}
    package com.aspose.font;

    import java.io.File;
    import java.io.IOException;
    import java.nio.file.Files;
    import java.nio.file.Paths;

    import com.aspose.font.ByteContentStreamSource;
    import com.aspose.font.FileSystemStreamSource;
    import com.aspose.font.Font;
    import com.aspose.font.FontDefinition;
    import com.aspose.font.FontFileDefinition;
    import com.aspose.font.FontType;
{{< /highlight >}}

## Loading from the file using java.io.File object ##

Follow the algorithm to fulfill the font loading:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object passing `CFF` as [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) value.
3. Get automatically calculated value [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-).
4. Load the font.

{{< highlight java >}}
    // Construct path to the file.
    String fontPath = Paths.get(getDataDir(), "CenturyGothic.cff").toString();
	
    // Initialize FontDefinition object passing CFF as FontType value and using FontFileDefinition
    FontFileDefinition fileDef = new FontFileDefinition(new File(fontPath));

    // Based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
    FontDefinition fontDef = new FontDefinition(FontType.CFF, fileDef);

    // Load the font
    Font font = Font.open(fontDef);
{{< /highlight >}}

## Font loading with the byte[] type variable and with using ByteContentStreamSource type object ##

To load font this way, you need to take the following steps:
1. Construct path to the file.
2. Initialize [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object  passing `CFF` as [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) value, `cff` as [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) value, and  [*ByteContentStreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/ByteContentStreamSource) object based on fontBytes array.
3. Load the font.

{{< highlight java >}}
    // Construct path to the file
    String fontPath = Paths.get(getDataDir(), "CenturyGothic.cff").toString();

    // Load font binary data into byte array
    byte[] fontBytes = Files.readAllBytes(Paths.get(fontPath));

    // Initialize FontDefinition object  passing CFF as FontType value, "cff" as fileExtension value, 
    // and ByteContentStreamSource object based on fontBytes array
    FontDefinition fontDef = new FontDefinition(FontType.CFF, "ttf", new ByteContentStreamSource(fontBytes));

    // Load the font
    Font font = Font.open(fontDef);
{{< /highlight >}}

{{% alert color="primary" %}}
More examples on how to use Aspose.Font are in [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation).
{{% /alert %}}





