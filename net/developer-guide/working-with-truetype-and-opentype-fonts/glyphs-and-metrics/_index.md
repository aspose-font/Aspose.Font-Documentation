---
title: Work with Glyphs and Metrics of TrueType Fonts in Java
type: docs
weight: 15
url: /net/glyphs-and-metrics-truetype-opentype-fonts/
---
## **Get Font Metrics**
Font metrics contain information such as `Ascender`, `Descender`, `TypoAscender`, `TypoDescender` and `UnitsPerEm`. Aspose.Font for .NET API can read the Font Metrics information from the TrueType Font file using the following sample code.

{{< gist "aspose-com-gists" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-CSharp-WorkingWithTrueTypeAndOpenTypeFonts-GetFontMetrics-1" >}}

## **Detect Latin Symbols**
Aspose.Font for .NET lets you detect Latin Symbols from TrueType font files. This can be achieved using the following sample code.

 * Load the Font file using FontFileDefinition
 * Decode the GlyphId using the DecodeToGid() method
 {{< gist "aspose-com-gists" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-CSharp-WorkingWithTrueTypeAndOpenTypeFonts-DetectLatinSymbolsSupport-1.cs" >}}

## **Extract License Restrictions**
Use Aspose.Font for .NET API to extract licensing restrictions from font files. Fonts can have licensing information embedded into these in one of the following modes.
 * `Editable Embedding` - Font may be embedded, and may be temporarily loaded on other systems. In addition, editing is permitted, including ability to format new text using the embedded font, and changes may be saved.
 * `Installable Embedding` - Font may be embedded, and may be permanently installed for use on a remote systems, or for use by other users.
 * `Preview and Print Embedding` - Font may be embedded, and may be temporarily loaded on other systems for purposes of viewing or printing the document.
 * `Restricted Embedding` - Font must not be modified, embedded or exchanged in any manner without first obtaining explicit permission of the legal owner.

The following code sample shows how to use an object Aspose.Font.Ttf.LicenseFlags to get information about font license restrictions(flag fsType from table OS/2) in convenient form.
{{< gist "aspose-com-gists" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-CSharp-WorkingWithTrueTypeAndOpenTypeFonts-ExtractLicenseRestrictions-1.cs" >}}
