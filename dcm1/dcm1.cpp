// dcm1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "dcmtk\config\osconfig.h"
#include "dcmtk\dcmdata\dctk.h"

#include "dcmtk/dcmnet/scp.h"  


#include <iostream>
using namespace std;

int main()
{
	//��ȡdicom�ļ��е�tag
	//DcmFileFormat fileformat;
	//OFCondition oc = fileformat.loadFile("D:\\DCMTK\\guoyuyou.dcm");
	//if (oc.good())
	//{
	//	OFString patientName;
	//	if (fileformat.getDataset()->findAndGetOFString(DCM_PatientName, patientName).good())
	//		cout << "Patient Name: " << patientName.data();
	//}

    return 0;
}

