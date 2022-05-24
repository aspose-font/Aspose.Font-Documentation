using System;
using Aspose.Font.Examples.Licensing;
using Aspose.Font.Examples.ConvertFont;
using Aspose.Font.Examples.LoadFont;
using Aspose.Font.Examples.Glyphs;
using Aspose.Font.Examples.Metadata;

namespace Aspose.Font.Examples
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Aspose.Font Examples --- START");
            Console.WriteLine("========================================");
            Console.WriteLine("");

            ///////
            ///
            /// Examples Registration
            ///
            //////

            // Licensing
            IExamples setLicenseFromFile = new SetLicenseFromFile();
            IExamples setLicenseFromStream = new SetLicenseFromStream();

            // Convert Font
            IExamples convertTtfToWoff = new ConvertTtfToWoff("Convert-Font");
            IExamples convertTtfToWoff2 = new ConvertTtfToWoff2("Convert-Font");
            IExamples convertWoffToTtf = new ConvertWoffToTtf("Convert-Font");
            IExamples convertWoff2ToTtf = new ConvertWoff2ToTtf("Convert-Font");
            IExamples convertWoffToWoff2 = new ConvertWoffToWoff2("Convert-Font");
            IExamples convertType1 = new ConvertType1("Convert-Font");
            IExamples convertCff = new ConvertCff("Convert-Font");
            IExamples convertEot = new ConvertEot("Convert-Font");

            //Load font
            IExamples loadTtf = new LoadTtf();
            IExamples loadCff = new LoadCff();

            //Glyph metrics
            IExamples glyphMetrics = new GlyphMetrics();

            //TrueType fonts metadata
            IExamples metadataExamples = new MetadataExamples();

            ///////
            ///
            /// Examples Run
            ///
            //////

            // Licensing Examples
            //setLicenseFromFile.Run();
            //setLicenseFromStream.Run();

            // Convert Font Examples
            
            convertTtfToWoff.Run();
            convertTtfToWoff2.Run();
            convertWoffToTtf.Run();
            convertWoff2ToTtf.Run();
            convertWoffToWoff2.Run();
            convertType1.Run();
            convertCff.Run();
            convertEot.Run();

            //Load Font examples
            loadTtf.Run();
            loadCff.Run();

            //Glyph metrics examples
            glyphMetrics.Run();

            //TrueType fonts metadata examples
            metadataExamples.Run();

            Console.WriteLine("");
            Console.WriteLine("========================================");
            Console.WriteLine("Aspose.Font Examples --- END");
        }
    }
}
