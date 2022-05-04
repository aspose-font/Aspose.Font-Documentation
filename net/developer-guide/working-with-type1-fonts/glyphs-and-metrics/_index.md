---
title: Work with Glyphs and Metrics of Type1 Fonts | .NET
linktitle: Work with Glyphs and Metrics of Type1 Fonts
type: docs
weight: 20
url: /net/glyphs-and-metrics-type1-fonts/
---
## **Get Font Metrics**
Font metrics contain information such as `Ascender`, `Descender`, `TypoAscender`, `TypoDescender` and `UnitsPerEm`. Aspose.Font for .NET API can read the Font Metrics information from the Type1 Font File using the following sample code.

{{< gist "aspose-com-gists" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-CSharp-WorkingWithType1Fonts-GetFontMetrics-1.cs" >}}

## **Detect Latin Symbols**
Aspose.Font for .NET lets you detect Latin Symbols from Type1 font files. This can be achieved using the following sample code.

 * Load the Font file using FontFileDefinition
 * Decode the GlyphId using the DecodeToGid() method
 {{< gist "aspose-com-gists" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-CSharp-WorkingWithType1Fonts-DetectLatinSymbolsSupport-1.cs" >}}
