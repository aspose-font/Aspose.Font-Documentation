---
title: Loading and Extracting Data
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
