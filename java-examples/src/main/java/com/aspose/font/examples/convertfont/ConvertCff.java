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

public class ConvertCff extends BaseExamples {

	public ConvertCff(String folderName) {
		super(folderName);
	}

	@Override
	public /*override*/ void run() throws IOException
	{
		System.out.println("Run Convert CFF to TTF/WOFF/WOFF2 examples");

		cffToTtfExample1();
		cffToTtfExample2();
		cffToWoffExample();
		cffToWoffExample2();
	}

	private void cffToTtfExample1() throws IOException
	{
		System.out.println("CFF to TTF ex: 1");

		//ExampleStart: 1            
		// Open cff font
		String fontPath = Paths.get(getDataDir(), "CenturyGothic.cff").toString();
		FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new FileSystemStreamSource(fontPath)));
		Font font = Font.open(fontDefinition);

		// Ttf output settings
		String outPath = Paths.get(getOutputDir(), "CffToTtf_out1.ttf").toString();
		FileOutputStream outStream = new FileOutputStream(outPath);

		// Convert cff to ttf
		font.saveToFormat(outStream, FontSavingFormats.TTF);

		//ExampleEnd: 1
	}

	private void cffToTtfExample2()
	{
		System.out.println("CFF to TTF ex: 2");

		//ExampleStart: 2

		// Open cff font
		String fontPath = Paths.get(getDataDir(), "CenturyGothic.cff").toString();
		FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new FileSystemStreamSource(fontPath)));
		Font font = Font.open(fontDefinition);

		// Convert cff to ttf
		Font ttfFont = (TtfFont)font.convert(FontType.TTF);
		ttfFont.save(Paths.get(getOutputDir(), "CffToTtf_out2.ttf").toString());

		//ExampleEnd: 2
	}

	private void cffToWoffExample() throws IOException
	{
		System.out.println("CFF to WOFF ex: 3");

		//ExampleStart: 3

		// Open cff font
		byte[] fontMemoryData = Files.readAllBytes(Paths.get(getDataDir(), "CenturyGothic.cff"));
		FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new ByteContentStreamSource(fontMemoryData)));
		Font font = Font.open(fontDefinition);

		// Woff output settings
		String outPath = Paths.get(getOutputDir(), "CffToWoff_out3.woff").toString();
		FileOutputStream outStream = new FileOutputStream(outPath);

		// Convert cff to woff
		font.saveToFormat(outStream, FontSavingFormats.WOFF);

		//ExampleEnd: 3
	}

	private void cffToWoffExample2() throws IOException
	{
		System.out.println("CFF to WOFF2 ex: 4");

		//ExampleStart: 4

		// Open cff font
		byte[] fontMemoryData = Files.readAllBytes(Paths.get(getDataDir(), "CenturyGothic.cff"));
		FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new ByteContentStreamSource(fontMemoryData)));
		Font font = Font.open(fontDefinition);

		// Woff2 output settings
		String outPath = Paths.get(getOutputDir(), "CffToWoff2_out4.woff2").toString();
		FileOutputStream outStream = new FileOutputStream(outPath);

		// Convert cff to woff2
		font.saveToFormat(outStream, FontSavingFormats.WOFF2);

		//ExampleEnd: 4
	}
}
