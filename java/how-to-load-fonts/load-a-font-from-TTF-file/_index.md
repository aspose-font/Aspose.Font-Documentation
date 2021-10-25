---
title: Load a font from TTF file | JAVA
linktitle: Load a font from TTF file
type: docs
weight: 10
url: /java/how-to-load-fonts/load-a-font-from-TTF-file
keywords: load ttf font java, download ttf font java, extract font from ttf file java.
description: Here you will learn how with the help of Aspose.Font for JAVA to load a font from a file on your hard drive disk even if this file is not a font inself. So how to load a font from a TTF file for example?
---
Here you will find four examples on how to load a font from the file Montserrat-Regular.ttf fulfilled in different ways.
___

Make sure you have learned the loading fundamentals at the [*How to load fonts?*](https://docs.aspose.com/font/java/how-to-load-fonts/) page first.

Import the next classes:

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

## Loading from the file using FileSystemStreamSource object ##

Take the next steps to fulfil the operation:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object.
3. Set [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) to `ttf`.
4. Load the font.

{{< highlight java >}}
    // Construct path to the file
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();

    // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
    FontFileDefinition fileDef = new FontFileDefinition("ttf", new FileSystemStreamSource(fontPath));

    // Based on FileSystemStreamSource object, set fileExtension to "ttf"
    FontDefinition fontDef = new FontDefinition(FontType.TTF, fileDef);

    // Load the font
    Font font = Font.open(fontDef);
{{< /highlight >}}

## Loading from the file using FileInfo object ##

To fulfil loading do the next:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object passing `TTF` as [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) value.
3. Get automatically calculated value [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-).
4. Load the font.

{{< highlight java >}}
    // Construct path to the file
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();

    // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
    FontFileDefinition fileDef = new FontFileDefinition(new File(fontPath));

    // Based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
    FontDefinition fontDef = new FontDefinition(FontType.TTF, fileDef);

    // Load the font 
    Font font = Font.open(fontDef);
{{< /highlight >}}

## Loading from the file excluding FontFileDefinition object from initialization chain ##

The next actions have to be taken to load the font this way:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object passing `TTF` as [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) value, `ttf` as [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) value and [*FileSystemStreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/FileSystemStreamSource) object. Parameter [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) here is not a duplicate value for parameter [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType).
3. Load the font.

{{< highlight java >}}
    // Construct path to the file
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();

    // Initialize FontDefinition object passing TTF as FontType value, "ttf" as fileExtension value, 
    // and FileSystemStreamSource object. Parameter 'fileExtension' here is not duplicate value 
    // for parameter 'FontType' and it's needed for correct font format detection
    FontDefinition fontDef = new FontDefinition(FontType.TTF, "ttf", new FileSystemStreamSource(fontPath));

    // Load the font
    Font font = Font.open(fontDef);   
{{< /highlight >}}

## Loading the font from the byte array ##

To load the font from the byte array:
1. Construct path to the file.
2. Load font binary data into the byte array
3. Initialize [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object  passing `TTF` as [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) value, `ttf` as [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) value, and [*ByteContentStreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/ByteContentStreamSource) object based on fontBytes array.
4. Load the font.

{{< highlight java >}}
    // Construct path to the file
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();

    // Load font binary data into byte array
    byte[] fontBytes = Files.readAllBytes(Paths.get(fontPath));

    // Initialize FontDefinition object  passing TTF as FontType value, "ttf" as fileExtension value, 
    // and ByteContentStreamSource object based on fontBytes array
    FontDefinition fontDef = new FontDefinition(FontType.TTF, "ttf", new ByteContentStreamSource(fontBytes));

    // Load the font
    Font font = Font.open(fontDef);
{{< /highlight >}}

{{% alert color="primary" %}}
You can get examples on how to use Aspose.Font in [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation).
{{% /alert %}}






