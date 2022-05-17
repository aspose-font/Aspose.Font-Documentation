---
title: Convert EOT | C++
linktitle: Convert EOT
type: docs
weight: 70
url: /cpp/convert/eot
keywords: convert eot to ttf, eot woff woff2
description: Aspose has now in its family a solution that is aimed to convert different font formats. Here you will find examples of how to convert EOT fonts.
---

It is known that `Embedded Open Type` (`EOT`) is supported mainly by the Internet Explorer browser. Because of that, to render correctly you will need to build in your software converter to `EOT` from other font formats and vice versa. In this article, it is described how to use the Aspose.Font for C++ to convert `EOT` to `TTF`, `EOT` to `WOFF`, and `EOT` to `WOFF2`.
_____________

For all the conversions you will need these namespaces:

```C++
using namespace Aspose.Font.Sources;
using System;
using System.IO;
```

The information about the font conversion fundamentals is notified in [How to convert the font into the desired format?](https://docs.aspose.com//font/cpp/convert/#how-to-convert-the-font-into-the-desired-format) chapter.

## Convert EOT to TTF

To transform `Embedded Open Type` to `True Type Format` you will need:
1. Open `EOT` font.
2. Notify the output settings for `TTF` font.
3. Run the fon conversion.

```C++
    // Open eot font, passing TTF as value for FontType, TtfFont will be returned as result of call Font.Open()
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"LoraRegular.eot");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Ttf output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"EotToTtf_out1.ttf");
    
    // Save opened font to TrueType format
    font->Save(outPath);
```

## Convert EOT to WOFF
To get `Web Open Font Format` from `Embedded Open Type` the next actions have to be done:

1. Open `EOT` font.
2. Notify the output settings for the `WOFF` font.
3. Fulfill the font conversion.

```C++
    // Open eot font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"LoraRegular.eot");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"EotToWoff_out3.woff");
    {
        System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outStream});
        // ------------------------------------------
        
        try
        {
            // Convert eot to woff
            font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF);
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
```

## Convert EOT to WOFF2

If you need to get the second version of the `Web Open Font Format` from `Embedded Open type` the taken steps are the same:
1. Open `EOT` Font.
2. Add the output settings for the `WOFF2` font.
3. Convert `EOT` to `WOFF2` and save the result.

```C++
    // Open eot font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"LoraRegular.eot");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff2 output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"EotToWoff2_out4.woff2");
    {
        System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outStream});
        // ------------------------------------------
        
        try
        {
            // Convert eot to woff2
            font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF2);
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
```

{{% alert color="primary" %}}
Our folder [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation) has these and many more examples on how to use the Aspose solution.

Similar functionality is also given by the free online [*Font Conversion*](https://products.aspose.app/font/conversion) application. Learn what opportunities it gives to you.
{{% /alert %}}
