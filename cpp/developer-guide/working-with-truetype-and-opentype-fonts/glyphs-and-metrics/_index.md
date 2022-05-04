---
title: Work with Glyphs and Metrics of TrueType Fonts | C++
linktitle: Work with Glyphs and Metrics of TrueType Fonts
type: docs
weight: 15
url: /cpp/glyphs-and-metrics-truetype-opentype-fonts/
---
## **Get Font Metrics**
Font files can be contain font metrics information such as `Ascender`, `Descender`, `TypoAscender`, `TypoDescender` and `UnitsPerEm`. This information can be retrieved from font files using Aspose.Font for C++ API can read the Font Metrics information from the TrueType Font file using the following sample code.

{{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithTrueTypeAndOpenTypeFonts-GetFontMetrics-1.cpp" >}}

## **Detect Latin Symbols**
Aspose.Font for C++ can detect Latin Symbols from TrueType font files. This can be achieved using the following sample code.

 * Load the Font file using FontFileDefinition
 * Decode the GlyphId using the DecodeToGid() method
 {{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithTrueTypeAndOpenTypeFonts-DetectLatinSymbolsSupport-1.cpp" >}}

## **Extract License Restrictions**
Font files can contain licensing information in one of the following modes.
* `Editable Embedding` - Font may be embedded, and may be temporarily loaded on other systems. In addition, editing is permitted, including ability to format new text using the embedded font, and changes may be saved.
* `Installable Embedding` - Font may be embedded, and may be permanently installed for use on a remote systems, or for use by other users.
* `Preview and Print Embedding` - Font may be embedded, and may be temporarily loaded on other systems for purposes of viewing or printing the document.
* `Restricted Embedding` - Font must not be modified, embedded or exchanged in any manner without first obtaining explicit permission of the legal owner.

Using Aspose.Font for C++, licensing restrictions can be extracted from font files. The following C++ code sample shows how to use an object of Aspose.Font.Ttf.LicenseFlags to get information about font license restrictions(flag fsType from table OS/2) in convenient form.
{{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithTrueTypeAndOpenTypeFonts-ExtractLicenseRestrictions-1.cpp" >}}
