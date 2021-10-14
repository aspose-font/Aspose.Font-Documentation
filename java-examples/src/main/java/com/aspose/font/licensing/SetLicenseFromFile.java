package com.aspose.font.licensing;

import java.nio.file.Paths;

import com.aspose.font.License;
import com.aspose.font.examples.BaseExamples;

public class SetLicenseFromFile extends BaseExamples {

	@Override
	public /*override*/ void run() throws Exception
	{
		System.out.println("Run Set License from File example");

		//ExampleStart: 1
		String licensePath = Paths.get(getLicenseDir(), "Aspose.Font.lic").toString();

		License license = new License();
		license.setLicense(licensePath);
		//ExampleEnd: 1
	}
}
