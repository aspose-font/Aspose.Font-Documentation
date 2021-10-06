---
title: Aspose.Font for .NET 20.12 Release Notes
type: docs
weight: 10
url: /net/aspose-font-for-net-20-12-release-notes/
---


WOFF format has been added. TTF and WOFF conversion option has been implemented. .NET 5 target framework has been supported. Some bugs have been fixed.


| Key | Summary | Category |
|---|---|---|
| FONTNET-147 | Public API for conversion functionality has been expanded | New Feature |
| FONTNET-152 | TTF converter has been developed | New Feature |
| FONTNET-159 | Conversion for Type1 format has been developed | New Feature |
| FONTNET-161 | Support WOFF format reading | New Feature |
| FONTNET-162 | .NET 5.0 Support | New Feature |
| FONTNET-153 | Fix bug occurred with notDef glyph mapping | Bug |
| FONTNET-156 | Fix bug related with adding of PostScript names into font 'name' table | Bug |
| FONTNET-169 | Wrong format file created when TrueType font convert to WOFF | Bug |

## Public API and Backwards Incompatible Changes
### Added APIs
 * Method Aspose.Font.Cff.CffFont.Convert(Aspose.Font.FontType)
 * Method  Aspose.Font.Font.SaveToFormat(System.IO.Stream,Aspose.Font.FontSavingFormats)
 * Method Aspose.Font.Font.Convert(Aspose.Font.FontType)
 * Enumeration Aspose.Font.FontSavingFormats
 * Enumeration member Aspose.Font.FontSavingFormats.TTF
 * Enumeration member Aspose.Font.FontSavingFormats.WOFF
 * Method Aspose.Font.IFont.Convert(Aspose.Font.FontType)
 * Method Aspose.Font.IFontSaver.SaveToFormat(System.IO.Stream,Aspose.Font.FontSavingFormats)
 * Method Aspose.Font.Ttf.TtfFont.Convert(Aspose.Font.FontType)
 * Method Aspose.Font.Type1.Type1Font.Convert(Aspose.Font.FontType)
 * Class Aspose.Font.WoffExceptions.WoffFormatException
 * Constructor Aspose.Font.WoffExceptions.WoffFormatException
 * Constructor Aspose.Font.WoffExceptions.WoffFormatException(System.String)
 * Constructor Aspose.Font.WoffExceptions.WoffFormatException(System.String,System.Exception)
 * Constructor Aspose.Font.WoffExceptions.WoffFormatException(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)


## Got Queries?
If you have any query related to Aspose.Font for .NET API, please feel free to write to reach us on [Aspose.Font forum](https://forum.aspose.com/c/font/). We'll be glad to assist you with your inquiries.
