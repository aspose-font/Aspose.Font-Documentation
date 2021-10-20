package com.aspose.font.examples.convertfont;

import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.file.Paths;

import com.aspose.font.FileSystemStreamSource;
import com.aspose.font.Font;
import com.aspose.font.FontDefinition;
import com.aspose.font.FontFileDefinition;
import com.aspose.font.FontSavingFormats;
import com.aspose.font.FontType;
import com.aspose.font.examples.BaseExamples;

public class ConvertEot extends BaseExamples {

	public ConvertEot(String folderName) {
		super(folderName);
	}

	@Override
	public /*override*/ void run() throws IOException
	{
		System.out.println("Run Convert EOT to TTF/WOFF/WOFF2 examples");

		eotToTtfExample1();
		eotToTtfExample2();
		eotToWoffExample1();
		eotToWoffExample2();
	}

	private void eotToTtfExample1()
	{
		System.out.println("EOT to TTF ex: 1");

		//ExampleStart: 1
		// Open eot font, passing TTF as value for FontType, TtfFont will be returned as result of call Font.Open()
		String fontPath = Paths.get(getDataDir(), "LoraRegular.eot").toString();
		FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
		Font font = Font.open(fontDefinition);

		// Ttf output settings
		String outPath = Paths.get(getOutputDir(), "EotToTtf_out1.ttf").toString();            

		// Save opened font to TrueType format
		font.save(outPath);
		//ExampleEnd: 1
	}


	private void eotToTtfExample2() throws IOException
	{
		System.out.println("EOT to TTF ex: 2");

		//ExampleStart: 2
		// Open eot font, passing TTF as value for FontType, actually TtfFont will be returned as result of call Font.Open()
		String fontPath = Paths.get(getDataDir(), "LoraRegular.eot").toString();
		FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
		Font font = Font.open(fontDefinition);

		// Ttf output settings
		String outPath = Paths.get(getOutputDir(), "EotToTtf_out2.ttf").toString();
		final FileOutputStream outStream = new FileOutputStream(outPath);        
		try {
			// Save opened font to TrueType format by call SaveToFormat() method
			font.saveToFormat(outStream, FontSavingFormats.TTF);
		} finally {
			if (outStream != null)
				outStream.close();
		}
		//ExampleEnd: 2
	}

	private void eotToWoffExample1() throws IOException
	{
		System.out.println("EOT to WOFF ex: 3");

		//ExampleStart: 3
		// Open eot font
		String fontPath = Paths.get(getDataDir(), "LoraRegular.eot").toString();
		FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
		Font font = Font.open(fontDefinition);

		// Woff output settings
		String outPath = Paths.get(getOutputDir(), "EotToWoff_out3.woff").toString();
		final FileOutputStream outStream = new FileOutputStream(outPath);   
		try {
			// Convert eot to woff
			font.saveToFormat(outStream, FontSavingFormats.WOFF);
		} finally {
			if (outStream != null)
				outStream.close();
		}
		//ExampleEnd: 3
	}

	private void eotToWoffExample2() throws IOException
	{
		System.out.println("EOT to WOFF2 ex: 4");

		//ExampleStart: 4
		// Open eot font
		String fontPath = Paths.get(getDataDir(), "LoraRegular.eot").toString();
		FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
		Font font = Font.open(fontDefinition);

		// Woff2 output settings
		String outPath = Paths.get(getOutputDir(), "EotToWoff2_out4.woff2").toString();
		final FileOutputStream outStream = new FileOutputStream(outPath);   
		try {
			// Convert eot to woff2
			font.saveToFormat(outStream, FontSavingFormats.WOFF2);
		} finally {
			if (outStream != null)
				outStream.close();
		}
		//ExampleEnd: 4
	}
}
