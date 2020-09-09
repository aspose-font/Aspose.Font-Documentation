---
title: Loading, Extracting Data and Saving
type: docs
weight: 10
url: /net/loading-saving-cff-fonts/
---
## **Load CFF Font from Disc**
Aspose.Font for .NET API lets you read CFF Font types from files stored in your digital storage. CFF font files stored on disc can be loaded by using the following steps.
 * Define a new object of FontDefinition class
 * Specify FontType as CFF and FontFileDefinition as cff
 * Create a CffFont object and open the font file from FontDefinition object defined in the earlier step

{{< gist "aspose-com-gists" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-CSharp-WorkingWithCFFFonts-LoadCFFFont-LoadCFFFromDisc.cs" >}}

### **Load CFF Font from Byte Array**
You can also load CFF fonts from stream using the following code sample.

{{< gist "aspose-font" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-CSharp-WorkingWithCFFFonts-LoadCFFFont-LoadCffFromByteArray.cs" >}}

### **Save CFF Font**
Once you load a CFF file, you may work with the font file, update some parameters and would like to save the file to disc. Aspose.Font for .NET lets you save CFF file to disc using the following steps.

 * * Define a new object of FontDefinition class
 * Specify FontType as CFF and FontFileDefinition as cff
 * Create a CffFont object and open the font file from FontDefinition object defined in the earlier step
 * Make the required updates and save the updated Font file to disc using the CffFont's Save method

 {{< gist "aspose-com-gists" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-CSharp-WorkingWithCFFFonts-SaveCFFToDisc-1.cs" >}}
