---
title: Convert WOFF2 to TTF | .NET
linktitle: Convert WOFF2 to TTF
type: docs
weight: 50
url: /net/convert/woff2-to-ttf
keywords: woff2 to ttf converter, woff2 font converter
description: Easy-to-use .NET library for font conversion from Aspose.FONT. Learn how to convert woff2 to ttf with the documentation. Code examples are attached.
---

This page is aimed to show how to convert fonts from `Web Open Font Format 2` to `True Type` font using the Aspose.Font for .NET. 
_______

Set the following namespaces at the head of the file:
{{< highlight csharp >}} 
using Aspose.Font.Sources;
using Aspose.Font.Ttf;
using System;
using System.IO;
{{< /highlight >}}

 [How to convert the font into the desired format?](https://docs.aspose.com//font/net/convert/#how-to-convert-the-font-into-the-desired-format) chapter will let you know about the Aspose conversion fundamentals.

To convert `WOFF2` to `TTF` make the next actions:

1. **Open `Woff2` font.**
Define a font path as a string variable named "fontPath" using the *Path.Combine()* Method to combine a directory path (DataDir) with the font file name ("Montserrat-Regular.woff2"). Then create a FontDefinition object using the *FontType.TTF* enumeration and a *FontFileDefinition* object. Finally, call the *Font.Open()* Method with the *fontDefinition* object as a parameter, which creates and returns a Font object that represents the specified font file.
{{< highlight csharp >}} 
    // Open woff2 font
    string fontPath = Path.Combine(DataDir, "Montserrat-Regular.woff2");
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff2", new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);
{{< /highlight >}}

2. **Add the output setting.**
This code creates a new file in the specified output directory using the File.Create() Method and returns a stream object for the newly created file. 
{{< highlight csharp >}} 
    // Ttf output settings
    string outPath = Path.Combine(OutputDir, "Woff2ToTtf_out1.ttf");
    FileStream outStream = File.Create(outPath);
{{< /highlight >}}

3. **Convert font and save the result.**
Save a font object to a specified file format using the *SaveToFormat* Method. In this case, the font data is written to a file represented by a stream object, and the font is saved in the `TTF` format.
{{< highlight csharp >}} 
    // Convert woff2 to ttf
    font.SaveToFormat(outStream, FontSavingFormats.TTF);
{{< /highlight >}}

{{% alert color="primary" %}}
Go to [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository for getting more examples.

Aspose also offers a free web [*Font Conversion application*](https://products.aspose.app/font/conversion) application where you can try the functionality online.
{{% /alert %}}
