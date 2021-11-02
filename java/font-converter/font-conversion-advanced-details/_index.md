---
title: Font Conversion. Advanced details | Java
linktitle: Font Conversion. Advanced details
type: docs
weight: 100
url: /java/convert/advanced-method-for-font-conversiton
keywords: front convertor java, font converter java, font format converter java
description: To convert font formats with Aspose is pretty easy now. But sometimes you need to read/modify converted font data before saving the font. The method described is aimed to help with it.
---

In some cases, there is a sense to read/modify converted font data before saving the font.

Method [*com.aspose.font.Font.convert(FontType fontType)*](https://apireference.aspose.com/font/java/com.aspose.font/Font#convert-com.aspose.font.FontType-) was designed for such cases. This method converts a font into the type specified and 
returns the object inherited from [*com.aspose.font.Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) class which corresponds to [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) value, passed into [*convert()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#convert-com.aspose.font.FontType-) method.

The next table shows a map of coherence between [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) values and objects, inherited from the base [*com.aspose.font.Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) class.


| **Font type**| **Font object**|
| :- | :- |
|`TTF`|com.aspose.font.TtfFont|
|`Type1`|com.aspose.font.Type1Font|
|`CFF`|com.aspose.font.CffFont|
|`OTF`|com.aspose.font.TtfFont|


Use resultant font object to access/change font properties before saving resultant font or instead of saving resultant font.

At the current moment method [*convert()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#convert-com.aspose.font.FontType-) supports conversion only into `TrueType` font format (FontType.TTF), so it always returns 
the object of type [*TtfFont*](https://apireference.aspose.com/font/java/com.aspose.font/TtfFont) as result of conversion independently of source font used. 

Next code snippet loads `CFF` font `CenturyGothic` from disk, converts it into `TrueType` format, and changes the name of the converted font to "CenturyGothic_Converted".

First, use the next statements:
{{< highlight java >}} 
    package com.aspose.font;

    import java.io.FileOutputStream;
    import java.io.IOException;
    import java.nio.file.Files;
    import java.nio.file.Paths;

    import com.aspose.font.ByteContentStreamSource;
    import com.aspose.font.FileSystemStreamSource;
    import com.aspose.font.Font;
    import com.aspose.font.FontDefinition;
    import com.aspose.font.FontFileDefinition;
    import com.aspose.font.FontSavingFormats;
    import com.aspose.font.FontType;
    import com.aspose.font.TtfFont;
{{< /highlight >}}

Fulfill the next actions:

1. Open the font.
2. Convert the font into `TrueType` format.
3. Change the name of the converted font.
4. Notify the output settings.
5. Save the resultant with the just changed name.

{{< highlight java >}} 
    // Open cff font
    String fontPath = Paths.get(getDataDir(), "CenturyGothic.cff").toString();
    FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new FileSystemStreamSource(fontPath)));
    Font font = Font.open(fontDefinition);

    //Convert font into TrueType format and cast font returned to com.aspose.font.TtfFont
    Font destFont = (TtfFont)font.convert(FontType.TTF);

    //Change name of converted font
    destFont.setFontName("CenturyGothic_Converted");		
		
    // Output Ttf settings
    String outPath = Paths.get(getOutputDir(), "CffToTtf_out.ttf").toString();
		
    //Save the resultant font with the changed font name
    destFont.save(outPath);	
{{< /highlight >}}

{{% alert color="primary" %}}
The full range of examples for using Aspose.Font for Java is placed in [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples/convertfont), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples/src/main/java/com/aspose/font/examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) github repository. 
{{% /alert %}}
