---
title: Convert Type1 | C++
linktitle: Convert Type1
type: docs
weight: 80
url: /cpp/convert/type1
keywords: type 1 font converter, convert type 1 font to ttf, type 1 to ttf, type one to woff
descroption: Here is the explanation with code examples on how to use the Aspose solution to convert Type 1 format to TTF, WOFF, and WOFF2 formats.
---

In this article, you will see how to convert `Type 1` format. Aspose.Font for C++ offers you solutions for conversion `Type 1` to `TTF`, `Type 1` to `WOFF`, and `Type 1` to `WOFF2`. 
____

For all three conversions you need to put the next namespaces at the top of the head of the title:
```C++ 
using Aspose::Font::Sources;
```

Reach [How to convert the font into the desired format?](https://docs.aspose.com//font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) chapter to see about the Aspose conversion fundamentals.

## Convert Type1 to TTF 

Fulfill the actions written below to tranform `Type one` to `True Type Font`:
1. Open `Type1` font.
2. Apply the output settings for the `Type1` font.
3. Fulfill the conversion.

```C++
    // Open Type 1 font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Courier.pfb");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::Type1, System::MakeObject<FontFileDefinition>(u"pfb", System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Ttf output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"Type1ToTtf_out1.ttf");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert type1 to ttf
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::TTF);
```


## Convert font formats from Type 1 to Woff 

For this you will need to take the next steps:

1. Open `Type1` font.
2. Add the output settings.
3. Fulfill the conversion.

```C++
    // Open Type 1 font
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(System::IO::Path::Combine(get_DataDir(), u"Courier.pfb"));
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::Type1, System::MakeObject<FontFileDefinition>(u"pfb", System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"Type1ToWoff_out3.ttf");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert type1 to woff
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF);
```


## Convert Type 1 to WOFF2

Follow the written below algorithm to convert the fonts:

1. Open `Type1` font.
2. Notify the next output settings.
3. Fulfill the conversion.

```C++
    // Open Type 1 font
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(System::IO::Path::Combine(get_DataDir(), u"Courier.pfb"));
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::Type1, System::MakeObject<FontFileDefinition>(u"pfb", System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff2 output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"Type1ToWoff2_out4.ttf");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert type1 to woff2
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF2);
```


{{% alert color="primary" %}}
For getting more examples of using the solution go to the [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) Github repository.

Aspose also offers you a free online [*Font Conversion application*](https://products.aspose.app/font/conversion) where you can try the existing functionality.
{{% /alert %}}