---
title: Licensing - Aspose.Font for C++
type: docs
weight: 70
url: /cpp/licensing/
---

## **Evaluate Aspose.Font**
You can easily download Aspose.Font for C++ product for evaluation purposes. Please refer to the [Aspose.Font for C++ download page](https://www.nuget.org/packages/Aspose.Font.cpp/) to find out the latest version. The evaluation download is same as the purchased download. The evaluation version simply becomes licensed when you add a few lines of code to apply the license.

### **Evaluation Version Limitations**
Evaluation version of Aspose.Font (without a license specified) provides full product functionality except some evaluation limitations. An evaluation supports working with the following fonts only.

 * CFF
 * Type1 Fonts and Montserrat
 * Noto Sans JP
 * Merriweather
 * Lora
 * Source Code Pro
 * TTF Fonts

If you want to try Aspose.Font out without evaluation limitations, request a 30 day temporary license. Please refer to [How to get a Temporary License?](http://www.aspose.com/corporate/purchase/faqs/temporary-license.aspx) for more information.

## **Applying a License**
Once you are happy with your [evaluation]() of Aspose.Font for C++, buy a license at the Aspose website: [Purchase Portal](http://www.aspose.com/purchase/default.aspx). Make yourself familiar with the different license types available. If you have any questions, [contact the Aspose sales team](http://www.aspose.com/corporate/contact/default.aspx) and they'll be happy to help you.

Every Aspose license carries a one-year subscription for free upgrades to any new versions or fixes that come out during this time. We provide free and unlimited technical support to both licensed and evaluation users.

The license is a plain text XML file that contains details such as the product name, number of licensed developers, subscription expiry date and so on. The file is digitally signed, so do not modify the file: even adding an extra line break to the file invalidates it.
### **When to Apply a License**
Follow these simple rules:

- The license only needs to be set once per application domain.
- You need to set the license before using any other Aspose.Font classes.
- Calling SetLicense multiple times is not harmful, but wastes processor time.
- If you are developing a Windows Forms or console application, call SetLicense in the startup code, before using Aspose.Font classes.
- When developing an ASP.NET application, call SetLicense from the Global.asax.cs file, in the Aplication_Start protected method. It is called once when the application starts.
- Do not call SetLicense from within the Page_Load methods since it means the license will be loaded every time a web page is loaded.
- If you are developing a class library, you call SetLicense from a static constructor of the class that uses Aspose.Font. The static constructor executes before an instance of your class is created making sure Aspose.Font license is properly set.
### **Apply License using File or Stream Object**
Use the [License.SetLicense](https://apireference.aspose.com/font/cpp/class/aspose.font.license) method to license the component. The easiest way to set a license is to put the license file in the same folder as the Aspose.Font.dll and specify the filename, without a path, as shown below.
#### **Loading a License from File**
This code snippet initializes a license stored in a file or in an embedded resource.

{{< gist "aspose-Font" "cce69e51f567ea17ef24bc35fef0f689" "Examples-CSharp-ApplyLicense-ApplyLicenseByPath-ApplyLicenseByPath.cs" >}}
#### **Loading a License from a Stream Object**
These code snippets initialize the license from stream.

{{< gist "aspose-Font" "cce69e51f567ea17ef24bc35fef0f689" "Examples-CSharp-ApplyLicense-ApplyLicenseUsingFileStream-ApplyLicenseUsingFileStream.cs" >}}
