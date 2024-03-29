---
title: Font Conversion. Advanced details | .NET
linktitle: Font Conversion. Advanced details
type: docs
weight: 100
url: /net/convert/advanced-method-for-font-conversiton
keywords: front convertor, font converter, font format converter
description: .NET API to Convert fonts from Aspose.Font. Sometimes you need to read converted font data before saving it. The method here is aimed to help with it.
---

In some cases, there is a sense to read/modify converted font data before saving the font.

Method [*Aspose.Font.Font.Convert(FontType fontType)*](https://reference.aspose.com/font/net/aspose.font/font/convert/) was designed for such cases. This method converts a font into the type specified and 
returns the object inherited from [*Aspose.Font.Font*](https://reference.aspose.com/font/net/aspose.font/font/) class which corresponds to [*FontType*](https://reference.aspose.com/font/net/aspose.font/fonttype/) value, passed into [*Convert()*](https://reference.aspose.com/font/net/aspose.font/font/convert/) method.

The next table shows a map of coherence between [*FontType*](https://reference.aspose.com/font/net/aspose.font/fonttype/) values and objects, inherited from the base [*Aspose.Font.Font*](https://reference.aspose.com/font/net/aspose.font/font/) class.


| **Font type**| **Font object**|
| :- | :- |
|`TTF`|Aspose.Font.Ttf.TtfFont|
|`Type1`|Aspose.Font.Type1.Type1Font|
|`CFF`|Aspose.Font.Cff.CffFont|
|`OTF`|Aspose.Font.Ttf.TtfFont|


Use resultant font object to access/change font properties before saving resultant font or instead of saving resultant font.

At the current moment method [*Convert()*](https://reference.aspose.com/font/net/aspose.font/font/convert/) supports conversion only into `TrueType` font format (FontType.TTF), so it always returns 
the object of type [*TtfFont*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/) as result of conversion independently of source font used. 

Next code snippet loads `CFF` font `CenturyGothic` from disk, converts it into `TrueType` format, and changes the name of the converted font to "CenturyGothic_Converted".

Fulfill the next actions:

1. Open the font.
2. Convert the font into `TrueType` format.
3. Change the name of the converted font.
4. Notify the output settings.
5. Save the resultant with the just changed name.

{{< highlight csharp >}} 
    // Open cff font
    string fontPath = Path.Combine(DataDir, "CenturyGothic.cff");
    FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);

    // Convert font into TrueType format and cast font returned to Aspose.Font.Ttf.TtfFont
    Aspose.Font.Ttf.TtfFont destFont = font.Convert(FontType.TTF) as Aspose.Font.Ttf.TtfFont;

    // Change name of converted font
    destFont.FontName = "CenturyGothic_Converted";

    // Ttf output settings
    string outPath = Path.Combine(OutputDir, "CffToTtf_out.ttf");

    // Save resultant font with font name changed
    destFont.Save(outPath);
{{< /highlight >}}

{{% alert color="primary" %}}
The full range of examples for using Aspose.Font for.NET is placed in [*Aspose.Font.Examples.sln*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) solution, in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) github repository. 
{{% /alert %}}
