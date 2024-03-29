---
title: Load, Extract Data and Save from TTF | C++
linktitle: Loading, Extracting Data and Saving from TrueType Fonts
type: docs
weight: 10
url: /cpp/loading-saving-truetype-opentype-fonts/
description: C++ APIs for the developers to manipulate and font files. Learn the fundamentals on how to load and save TTF fonts within C++.
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

  {{% alert color="primary" %}}
For more examples go to [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

You can also check our free online [*Font Manipulation Applications*](https://products.aspose.app/font/) to see how the functionality can be implemented in a web solution.
{{% /alert %}}
