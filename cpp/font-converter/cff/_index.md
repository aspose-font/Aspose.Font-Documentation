---
title: Convert CFF | C++
linktitle: Convert CFF
type: docs
weight: 91
url: /cpp/convert/cff
keywords: convert cff to ttf, cff to ttf converter, convert compact font format
description: Aspose has now in its family a solution that is aimed to convert different font formats. Here you will find examples of how to convert CFF format.
---

The article will explain to you with the code how to transform `CFF` format. Aspose solution now gives you the opportunity to convert `CFF` to `TTF`, `CFF` to `WOFF`, and `CFF` to `WOFF2`.
____

First, add the next namespaces at the top of the head of the title:
```C++ 
using namespace Aspose::Font::Sources;
```

In [How to convert the font into the desired format?](https://docs.aspose.com//font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) section you can find the font conversion fundamentals.

## Convert CFF to TTF

To fulfill the operation follow the next steps:

1. Open `CFF` font.
2. Notify the output settings.
3. Run the conversion.

```C++ 
    // Open cff font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"CenturyGothic.cff");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, System::MakeObject<FontFileDefinition>(u"cff", System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Ttf output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"CffToTtf_out1.ttf");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert cff to ttf
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::TTF);
```


## Convert CFF to WOFF

To transform `Compact Font Format` to `Web Open Font Format` you will need to follow the algorithm:

1. Open `CFF` font.
2. Place the settings for the output font stream.
3. Process the conversion.

```C++ 
    // Open cff font
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(System::IO::Path::Combine(get_DataDir(), u"CenturyGothic.cff"));
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, System::MakeObject<FontFileDefinition>(u"cff", System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"CffToWoff_out3.woff");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert cff to woff
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF);
```


## Convert CFF to WOFF2

To fulfill `Compact Font Format` to `Web Open Font Format version 2` conversion, take the three steps below:

1. Open the `CFF`.
2. Notify the output settings.
3. Convert `CFF` to `WOFF2` and save the result.
```C++ 
    // Open cff font
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(System::IO::Path::Combine(get_DataDir(), u"CenturyGothic.cff"));
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, System::MakeObject<FontFileDefinition>(u"cff", System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff2 output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"CffToWoff2_out4.woff2");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert cff to woff2
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF2);
```


{{% alert color="primary" %}}
If you need to learn more examples of using the solution to convert fonts you will find useful the [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation).


Try [*Font Conversion application*](https://products.aspose.app/font/conversion) in case you want to learn the functional online for free.
{{% /alert %}}