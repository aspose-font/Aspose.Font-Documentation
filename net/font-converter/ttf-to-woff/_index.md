---
title: Convert TTF to WOFF | .NET
linktitle: Convert TTF to WOFF
type: docs
keywords: "font converter ttf to woff, convert ttf font to webfont"
description: "Examples with code snippets how to use Aspose library to convert ttf to woff "
weight: 10
url: /net/convert/ttf-to-woff
---



If you came across a font you like to use in your interface, and it is only available in TTF format, but you use WOFF in your project, you may need a solution that converts fonts.
The following documentation will show you how to easily use the Aspose library to transform fonts from True type to WebFont.

______

Use the following namespaces at the head of the file:

{{< highlight csharp >}} 
  using Aspose.Font.Sources;
  using Aspose.Font.Ttf;
  using System;
  using System.IO;
{{< /highlight >}}

The fundamentals for the conversion are placed in  [How to convert the font into the desired format?](https://docs.aspose.com//font/net/convert/#how-to-convert-the-font-into-the-desired-format) section.

To convert TTF to WOFF you will need to take the following steps:


1. Open TTF font:
{{< highlight csharp >}}
// Open ttf font
    string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);
{{< /highlight >}}

2. Write the settings for the output stream:
{{< highlight csharp >}}
// Woff output settings
    string outPath = Path.Combine(OutputDir, "TtfToWoff_out1.woff");
    FileStream outStream = File.Create(outPath);
{{< /highlight >}}

3. Convert font to WOFF:
{{< highlight csharp >}}
// Convert ttf to woff
    font.SaveToFormat(outStream, FontSavingFormats.WOFF);
{{< /highlight >}}

Here the [*SaveToFormat*](https://apireference.aspose.com/font/net/aspose.font/font/methods/savetoformat) method of the base abstract [*Font*](https://apireference.aspose.com/font/net/aspose.font/font) class instance was used. 
It takes two arguments: output stream and [*FontSavingFormats*](https://apireference.aspose.com/font/net/aspose.font/fontsavingformats) enumeration to choose output font format.

{{% alert color="primary" %}}
All of the code snippets provided and others are placed in the [*Aspose.Font.Examples.sln*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) solution, in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

To convert fonts online you may also try a free online [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose.
{{% /alert %}}