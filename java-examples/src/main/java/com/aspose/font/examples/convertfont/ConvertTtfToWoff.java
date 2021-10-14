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

public class ConvertTtfToWoff extends BaseExamples {

	public ConvertTtfToWoff(String folderName) {
		super(folderName);
	}

	@Override
	public /*override*/ void run() throws IOException
	{
		System.out.println("Run Convert TTF to WOFF examples");

		ttfToWoffExample1();
		ttfToWoffExample2();
	}

	private void ttfToWoffExample1() throws IOException
	{
		System.out.println("TTF to WOFF ex: 1");

		//ExampleStart: 1
		// Open ttf font
		String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();
		FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
		Font font = Font.open(fontDefinition);

		// Woff output settings
		String outPath = Paths.get(getOutputDir(), "TtfToWoff_out1.woff").toString();
		FileOutputStream outStream = new FileOutputStream(outPath);   

		// Convert ttf to woff
		font.saveToFormat(outStream, FontSavingFormats.WOFF);
		//ExampleEnd: 1
	}

	private void ttfToWoffExample2() throws IOException
	{
		System.out.println("TTF to WOFF ex: 2");

		//ExampleStart: 2
		// Open ttf font
		byte[] fontMemoryData = Files.readAllBytes(Paths.get(setDataPath("Montserrat-Bold.ttf")));
		FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new ByteContentStreamSource(fontMemoryData)));
		TtfFont ttfFont = (TtfFont)Font.open(fontDefinition);

		// Woff output settings
		String outPath = Paths.get(getOutputDir(), "TtfToWoff_out2.woff").toString();
		FileOutputStream outStream = new FileOutputStream(outPath);

		// Convert ttf to woff
		ttfFont.saveToFormat(outStream, FontSavingFormats.WOFF);
		//ExampleEnd: 2
	}
}
