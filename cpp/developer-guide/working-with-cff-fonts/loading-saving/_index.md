---
title: Loading, Extracting Data and Saving
type: docs
weight: 10
url: /cpp/loading-saving-cff-fonts/
---
## **Load CFF Font from Disc**
Aspose.Font for C++ API allows to load CFF fonts from disc files on your computer. The following steps can be used to load a CFF font file:
 * Create a new object of FontDefinition class
 * Choose FontType as CFF and FontFileDefinition as cff
 * Declare a CffFont object and open the font file from FontDefinition object defined in the earlier step

{{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithCFFFonts-LoadCFFFont-LoadCFFFromDisc.cpp" >}}

### **Load CFF Font from Byte Array**
A CFF font file can be loaded from stream using the following code sample.

{{< gist "aspose-font" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithCFFFonts-LoadCFFFont-LoadCffFromByteArray.cpp" >}}

### **Save CFF Font**
Once a CFF file is loaded, it can be manipulated as per requirements in your C++ applications and save back to disc. Aspose.Font for C++ API provides the capability to save the updated CFF file to disc as shown in the following steps.

 * Create a new object of FontDefinition class
 * Choose FontType as CFF and FontFileDefinition as cff
 * Declare a CffFont object and open the font file from FontDefinition object defined in the earlier step
 * Make the required updates and save the updated Font file to disc using the CffFont's Save method

 {{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithCFFFonts-SaveCFFToDisc-1.cpp" >}}
