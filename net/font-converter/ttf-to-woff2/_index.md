---
title: Convert TTF to WOFF2 | .NET
linktitle: Convert TTF to WOFF2
type: docs
weight: 20
url: /net/convert/ttf-to-woff2
keywords: "convert ttf to woff2"
description: "Here you will find out how to convert ttf to woff2 using the Aspose.Font for .NET."
---

On this page you will find the example of using the Aspose solution for converting from TrueType font to Web Open Font Format.
_______

Use the following namespaces at the head of the file:
{{< highlight csharp >}} 
using Aspose.Font.Sources;
using Aspose.Font.Ttf;
using System;
using System.IO;
{{< /highlight >}}

If you need to know the Aspose conversion fundamentals get to 
 [How to convert the font into the desired format?](https://docs.aspose.com//font/net/convert/#how-to-convert-the-font-into-the-desired-format) chapter.

Then take the next steps:

1. Open TTF font.
{{< highlight csharp >}}
    // Open ttf font
    string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);
{{< /highlight >}}

2. Write the output settings for the WOFF2 format.
{{< highlight csharp >}}
    // Woff2 output settings
    string outPath = Path.Combine(OutputDir, "TtfToWoff2_out1.woff2");
    FileStream outStream = File.Create(outPath);
{{< /highlight >}}

3. Make conversion from TTF to WOFF2 and save the result using [*SaveToFormat()*](https://apireference.aspose.com/font/net/aspose.font/font/methods/savetoformat) method of the base abstract [*Font*](https://apireference.aspose.com/font/net/aspose.font/font) class instance.
{{< highlight csharp >}}
    // Convert ttf to woff2
    font.SaveToFormat(outStream, FontSavingFormats.WOFF2);
{{< /highlight >}}

{{% alert color="primary" %}}
For more examples check [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Also go to our free online [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose to see the functionality.
{{% /alert %}}