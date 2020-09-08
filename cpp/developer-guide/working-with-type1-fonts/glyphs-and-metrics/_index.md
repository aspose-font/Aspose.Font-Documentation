---
title: Work with Glyphs and Metrics of Type1 Fonts
type: docs
weight: 20
url: /cpp/glyphs-and-metrics-type1-fonts/
---
## **Get Font Metrics**
Aspose.Font for C++ API can read Font Metrics information from Type1 fonts. The following code sample shows how to read metrics information such as `Ascender`, `Descender`, `TypoAscender`, `TypoDescender` and `UnitsPerEm`.

{{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithType1Fonts-GetFontMetrics_-1.cpp" >}}

## **Detect Latin Symbols**
Aspose.Font for C++ lets you detect Latin Symbols from Type1 font files in your C++ applications. This can be achieved using the following sample code.

 * Load the Font file using FontFileDefinition
 * Decode the GlyphId using the DecodeToGid() method
 {{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithType1Fonts-DetectLatinSymbolsSupport_-1.cpp" >}}
