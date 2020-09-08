---
title: Loading, Extracting Data and Saving from TrueType Fonts
type: docs
weight: 10
url: /cpp/loading-saving-truetype-opentype-fonts/
---
## **Load TrueType Font from Disc**
TrueType fonts can be stored to disc in files. Aspose.Font for C++ API can load such files and read font information from these. The following steps can be used to read TrueType font file in C++ applications.
 * Create a new object of FontDefinition class
 * Use FontType as TTF and FontFileDefinition as ttf
 * Declare a TtfFont object and open the font file from FontDefinition object defined in the earlier step

{{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithTrueTypeAndOpenTypeFonts-LoadTrueTypeFonts-1.cpp" >}}

## **Save TTF Font**
Aspose.Font for C++ provides the capability to edit font files and save back the changes to disc. The following C++ code sample shows how to save an updated TTF font file to disc.

 * Define a new object of FontDefinition class
 * Specify FontType as TTF and FontFileDefinition as ttf
 * Create a TtfFont object and open the font file from FontDefinition object defined in the earlier step
 * Make the required updates and save the updated Font file to disc using the TtfFont's Save method

 {{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithTrueTypeAndOpenTypeFonts-SaveTTFToDisc-1.cpp" >}}
