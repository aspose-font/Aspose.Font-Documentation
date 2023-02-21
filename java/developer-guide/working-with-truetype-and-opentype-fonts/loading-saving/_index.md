---
title: Load, Extract Data and Save from TTF | Java
linktitle: Loading, Extracting Data and Saving from TrueType Fonts
type: docs
weight: 10
url: /java/loading-saving-truetype-opentype-fonts/
---
## **Load TrueType Font from Disc**
Aspose.Font for Java API lets you read TrueType Font types from files stored in your digital storage. TrueType font files stored on disc can be loaded by using the following steps.
 * Define a new object of FontDefinition class
 * Specify FontType as TTF and FontFileDefinition as ttf
 * Create a TtfFont object and open the font file from FontDefinition object defined in the earlier step

{{< gist "aspose-com-gists" "a018220e20bd5728294c39d632ebf22b" "Examples-src-main-java-com-aspose-font-WorkingWithTrueTypeFonts-LoadTrueTypeFonts-1.java" >}}

## **Save TTF Font**
Once you load a TTF file, you may work with the font file, update some parameters and would like to save the file to disc. Aspose.Font for Java lets you save TTF file to disc using the following steps.

 * Define a new object of FontDefinition class
 * Specify FontType as TTF and FontFileDefinition as ttf
 * Create a TtfFont object and open the font file from FontDefinition object defined in the earlier step
 * Make the required updates and save the updated Font file to disc using the TtfFont's Save method

 {{< gist "aspose-com-gists" "a018220e20bd5728294c39d632ebf22b" "Examples-src-main-java-com-aspose-font-WorkingWithTrueTypeFonts-SaveTTFToDisc-4.java" >}}
