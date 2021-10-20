package com.aspose.font.examples;

import com.aspose.font.examples.convertfont.ConvertCff;
import com.aspose.font.examples.convertfont.ConvertEot;
import com.aspose.font.examples.convertfont.ConvertTtfToWoff;
import com.aspose.font.examples.convertfont.ConvertTtfToWoff2;
import com.aspose.font.examples.convertfont.ConvertType1;
import com.aspose.font.examples.convertfont.ConvertWoff2ToTtf;
import com.aspose.font.examples.convertfont.ConvertWoffToTtf;
import com.aspose.font.examples.convertfont.ConvertWoffToWoff2;
import com.aspose.font.examples.loadfont.LoadCff;
import com.aspose.font.examples.loadfont.LoadTtf;
import com.aspose.font.licensing.SetLicenseFromFile;
import com.aspose.font.licensing.SetLicenseFromStream;

public class Program {

	public static void main(String... args) throws Exception
	{
		System.out.println("Aspose.Font Examples --- START");
		System.out.println("========================================");
		System.out.println("");

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

		// Load font
		IExamples loadTtf = new LoadTtf();
		IExamples loadCff = new LoadCff();

		///////
		///
		/// Examples Run
		///
		//////

		// Licensing Examples
//        setLicenseFromFile.run();
//        setLicenseFromStream.run();

		// Convert Font Examples
		convertTtfToWoff.run();
		convertTtfToWoff2.run();
		convertWoffToTtf.run();
		convertWoff2ToTtf.run();
		convertWoffToWoff2.run();
		convertType1.run();
		convertCff.run();
		convertEot.run();

		//Load Font examples
		loadTtf.run();
		loadCff.run();

		System.out.println("");
		System.out.println("========================================");
		System.out.println("Aspose.Font Examples --- END");
	}
}
