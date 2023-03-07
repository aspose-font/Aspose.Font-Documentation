---
title: Load, Extract Data and Save from TTF | .NET
title: Loading, Extracting Data and Saving from TrueType Fonts
type: docs
weight: 10
url: /net/loading-saving-truetype-opentype-fonts/
description: C# APIs for the developers to manipulate and font files. Learn the fundamentals on how to load and save TTF and OTF fonts within .NET.
---
## **Load TrueType Font from Disc**
Aspose.Font for .NET API lets you read TrueType Font types from files stored in your digital storage. TrueType font files stored on disc can be loaded by using the following steps.
 * Define a new object of FontDefinition class
 * Specify FontType as TTF and FontFileDefinition as ttf
 * Create a TtfFont object and open the font file from FontDefinition object defined in the earlier step

{{< gist "aspose-com-gists" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-CSharp-WorkingWithTrueTypeAndOpenTypeFonts-LoadTrueTypeFonts-1.cs" >}}

## **Save TTF Font**
Once you load a TTF file, you may work with the font file, update some parameters and would like to save the file to disc. Aspose.Font for .NET lets you save TTF file to disc using the following steps.

 * Define a new object of FontDefinition class
 * Specify FontType as TTF and FontFileDefinition as ttf
 * Create a TtfFont object and open the font file from FontDefinition object defined in the earlier step
 * Make the required updates and save the updated Font file to disc using the TtfFont's Save method

 {{< gist "aspose-com-gists" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-CSharp-WorkingWithTrueTypeAndOpenTypeFonts-SaveTTFToDisc-1.cs" >}}

{{% alert color="primary" %}}
For more examples go to [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Also, check our free online [*Font Manipulation Applications*](https://products.aspose.app/font/) to see how the functionality can be implemented in a web solution.
{{% /alert %}}
