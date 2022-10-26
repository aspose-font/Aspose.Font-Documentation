---
title: Aspose.Font for .NET 22.10 Release Notes
type: docs
weight: 30
url: /net/aspose-font-for-net-22-10-release-notes/
description: This page contains new Aspose.Font for .NET features, enhancement, and bug fixes in 2022, version 22.10. 
sitemap:
    changefreq: "weekly"
    priority: 0.7
---

{{% alert color="primary" %}} 

This page contains release notes information for Aspose.Font for .NET 22.10.

{{% /alert %}} 

Support for copying composite glyphs in *TrueType* font converters has been added.

Support for metered license has been added.

| Key | Summary | Category |
|---|---|---|
| FONTNET-412 | Added support for copying composite glyphs in TrueType font converters | New Feature |
| FONTNET-453 | Optimized size of the 'cmap' table with format 12 for TrueType fonts created by font converters | New Feature |
| FONTNET-386 | Added support for metered license | New Feature |
| FONTNET-439 | Fixed bug with incorrect size for table 'loca' when converting some fonts to 'woff' format | Bug |
| FONTNET-405 | Fixed bug with GetGlyphsForText method returning glyphId incorrectly | Bug |

## Public API and Backwards Incompatible Changes

### Added APIs
* Class Aspose.Font.FontFactory
* Constructor Aspose.Font.FontFactory
* Method Aspose.Font.FontFactory.Open(Aspose.Font.Sources.FontDefinition)
* Method Aspose.Font.FontFactory.Open(Aspose.Font.FontType,Aspose.Font.Sources.StreamSource)
* Method Aspose.Font.FontFactory.Open(Aspose.Font.FontType,System.String)
* Method Aspose.Font.FontFactory.Open(Aspose.Font.FontType,System.Byte[])
* Class Aspose.Font.Metered
* Constructor Aspose.Font.Metered
* Method Aspose.Font.Metered.SetMeteredKey(System.String,System.String)
* Method Aspose.Font.Metered.GetConsumptionQuantity
* Method Aspose.Font.Metered.GetConsumptionCredit
## Got Queries?
If you have any query related to Aspose.Font for .NET API, please feel free to write to reach us on [Aspose.Font forum](https://forum.aspose.com/c/font/). We'll be glad to assist you with your inquiries.
