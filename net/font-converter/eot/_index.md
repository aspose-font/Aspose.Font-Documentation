---
title: Convert EOT | .NET
linktitle: Convert EOT
type: docs
weight: 70
url: /net/convert/eot
keywords: convert eot to ttf, eot woff woff2
description: Aspose has now in its family a solution that is aimed to convert different font formats. Here you will find examples of how to convert CFF format.
---

It is known that `Embedded Open Type` (`EOT`) is supported mainly by the Internet Explorer browser. Because of that, to render correctly you will need to build in your software converter to `EOT` from other font formats and vice versa. In this article, it is described how to use the Aspose.Font for .NET to convert `EOT` to `TTF`, `EOT` to `WOFF`, and `EOT` to `WOFF2`.
_____________

For all the conversions you will need these namespaces:

{{< highlight csharp >}}
using Aspose.Font.Sources;
using System;
using System.IO;
{{< /highlight >}}

The information about the font conversion fundamentals is notified in [How to convert the font into the desired format?](https://docs.aspose.com//font/net/convert/#how-to-convert-the-font-into-the-desired-format) chapter.

## Convert EOT to TTF

To transform `Embedded Open Type` to `True Type Format` you will need:
1. Open `EOT` font.
2. Notify the output settings for `TTF` font.
3. Run the fon conversion.

{{< highlight csharp >}}
    // Open eot font, passing TTF as value for FontType, TtfFont will be returned as result of call Font.Open()
    string fontPath = Path.Combine(DataDir, "LoraRegular.eot");
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);

    // Ttf output settings
    string outPath = Path.Combine(OutputDir, "EotToTtf_out1.ttf");
    
    // Save opened font to TrueType format
    font.Save(outPath);
{{< /highlight >}}

## Convert EOT to WOFF
To get `Web Open Font Format` from `Embedded Open Type` the next actions have to be done:

1. Open `EOT` font.
2. Notify the output settings for the `WOFF` font.
3. Fulfill the font conversion.

{{< highlight csharp >}}
    // Open eot font
    string fontPath = Path.Combine(DataDir, "LoraRegular.eot");
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);

    // Woff output settings
    string outPath = Path.Combine(OutputDir, "EotToWoff_out3.woff");
    using (FileStream outStream = File.Create(outPath))
    {
        // Convert eot to woff
        font.SaveToFormat(outStream, FontSavingFormats.WOFF);
    }
{{< /highlight >}}

## Convert EOT to WOFF2

If you need to get the second version of the `Web Open Font Format` from `Embedded Open type` the taken steps are the same:
1. Open `EOT` Font.
2. Add the output settings for the `WOFF2` font.
3. Convert `EOT` to `WOFF2` and save the result.

{{< highlight csharp >}}
    // Open eot font
    string fontPath = Path.Combine(DataDir, "LoraRegular.eot");
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);

    // Woff2 output settings
    string outPath = Path.Combine(OutputDir, "EotToWoff2_out4.woff2");
    using (FileStream outStream = File.Create(outPath))
    {
        // Convert eot to woff2
        font.SaveToFormat(outStream, FontSavingFormats.WOFF2);
    }
{{< /highlight >}}

{{% alert color="primary" %}}
Our folder [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation)/ has these and many more examples on how to use the Aspose solution.

Similar functionality is also given by the free online [*Font Conversion*](https://products.aspose.app/font/conversion) application. Learn what opportunities it gives to you.
{{% /alert %}}
