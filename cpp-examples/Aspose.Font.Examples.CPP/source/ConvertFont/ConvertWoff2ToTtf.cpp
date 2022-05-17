#include "aspose_pch.h"
#include "ConvertWoff2ToTtf.h"

#include <system/string.h>
#include <system/console.h>

namespace Aspose {

namespace Font {

namespace Examples {

namespace ConvertFont {

RTTI_INFO_IMPL_HASH(3631741117u, ::Aspose::Font::Examples::ConvertFont::ConvertWoff2ToTtf, ThisTypeBaseTypesInfo);

ConvertWoff2ToTtf::ConvertWoff2ToTtf(System::String folderName) : Aspose::Font::Examples::BaseExamples(folderName)
{
}

void ConvertWoff2ToTtf::Run()
{
    System::Console::WriteLine(u"Run Convert WOFF2 to TTF examples");
    
    Woff2ToTtfExample1();
    Woff2ToTtfExample2();
    Woff2ToTtfExample3();
}

void ConvertWoff2ToTtf::Woff2ToTtfExample1()
{
    System::Console::WriteLine(u"WOFF2 to TTF ex: 1");
    
    //ExampleStart: 1
    /*
                string fontPath = Path.Combine(DataDir, "Montserrat-Regular.woff2");
                FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff2", new FileSystemStreamSource(fontPath)));
                Font font = Font.Open(fontDefinition);
                
                // Ttf output settings
                string outPath = Path.Combine(OutputDir, "Woff2ToTtf_out1.ttf");
                FileStream outStream = File.Create(outPath);
    
                // Convert woff2 to ttf
                font.SaveToFormat(outStream, FontSavingFormats.TTF);
                */
    //ExampleEnd: 1
}

void ConvertWoff2ToTtf::Woff2ToTtfExample2()
{
    System::Console::WriteLine(u"WOFF2 to TTF ex: 2");
    
    //ExampleStart: 2
    /*
                // Open woff2 font
                byte[] fontMemoryData = File.ReadAllBytes(DataPath("Montserrat-Bold.woff2"));
                FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff2", new ByteContentStreamSource(fontMemoryData)));
                TtfFont ttfFont = Aspose.Font.Font.Open(fontDefinition) as TtfFont;
                
                // Ttf output settings
                string outPath = Path.Combine(OutputDir, "Woff2ToTtf_out2.ttf");
                FileStream outStream = File.Create(outPath);
    
                // Convert woff2 to ttf
                ttfFont.SaveToFormat(outStream, FontSavingFormats.TTF);
                */
    //ExampleEnd: 2
}

void ConvertWoff2ToTtf::Woff2ToTtfExample3()
{
    System::Console::WriteLine(u"WOFF2 to TTF ex: 3");
    
    //ExampleStart: 3
    /*
                // Open woff2 font
                string fontPath = Path.Combine(DataDir, "Montserrat-Regular.woff2");
                FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff2", new FileSystemStreamSource(fontPath)));
                Font font = Font.Open(fontDefinition);
    
                // Convert woff2 to ttf
                font.Convert(FontType.TTF);
                font.Save(Path.Combine(OutputDir, "Woff2ToTtf_out3.ttf"));
                */
    //ExampleEnd: 3
}

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose
