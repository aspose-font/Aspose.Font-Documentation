---
title: Work with Glyphs and Metrics of Type1 Fonts
type: docs
weight: 20
url: /java/glyphs-and-metrics-type1-fonts/
---
## **Get Font Metrics**
Font metrics contain information such as `Ascender`, `Descender`, `TypoAscender`, `TypoDescender` and `UnitsPerEm`. Aspose.Font for Java API can read the Font Metrics information from the Type1 Font File using the following sample code.

{{< gist "aspose-com-gists" "a018220e20bd5728294c39d632ebf22b" "Examples-src-main-java-com-aspose-font-WorkingWithType1Fonts-GetFontMetrics-1.java" >}}

## **Detect Latin Symbols**
Aspose.Font for Java lets you detect Latin Symbols from Type1 font files. This can be achieved using the following sample code.

 * Load the Font file using FontFileDefinition
 * Decode the GlyphId using the DecodeToGid() method
 {{< gist "aspose-com-gists" "a018220e20bd5728294c39d632ebf22b" "Examples-src-main-java-com-aspose-font-WorkingWithType1Fonts-DetectLatinSymbolsSupport-1.java" >}}
