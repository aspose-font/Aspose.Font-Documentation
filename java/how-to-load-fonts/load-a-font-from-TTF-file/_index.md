---
title: Load a font from TTF file | JAVA
linktitle: Load a font from TTF file
type: docs
weight: 10
url: /java/how-to-load-fonts/load-a-font-from-TTF-file
keywords: load ttf font java, download ttf font java, extract font from ttf file java.
description: With Aspose.Font solution you can load a font from a file on your hard drive disk even if this file is not a font inself. Let’s look at how to make it from a TTF file.
---
Here are described four differently fulfilled examples on how to load a font from the file Montserrat-Regular.ttf. 
___

First learn the loading fundamentals at the [*How to load fonts?*](https://docs.aspose.com/font/net/how-to-load-fonts/) page.

Add the next namespaces at the head of the file:

{{< highlight csharp >}}
using System;
using Aspose.Font;
using Aspose.Font.Sources;
using System.IO;
{{< /highlight >}}

## Loading from the file using FileSystemStreamSource object ##

Take the next steps to fulfil the operation:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/net/aspose.font.font/open/methods/3) object.
3. Set [*fileExtension*](https://apireference.aspose.com/font/net/aspose.font.sources/fontfiledefinition/properties/fileextension) to `ttf`.
4. Load the font.

{{< highlight csharp >}}
    // Construct path to the file
    string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");

    // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
    FontFileDefinition fileDef = new FontFileDefinition("ttf", new FileSystemStreamSource(fontPath));

    // Based on FileSystemStreamSource object, set fileExtension to "ttf"
    FontDefinition fontDef = new FontDefinition(FontType.TTF, fileDef);

    // Load the font
    Font font = Font.Open(fontDef);
{{< /highlight >}}

## Loading from the file using FileInfo object ##

To fulfil loading do the next:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/net/aspose.font.font/open/methods/3) object passing `TTF` as [*FontType*](https://apireference.aspose.com/font/net/aspose.font/fonttype) value.
3. Get automatically calculated value [*fileExtension*](https://apireference.aspose.com/font/net/aspose.font.sources/fontfiledefinition/properties/fileextension).
4. Load the font.

{{< highlight csharp >}}
     // Construct path to the file
     string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");

     // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
     FontFileDefinition fileDef = new FontFileDefinition(new FileInfo(fontPath));

     // Based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
     FontDefinition fontDef = new FontDefinition(FontType.TTF, fileDef);

     // Load the font
     Font font = Font.Open(fontDef);
{{< /highlight >}}

## Loading from the file excluding FontFileDefinition object from initialization chain ##

The next actions have to be taken to load the font this way:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/net/aspose.font.font/open/methods/3) object passing `TTF` as [*FontType*](https://apireference.aspose.com/font/net/aspose.font/fonttype) value, `ttf` as [*fileExtension*](https://apireference.aspose.com/font/net/aspose.font.sources/fontfiledefinition/properties/fileextension) value and [*FileSystemStreamSource*](https://apireference.aspose.com/font/net/aspose.font.sources/filesystemstreamsource)  object. Parameter [*fileExtension*](https://apireference.aspose.com/font/net/aspose.font.sources/fontfiledefinition/properties/fileextension) here is not a duplicate value for parameter [*FontType*](https://apireference.aspose.com/font/net/aspose.font/fonttype).
3. Load the font.

{{< highlight csharp >}}
     // Construct path to the file
     string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");

     // Initialize FontDefinition object passing TTF as FontType value, "ttf" as fileExtension value, 
     // and FileSystemStreamSource object. Parameter 'fileExtension' here is not duplicate value 
     // for parameter 'FontType' and it's needed for correct font format detection
     FontDefinition fontDef = new FontDefinition(FontType.TTF, "ttf", new FileSystemStreamSource(fontPath));

     // Load the font
     Font font = Font.Open(fontDef);     
{{< /highlight >}}

## Loading the font from the byte array ##

To load the font from the byte array:
1. Construct path to the file.
2. Load font binary data into the byte array.
3. Initialize [*FontDefiniton*](https://apireference.aspose.com/font/net/aspose.font.font/open/methods/3) object  passing `TTF` as [*FontType*](https://apireference.aspose.com/font/net/aspose.font/fonttype) value,`ttf` as [*fileExtension*](https://apireference.aspose.com/font/net/aspose.font.sources/fontfiledefinition/properties/fileextension) value, and [*ByteContentStreamSource*](https://apireference.aspose.com/font/net/aspose.font.sources/bytecontentstreamsource) object based on fontBytes array.
4. Load the font.

{{< highlight csharp >}}
     // Construct path to the file
     string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");

     // Load font binary data into byte array
     byte[] fontBytes = File.ReadAllBytes(fontPath);

     // Initialize FontDefinition object  passing TTF as FontType value, "ttf" as fileExtension value, 
     // and ByteContentStreamSource object based on fontBytes array
     FontDefinition fontDef = new FontDefinition(FontType.TTF, "ttf", new ByteContentStreamSource(fontBytes);

     // Load the font
     Font font = Font.Open(fontDef);
{{< /highlight >}}

{{% alert color="primary" %}}
You can get examples on how to use Aspose.Font in [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation).
{{% /alert %}}






