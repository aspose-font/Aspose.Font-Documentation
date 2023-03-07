---
title: Convert WOFF2 to WOFF | .NET
linktitle: Convert WOFF2 to WOFF
type: docs
weight: 60
url: /net/convert/woff2-to-woff
keywords: woff2 to woff,webfont2 to webfont
description: Aspose.Font for .NET provides you with an easy solution for converting fonts. This documentation will tell about the woff2 to woff conversion.
---

From this article, you will find out how to convert fonts from `WOFF2` to `WOFF` format with the help of the Aspose solution.
____

First, you need to add the following namespaces at the head of the file:

{{< highlight csharp >}} 
using Aspose.Font.Sources;
using Aspose.Font.Ttf;
using System;
using System.IO;
{{< /highlight >}}

Make sure you've learned the conversion fundamentals in [How to convert the font into the desired format?](https://docs.aspose.com//font/net/convert/#how-to-convert-the-font-into-the-desired-format) section.

Then to fulfil `WOFF2` to `WOFF` conversion you will need to take these three steps:

1. **Open `Woff2` font file.**
At this stage, you need to define a custom font and load it into a program using the Font class. First define the path to the font file, by combining a directory named "DataDir" with the filename using the *Path.Combine()* Method. Then create a *FontDefinition* object which specifies the type of font file (`TTF`) and its source. Loads the font using the *Font.Open()* Method, which returns a Font object.

{{< highlight csharp >}} 
    // Open woff2 font
    string fontPath = Path.Combine(DataDir, "Montserrat-Regular.woff2");
    FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff2", new FileSystemStreamSource(fontPath)));
    Font font = Font.Open(fontDefinition);
{{< /highlight >}}

2. **Write the output setting for the `WOFF` format.**
Create a new output file and a stream to write data to the file.
First, define the output file using the *Path.Combine()* Method.
Then create a new FileStream object using the *File.Create()* Method. The method creates a new file at the specified path and returns a stream for writing to it.
{{< highlight csharp >}} 
    // Woff output settings
    string outPath = Path.Combine(OutputDir, "Woff2ToWoff_out1.woff");
    FileStream outStream = File.Create(outPath);
{{< /highlight >}}

3. **Convert and save the font result.**
Call the font.SaveToFormat() Method on a Font object. It takes two parameters - the first is a stream to write the font data to and the second is the format to save the font in. When this method is called, the font data is written to the specified stream in the specified format. In this case, the font data is written to the output file created earlier using the *File.Create()* and *Path.Combine()* Methods.
{{< highlight csharp >}} 
    // Convert woff2 to woff
    font.SaveToFormat(outStream, FontSavingFormats.WOFF);
{{< /highlight >}}

{{% alert color="primary" %}}
Other examples and documentation are also always available in [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Also, get to the [*Font Conversion application*](https://products.aspose.app/font/conversion) from Aspose to try the functionality.
{{% /alert %}}