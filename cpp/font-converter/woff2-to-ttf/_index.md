---
title: Convert WOFF2 to TTF | C++
linktitle: Convert WOFF2 to TTF
type: docs
weight: 50
url: /cpp/convert/woff2-to-ttf
keywords: woff2 to ttf converter, woff2 font converter
description: Easy-to-use C++ library for font conversion from Aspose.FONT. Learn how to convert woff2 to ttf with the documentation. Code examples are attached.
---

This page is aimed to show how to convert fonts from `Web Open Font Format 2` to `True Type` font using the Aspose.Font for C++. 
_______

Set the following namespaces at the head of the file:

[How to convert the font into the desired format?](https://docs.aspose.com//font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) chapter will let you know about the Aspose conversion fundamentals.

To convert `WOFF2` to `TTF` make the next actions:

1. Open `Woff2` font. 
2. Specify the output setting.
3. Use [*SaveToFormat()*](https://reference.aspose.com/font/cpp/class/aspose.font.font#a670ea97404fd72c2e51b0e8c543c8a45) method of the base abstract [*Font*](https://reference.aspose.com/font/cpp/class/aspose.font.font) class instance to transform font and save results.

{{< blocks/products/pf/agp/feature-section >}}
{{< app/font/converter "C++ code example WOFF2 to TTF conversion" WOFF2 TTF WOFF>}}
    using namespace System;
    using namespace Aspose::Font::Sources;
    using namespace Aspose::Font::Ttf;
    using namespace Aspose::Font;

    // Open ttf font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"{{inputFile}}");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(FontType::{{input}}, System::MakeObject<FontFileDefinition>(System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);

    // {{output camel}} output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"{{outputFile}}");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);

    // Convert ttf to {{output lower}}
    font->SaveToFormat(outStream, FontSavingFormats::{{output upper}});
{{< /app/font/converter >}}
{{< /blocks/products/pf/agp/feature-section >}}

Let's briefly explain the code above:

First, set the path to the `WOFF2` font file. It is obtained using the *System::IO::Path::Combine()* Method, which combines the path to the directory with the font file name. The resulting path is stored in the *fontPath* variable.

Then create a *FontDefinition* object to define the font type and source file for the font. The resulting *FontDefinition* object is stored in the *fontDefinition* variable.

Open the font using the *Aspose::Font::Font::Open* Method and passing the FontDefinition object as a parameter. The resulting Aspose::Font::Font object is stored in the font variable.

Then set the path and file name for the output `TTF` font file using the *System::IO::Path::Combine()* Method. The resulting path is stored in the *outPath* variable.

The fifth line of code creates a FileStream object for the output file and passes the *outPath* variable as a parameter. The resulting *FileStream* object is stored in the *outStream* variable.

Finally, save the font to the `TTF` format using the SaveToFormat() Method. The method takes the output FileStream object (outStream) as its first parameter and the desired output font format as its second parameter. The converted `TTF` font is then saved to the output file specified by *outPath*.

{{% alert color="primary" %}}
Go to [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) folder of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository for getting more examples.

Aspose also offers a free web [*Font Conversion application*](https://products.aspose.app/font/conversion) where you can try the functionality online.
{{% /alert %}}
