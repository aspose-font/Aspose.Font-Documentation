---
title: Work with Glyphs and Metrics of TrueType Fonts
type: docs
weight: 15
url: /java/glyphs-and-metrics-truetype-opentype-fonts/
---
## **Get Font Metrics**

Font metrics refer to informaiton such as `Ascender`, `Descender`, `TypoAscender`, `TypoDescender` and `UnitsPerEm`. Aspose.Font for Java API can be used to open TTF font files and read the Font Metrics information from these using the following sample code.

{{< gist "aspose-com-gists" "a018220e20bd5728294c39d632ebf22b" "Examples-src-main-java-com-aspose-font-WorkingWithTrueTypeFonts-GetFontMetrics-1.java" >}}

## **Detect Latin Symbols**
Aspose.Font for .API lets you detect Latin Symbols from TrueType font files. This can be achieved using the following sample code.

 * Load the Font file using FontFileDefinition
 * Decode the GlyphId using the DecodeToGid() method
 {{< gist "aspose-com-gists" "a018220e20bd5728294c39d632ebf22b" "Examples-src-main-java-com-aspose-font-WorkingWithTrueTypeFonts-DetectLatinSymbolsSupport-1.java" >}}

## **Extract License Restrictions**
Use Aspose.Font for Java API to extract licensing restrictions from font files. Fonts can have licensing information embedded into these in one of the following modes.

 * `Editable Embedding` - Font may be embedded, and may be temporarily loaded on other systems. In addition, editing is permitted, including ability to format new text using the embedded font, and changes may be saved.
 * `Installable Embedding` - Font may be embedded, and may be permanently installed for use on a remote systems, or for use by other users.
 * `Preview and Print Embedding` - Font may be embedded, and may be temporarily loaded on other systems for purposes of viewing or printing the document.
 * `Restricted Embedding` - Font must not be modified, embedded or exchanged in any manner without first obtaining explicit permission of the legal owner.

The following code sample shows how to use an object Aspose.Font.Ttf.LicenseFlags to get information about font license restrictions(flag fsType from table OS/2) in convenient form.
{{< gist "aspose-com-gists" "a018220e20bd5728294c39d632ebf22b" "xamples-src-main-java-com-aspose-font-WorkingWithTrueTypeFonts-ExtractLicenseRestrictions-1.java" >}}
