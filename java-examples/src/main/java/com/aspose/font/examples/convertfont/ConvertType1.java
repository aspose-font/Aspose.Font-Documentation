package com.aspose.font.examples.convertfont;

import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

import com.aspose.font.ByteContentStreamSource;
import com.aspose.font.FileSystemStreamSource;
import com.aspose.font.Font;
import com.aspose.font.FontDefinition;
import com.aspose.font.FontFileDefinition;
import com.aspose.font.FontSavingFormats;
import com.aspose.font.FontType;
import com.aspose.font.TtfFont;
import com.aspose.font.examples.BaseExamples;

public class ConvertType1 extends BaseExamples {

	public ConvertType1(String folderName) {
		super(folderName);
	}

	@Override
	public /*override*/ void run() throws IOException
	{
		System.out.println("Run Convert Type1 to TTF/WOFF/WOFF2 examples");

		type1ToTtfExample1();
		type1ToTtfExample2();
		type1ToWoffExample();
		type1ToWoff2Example();
	}


	private void type1ToTtfExample1() throws IOException
	{
		System.out.println("Type1 to TTF ex: 1");

		//ExampleStart: 1
		// Open Type 1 font
		String fontPath = Paths.get(getDataDir(),"Courier.pfb").toString();
		FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new FileSystemStreamSource(fontPath)));
		Font font = Font.open(fontDefinition);

		// Ttf output settings
		String outPath = Paths.get(getOutputDir(), "Type1ToTtf_out1.ttf").toString();
		FileOutputStream outStream = new FileOutputStream(outPath);

		// Convert type1 to ttf
		font.saveToFormat(outStream, FontSavingFormats.TTF);
		//ExampleEnd: 1
	}

	private void type1ToTtfExample2()
	{
		System.out.println("Type1 to TTF ex: 2");

		//ExampleStart: 2
		// Open Type 1 font
		String fontPath = Paths.get(getDataDir(), "Courier.pfb").toString();
		FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new FileSystemStreamSource(fontPath)));
		Font font = Font.open(fontDefinition);

		// Convert type1 to ttf
		Font ttfFont = (TtfFont)font.convert(FontType.TTF);
		ttfFont.save(Paths.get(getOutputDir(), "Type1ToTtf_out2.ttf").toString());
		//ExampleEnd: 2
	}

	private void type1ToWoffExample() throws IOException
	{
		System.out.println("Type1 to WOFF ex: 3");

		//ExampleStart: 3
		// Open Type 1 font
		byte[] fontMemoryData = Files.readAllBytes(Paths.get(getDataDir(), "Courier.pfb"));
		FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new ByteContentStreamSource(fontMemoryData)));
		Font font = Font.open(fontDefinition);

		// Woff output settings
		String outPath = Paths.get(getOutputDir(), "Type1ToWoff_out3.ttf").toString();
		FileOutputStream outStream = new FileOutputStream(outPath);

		// Convert type1 to woff
		font.saveToFormat(outStream, FontSavingFormats.WOFF);
		//ExampleEnd: 3
	}

	private void type1ToWoff2Example() throws IOException
	{
		System.out.println("Type1 to WOFF2 ex: 4");

		//ExampleStart: 4
		// Open Type 1 font
		byte[] fontMemoryData = Files.readAllBytes(Paths.get(getDataDir(), "Courier.pfb"));
		FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new ByteContentStreamSource(fontMemoryData)));
		Font font = Font.open(fontDefinition);

		// Woff2 output settings
		String outPath = Paths.get(getOutputDir(), "Type1ToWoff2_out4.ttf").toString();
		FileOutputStream outStream = new FileOutputStream(outPath);

		// Convert type1 to woff2
		font.saveToFormat(outStream, FontSavingFormats.WOFF2);
		//ExampleEnd: 4
	}
}
