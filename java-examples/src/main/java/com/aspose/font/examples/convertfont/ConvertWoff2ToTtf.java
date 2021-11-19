package com.aspose.font.examples.convertfont;

import com.aspose.font.examples.BaseExamples;

public class ConvertWoff2ToTtf extends BaseExamples {

	public ConvertWoff2ToTtf(String folderName)
	{
		super(folderName);
	}

	@Override
	public /*override*/ void run()
	{
		System.out.println("Run Convert WOFF2 to TTF examples");

		woff2ToTtfExample1();
		woff2ToTtfExample2();
		woff2ToTtfExample3();
	}

	private void woff2ToTtfExample1()
	{
		System.out.println("WOFF2 to TTF ex: 1");

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

	private void woff2ToTtfExample2()
	{
		System.out.println("WOFF2 to TTF ex: 2");

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

	private void woff2ToTtfExample3()
	{
		System.out.println("WOFF2 to TTF ex: 3");

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
}
