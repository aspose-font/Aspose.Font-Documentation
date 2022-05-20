---
title: Font Conversion. Advanced details | C++
linktitle: Font Conversion. Advanced details
type: docs
weight: 100
url: /cpp/convert/advanced-method-for-font-conversiton
keywords: front convertor, font converter, font format converter
description: To convert fonts with Aspose is pretty easy. But sometimes you need to read converted font data before saving the it. The method here is aimed to help with it.
---

In some cases, there is a sense to read/modify converted font data before saving the font.

Method [*Aspose::Font::Font::Convert(Aspose::Font::FontType fontType)*](https://apireference.aspose.com/font/cpp/class/aspose.font.font#a60434df90332e764a44ae2f93fe6be56) was designed for such cases. This method converts a font into the type specified and 
returns the object inherited from [*Aspose::Font::Font*](https://apireference.aspose.com/font/cpp/class/aspose.font.font) class which corresponds to [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) value, passed into [*Convert()*](https://apireference.aspose.com/font/cpp/class/aspose.font.font#a60434df90332e764a44ae2f93fe6be56) method.

The next table shows a map of coherence between [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) values and objects, inherited from the base [*Aspose::Font::Font*](https://apireference.aspose.com/font/cpp/class/aspose.font.font) class.


| **Font type**| **Font object**|
| :- | :- |
|`TTF`|Aspose.Font.Ttf.TtfFont|
|`Type1`|Aspose.Font.Type1.Type1Font|
|`CFF`|Aspose.Font.Cff.CffFont|
|`OTF`|Aspose.Font.Ttf.TtfFont|


Use resultant font object to access/change font properties before saving resultant font or instead of saving resultant font.

At the current moment method [*Convert()*](https://apireference.aspose.com/font/cpp/class/aspose.font.font#a60434df90332e764a44ae2f93fe6be56) supports conversion only into `TrueType` font format (FontType::TTF), so it always returns 
the object of type [*TtfFont*](https://apireference.aspose.com/font/cpp/class/aspose.font.ttf.ttf_font) as result of conversion independently of source font used. 

Next code snippet loads `CFF` font `CenturyGothic` from disk, converts it into `TrueType` format, and changes the name of the converted font to "CenturyGothic_Converted".

Fulfill the next actions:

1. Open the font.
2. Convert the font into `TrueType` format.
3. Change the name of the converted font.
4. Notify the output settings.
5. Save the resultant with the just changed name.

```C++
	// Open cff font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"CenturyGothic.cff");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, System::MakeObject<FontFileDefinition>(u"cff", System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Convert font into TrueType format and cast font returned to Aspose.Font.Ttf.TtfFont
    System::SharedPtr<Aspose::Font::Ttf::TtfFont> destFont = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(font->Convert(Aspose::Font::FontType::TTF));
    
    // Change name of converted font
    destFont->set_FontName(u"CenturyGothic_Converted");
    
    // Ttf output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"CffToTtf_out.ttf");
    
    // Save resultant font with font name changed
    destFont->Save(outPath);
```

{{% alert color="primary" %}}
The full range of examples for using Aspose.Font for C++ is placed in [*Aspose.Font.Examples.CPP.sln*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) solution, in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) github repository. 
{{% /alert %}}