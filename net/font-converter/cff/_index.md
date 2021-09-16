---
title: Convert CFF | .NET
linktitle: Convert CFF
type: docs
weight: 90
url: /net/convert/cff
keywords: "convert cff to ttf, cff to ttf converter, convert compact font format"
description: "Aspose has now in its family a solution that is aimed to convert different font formats. Here you will find examples of how to convert CFF format."
---

The article will explain to you with the code how to transform CFF format. Aspose solution now gives you the opportunity to convert CFF to TTF, CFF to WOFF, and CFF to WOFF2.
____

First, add the next namespaces at the top of the head of the title:
{{< highlight csharp >}} 
using Aspose.Font.Sources;
using System;
using System.IO;
{{< /highlight >}}

In [How to convert the font into the desired format?](https://docs.aspose.com//font/net/convert/#how-to-convert-the-font-into-the-desired-format) section you can find the font conversion fundamentals.

## Convert CFF to TTF

To fulfill the operation follow the next steps:

1. Open CFF font.
2. Notify the output settings.
3. Run the conversion.

{{< highlight csharp >}} 
    // Open cff font
    string fontPath = Path.Combine(DataDir, "OpenSans-Regular.cff");
    FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);

    // Ttf output settings
    string outPath = Path.Combine(OutputDir, "CffToTtf_out1.ttf");
    FileStream outStream = File.Create(outPath);

    // Convert cff to ttf
    font.SaveToFormat(outStream, FontSavingFormats.TTF);
{{< /highlight >}}


## Convert CFF to WOFF

To transform Compact Font Format to Web Open Font Format you will need to follow the algorithm:

1. Open CFF font.
2. Place the settings for the output font stream.
3. Process the conversion.

{{< highlight csharp >}} 
    // Open cff font
    byte[] fontMemoryData = File.ReadAllBytes(Path.Combine(DataDir, "OpenSans-Regular.cff"));
    FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new ByteContentStreamSource(fontMemoryData)));
    Font font = Font.Open(fontDefinition);

    // Woff output settings
    string outPath = Path.Combine(OutputDir, "CffToWoff_out3.woff");
    FileStream outStream = File.Create(outPath);

    // Convert cff to woff
    font.SaveToFormat(outStream, FontSavingFormats.WOFF);
{{< /highlight >}}


## Convert CFF to WOFF2

To fulfill Compact Font Format to Web Open Font Format version2 conversion, take the three steps below:

1. Open the CFF.
2. Notify the output settings.
3. Convert CFF to WOFF2 and save the result.
{{< highlight csharp >}} 
    // Open cff font
    byte[] fontMemoryData = File.ReadAllBytes(Path.Combine(DataDir, "OpenSans-Regular.cff"));
    FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new ByteContentStreamSource(fontMemoryData)));
    Font font = Font.Open(fontDefinition);

    // Woff2 output settings
    string outPath = Path.Combine(OutputDir, "CffToWoff2_out4.woff2");
    FileStream outStream = File.Create(outPath);

    // Convert cff to woff2
    font.SaveToFormat(outStream, FontSavingFormats.WOFF2);
{{< /highlight >}}


{{% alert color="primary" %}}
If you need to learn more examples of using the solution to convert fonts you will find useful the [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation)/.


Try [*Font Conversion application*](https://products.aspose.app/font/conversion) in case you want to learn the functional online for free.
{{% /alert %}}