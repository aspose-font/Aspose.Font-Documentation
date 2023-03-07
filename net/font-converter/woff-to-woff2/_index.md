---
title: Convert WOFF to WOFF2 | .NET
linktitle: Convert WOFF to WOFF2
type: docs
weight: 40
url: /net/convert/woff-to-woff2
keywords: woff to woff2, woff woff2
description: C# .NET API to convert fonts. This documentation on the Aspose solution is aimed to help you with the conversion from woff to woff2 format.
---

If you need to transform `Web OpenFont Format` to its version 2.0, this article provides you with the necessary information.
_____

Fill the head of the file with the following namespaces:
{{< highlight csharp >}} 
using Aspose.Font.Sources;
using Aspose.Font.Ttf;
using System;
using System.IO;
{{< /highlight >}}

If you want to learn the Aspose conversion fundamentals go to 
 [How to convert the font into the desired format?](https://docs.aspose.com//font/net/convert/#how-to-convert-the-font-into-the-desired-format) chapter to find them out.

 Taking the next three steps you will convert `WOFF` to `WOFF2`:

1. Open `Woff` font file.
{{< highlight csharp >}} 
    // Open woff font
    string fontPath = Path.Combine(DataDir, "Montserrat-Regular.woff");
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);
{{< /highlight >}}

2. Notify the output setting.
{{< highlight csharp >}} 
    // Woff2 output settings
    string outPath = Path.Combine(OutputDir, "WoffToWoff2_out1.woff2");
    FileStream outStream = File.Create(outPath);
{{< /highlight >}}

3. Transform the font into `WOFF2` format and save the result.
{{< highlight csharp >}} 
    // Convert woff to woff2
    font.SaveToFormat(outStream, FontSavingFormats.WOFF2);
{{< /highlight >}}

The code shows how to load a font file in the `WOFF` format. First, use the *Path.Combine()* Method to create a string variable *fontPath* to represent the full path of the font file. Then, create a *FontDefinition* object.

Next, call the *Font.Open()* Method with the *fontDefinition* object as a parameter to create a *Font* object. This object represents the font file loaded.

Then define a new file path where the converted font file will be saved. For this create a *FileStream* object using the *File.Create()* Method. This creates a new file in the specified location and returns a stream object that can be used to write data to the file.

Finally, call the *SaveToFormat()* Method on the Font object to save the font data in the `WOFF2` format. 

{{% alert color="primary" %}}
More examples of the solution are placed in [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Check the [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose and see the solutions it offers.
{{% /alert %}}