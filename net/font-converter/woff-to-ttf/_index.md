---
title: Convert WOFF to TTF |.NET
linktitle: Convert WOFF to TTF
type: docs
weight: 30
url: /net/convert/woff-to-ttf
keywords: woff converter, convert webfont to ttf
description: Examples illustrated with code snippets of using Aspose.Font for .NET for converting font woff to ttf
---

The information below is to describe how to use the Aspose.Font for .NET to convert fonts from `Web Open Font Format` to `True Type font`.
_______

Apply the next namespaces at the head of the file:
{{< highlight csharp >}} 
using Aspose.Font.Sources;
using Aspose.Font.Ttf;
using System;
using System.IO;
{{< /highlight >}}

Conversion fundamentals are available in [How to convert the font into the desired format?](https://docs.aspose.com//font/net/convert/#how-to-convert-the-font-into-the-desired-format) chapter.

To fulfil the conversion from `WOFF` to `TTF` font you need to follow the next steps:

1. Open `Woff` font file.
{{< highlight csharp >}} 
    // Open woff font
    string fontPath = Path.Combine(DataDir, "Montserrat-Regular.woff");
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);
{{< /highlight >}}

2. Specify the output setting.
{{< highlight csharp >}} 
    // Ttf output settings
    string outPath = Path.Combine(OutputDir, "WoffToTtf_out1.ttf");
    FileStream outStream = File.Create(outPath);
{{< /highlight >}}

3. Use [*SaveToFormat()*](https://reference.aspose.com/font/net/aspose.font/font/savetoformat/) method of the base abstract [*Font*](https://reference.aspose.com/font/net/aspose.font/font/) class instance to transform font and save results.
{{< highlight csharp >}} 
    // Convert woff to ttf
    font.SaveToFormat(outStream, FontSavingFormats.TTF);
{{< /highlight >}}

{{% alert color="primary" %}}
If you need more examples of the solution you may check [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

To try the functionality you can also go to our free web [*Font Conversion application*](https://products.aspose.app/font/conversion) application from Aspose.
{{% /alert %}}