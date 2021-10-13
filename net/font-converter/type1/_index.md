---
title: Convert Type1 | .NET
linktitle: Convert Type1
type: docs
weight: 80
url: /net/convert/type1
keywords: type 1 font converter, convert type 1 font to ttf, type 1 to ttf, type one to woff
descroption: Here is the explanation with code examples on how to use the Aspose solution to convert Type 1 format to TTF, WOFF, and WOFF2 formats.
---

In this article, you will see how to convert `Type 1` format. Aspose.Font for .NET offers you solutions for conversion `Type 1` to `TTF`, `Type 1` to `WOFF`, and `Type 1` to `WOFF2`. 
____

For all three conversions you need to put the next namespaces at the top of the head of the title:
{{< highlight csharp >}} 
using Aspose.Font.Sources;
using System;
using System.IO;
{{< /highlight >}}

Reach [How to convert the font into the desired format?](https://docs.aspose.com//font/net/convert/#how-to-convert-the-font-into-the-desired-format) chapter to see about the Aspose conversion fundamentals.

## Convert Type1 to TTF 

Fulfill the actions written below to tranform `Type one` to `True Type Font`:
1. Open `Type1` font.
2. Apply the output settings for the `Type1` font.
3. Fulfill the conversion.

{{< highlight csharp >}} 
    // Open Type1 font
    string fontPath = Path.Combine(DataDir, "Courier.pfb");
    FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);

    // Type1 output settings
    string outPath = Path.Combine(OutputDir, "Type1ToTtf_out1.ttf");
    FileStream outStream = File.Create(outPath);

    // Convert type1 to ttf
    font.SaveToFormat(outStream, FontSavingFormats.TTF);
{{< /highlight >}}


## Convert font formats from Type 1 to Woff 

For this you will need to take the next steps:

1. Open `Type1` font.
2. Add the output settings.
3. Fulfill the conversion.

{{< highlight csharp >}} 
    // Open Type1 font
    byte[] fontMemoryData = File.ReadAllBytes(Path.Combine(DataDir, "Courier.pfb"));
    FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new ByteContentStreamSource(fontMemoryData)));
    Font font = Font.Open(fontDefinition);

    // Woff output settings
    string outPath = Path.Combine(OutputDir, "Type1ToWoff_out3.ttf");
    FileStream outStream = File.Create(outPath);

    // Convert type1 to woff
    font.SaveToFormat(outStream, FontSavingFormats.WOFF);
{{< /highlight >}}


## Convert Type 1 to WOFF2

Follow the written below algorithm to convert the fonts:

1. Open `Type1` font.
2. Notify the next output settings.
3. Fulfill the conversion.

{{< highlight csharp >}} 
    // Open Type1 font
    byte[] fontMemoryData = File.ReadAllBytes(Path.Combine(DataDir, "Courier.pfb"));
    FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new ByteContentStreamSource(fontMemoryData)));
    Font font = Font.Open(fontDefinition);

    // Woff2 output settings
    string outPath = Path.Combine(OutputDir, "Type1ToWoff2_out4.ttf");
    FileStream outStream = File.Create(outPath);

    // Convert type1 to woff2
    font.SaveToFormat(outStream, FontSavingFormats.WOFF2);
{{< /highlight >}}


{{% alert color="primary" %}}
For getting more examples of using the solution go to the [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Aspose also offers you a free online [*Font Conversion application*](https://products.aspose.app/font/conversion) where you can try the existing functionality.
{{% /alert %}}