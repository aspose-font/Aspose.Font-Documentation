---
title: Load a font from CFF file | .NET
linktitle: Load a font from CFF file
type: docs
weight: 20
url: /net/how-to-load-fonts/load-a-font-from-CFF-file
keywords: load font, download font, extract font from cff file.
description: With Aspose.Font solution you can load a font from a file on your hard drive disk even if this file is not a font inself. Let’s look at how to make it from a CFF file.
---

On this page we will have a look at examples of loading font `CenturyGothic` placed in the file CenturyGothic.cff.
____
If you did not read the Aspose.Font loading fundamentals, go to 
 [*How to load fonts?*](https://docs.aspose.com//font/net/how-to-load-fonts) page.

First you need to notify the next namespaces at the head of the file:

{{< highlight csharp >}}
using System;
using Aspose.Font
using Aspose.Font.Sources;
using System.IO;
{{< /highlight >}}

## Loading from the file using FileInfo object ##

Follow the algorithm to fulfill the font loading:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/net/aspose.font.font/open/methods/3) object passing CFF as [*FontType*](https://apireference.aspose.com/font/net/aspose.font/fonttype) value.
3. Get automatically calculated value [*fileExtension*](https://apireference.aspose.com/font/net/aspose.font.sources/fontfiledefinition/properties/fileextension).
4. Load the font.

{{< highlight csharp >}}
    // Construct path to the file.
    string fontPath = Path.Combine(DataDir, "CenturyGothic.cff");

    // Initialize FontDefinition object passing CFF as FontType value and using FontFileDefinition
    FontFileDefinition fileDef = new FontFileDefinition(new FileInfo(fontPath));     

    // Based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
    FontDefinition fontDef = new FontDefinition(FontType.CFF, fileDef);

    // Load the font 
    Font font = Font.Open(fontDef);
{{< /highlight >}}

## Font loading with the byte[] type variable and with using ByteContentStreamSource type object ##

To load font this way, you need to take the following steps:
1. Construct path to the file.
2. Initialize [*FontDefiniton*](https://apireference.aspose.com/font/net/aspose.font.font/open/methods/3) object  passing CFF as [*FontType*](https://apireference.aspose.com/font/net/aspose.font/fonttype) value, `cff` as [*fileExtension*](https://apireference.aspose.com/font/net/aspose.font.sources/fontfiledefinition/properties/fileextension) value, and  [*ByteContentStreamSource*](https://apireference.aspose.com/font/net/aspose.font.sources/bytecontentstreamsource) object based on fontBytes array.
3. Load the font.

{{< highlight csharp >}}
    // Construct path to the file
    string fontPath = Path.Combine(DataDir, "CenturyGothic.cff");

    // Load font binary data into byte array
    byte[] fontBytes = File.ReadAllBytes(fontPath);

    // Initialize FontDefinition object  passing CFF as FontType value, "cff" as fileExtension value, 
    // and ByteContentStreamSource object based on fontBytes array
    FontDefinition fontDef = new FontDefinition(FontType.CFF, "ttf", new ByteContentStreamSource(fontBytes));

    // Load the font
    Font font = Font.Open(fontDef);
{{< /highlight >}}

{{% alert color="primary" %}}
More examples on how to use Aspose.Font are in [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation).
{{% /alert %}}





