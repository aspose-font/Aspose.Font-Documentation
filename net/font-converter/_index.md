---
title: Font Converter
type: docs
weight: 50
url: /net/convert/
---



## Overview

The Aspose.Font for .NET library allows you to convert fonts between popular formats: [TrueType](https://docs.fileformat.com/font/ttf/), [Web Open Font Format](https://docs.fileformat.com/font/woff/), [Embedded OpenType](https://docs.fileformat.com/font/eot/), [Type 1](https://docs.fileformat.com/font/type1/), [Compact Font Format](https://docs.fileformat.com/font/cff/) and other. At the same time, you can save the font in the following formats: [TrueType](https://docs.fileformat.com/font/ttf/), [Web Open Font Format](https://docs.fileformat.com/font/woff/). Web Open Font Format is supported for the 1 and 2.0 versions.

{{% alert color="primary" %}}

You can check the conversion quality using free online [*Font Conversion*](https://products.aspose.app/font/conversion) application.

{{% /alert %}}

## Simple Using

You need to use the following namespaces:

{{< highlight csharp >}} 
using Aspose.Font.Sources;
using Aspose.Font.Ttf;
using System;
using System.IO;
{{< /highlight >}}

For convert font and save resultant output stream, use [*SaveToFormat*](https://apireference.aspose.com/font/net/aspose.font/font/methods/savetoformat) method of the base abstract [*Font*](https://apireference.aspose.com/font/net/aspose.font/font) class instance.  [*SaveToFormat*](https://apireference.aspose.com/font/net/aspose.font/font/methods/savetoformat) method takes two arguments: output stream and [*FontSavingFormats*](https://apireference.aspose.com/font/net/aspose.font/fontsavingformats) for choose output font format. 

{{< highlight csharp >}}
    // Open ttf font
    string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);

    // Woff output settings
    string outPath = Path.Combine(OutputDir, "TtfToWoff_out1.woff");
    FileStream outStream = File.Create(outPath);
    
    // Convert ttf to woff
    font.SaveToFormat(outStream, FontSavingFormats.WOFF);
{{< /highlight >}}

For font conversion also you can use the [*Convert*](https://apireference.aspose.com/font/net/aspose.font/ifont/methods/convert) method of the [*IFont*](https://apireference.aspose.com/font/net/aspose.font/ifont) interface. However, at the moment this method only works when converting to [TTF](https://docs.fileformat.com/font/ttf/). The example below illustrates how to use this conversion scenario.


{{< highlight csharp >}}
    // Open Type 1 font
    string fontPath = Path.Combine(DataDir, "Courier.pfb");
    FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);

    // Convert type1 to ttf
    Font ttfFont = font.Convert(FontType.TTF) as Aspose.Font.Ttf.TtfFont;
    ttfFont.Save(Path.Combine(OutputDir, "Type1ToTtf_out2.ttf"));
{{< /highlight >}}

{{% alert color="primary" %}}

All of the code snippets provided here can be found in the [*Aspose.Font.Examples.sln*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples)  solution, which is located in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) folder of the [Aspose.Font Documentation](https://github.com/aspose-font/Aspose.Font-Documentation) github repository.

{{% /alert %}}


## Available font conversion
[**TTF to WOFF**](ttf-to-woff) - Describes conversion TrueType Font to Web Open Font Format

[**TTF to WOFF2**](ttf-to-woff2) - Describes conversion TrueType Font to Web Open Font Format version 2.0

[**WOFF to TTF**](woff-to-ttf) - Describes conversion Web Open Font Format to TrueType Font

[**WOFF to WOFF2**](woff-to-woff2) - Describes conversion Web Open Font Format to Web Open Font Format version 2.0

[**WOFF2 to TTF**](woff2-to-ttf) - Describes conversion Web Open Font Format version 2.0 to TrueType Font

[**WOFF2 to WOFF**](woff2-to-woff) - Describes conversion Web Open Font Format version 2.0 to Web Open Font Format

[**Convert EOT**](eot) - Describes conversion Embedded OpenType Font

[**Convert Type1**](type1) - Describes conversion Type 1 Font

[**Convert CFF**](cff) - Describes conversion Compact Font Format



