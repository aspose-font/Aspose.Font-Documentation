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

public class ConvertTtfToWoff2 extends BaseExamples {

	public ConvertTtfToWoff2(String folderName) {
		super(folderName);
	}

	@Override
	public /*override*/ void run() throws IOException
	{
		System.out.println("Run Convert TTF to WOFF2 examples");

		ttfToWoff2Example1();
		ttfToWoff2Example2();
	}

	private void ttfToWoff2Example1() throws IOException
	{
		System.out.println("TTF to WOFF2 ex: 1");

		//ExampleStart: 1
		// Open ttf font
		String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();
		FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
		Font font = Font.open(fontDefinition);

		// Woff2 output settings
		String outPath = Paths.get(getOutputDir(), "TtfToWoff2_out1.woff2").toString();
		FileOutputStream outStream = new FileOutputStream(outPath);

		// Convert ttf to woff2
		font.saveToFormat(outStream, FontSavingFormats.WOFF2);
		//ExampleEnd: 1
	}

	private void ttfToWoff2Example2() throws IOException
	{
		System.out.println("TTF to WOFF2 ex: 2");

		//ExampleStart: 2
		// Open ttf font
		byte[] fontMemoryData = Files.readAllBytes(Paths.get(setDataPath("Montserrat-Bold.ttf")));
		FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new ByteContentStreamSource(fontMemoryData)));
		TtfFont ttfFont = (TtfFont)Font.open(fontDefinition);

		// Woff2 output settings
		String outPath = Paths.get(getOutputDir(), "TtfToWoff2_out2.woff2").toString();
		FileOutputStream outStream = new FileOutputStream(outPath);

		// Convert ttf to woff2
		ttfFont.saveToFormat(outStream, FontSavingFormats.WOFF2);
		//ExampleEnd: 2
	}
}
