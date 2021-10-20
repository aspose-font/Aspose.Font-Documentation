package com.aspose.font.licensing;

import java.io.FileInputStream;
import java.nio.file.Paths;

import com.aspose.font.License;
import com.aspose.font.examples.BaseExamples;

public class SetLicenseFromStream extends BaseExamples {

	@Override
	public /*override*/ void run() throws Exception
	{
		System.out.println("Run Set License from Stream example");

		//ExampleStart: 1
		FileInputStream licenseStream = new FileInputStream(Paths.get(getLicenseDir(), "Aspose.Font.lic").toString());

		License license = new License();
		license.setLicense(licenseStream);
		//ExampleEnd: 1
	}
}
