#include <iostream>
#include<cstring>
#include "report.h"
using namespace std;
report::report()
{}
report::report(const char rNo[20],const char rType[20],const char rDate[20],const char rTime[20])
{
strcpy(reportNo,rNo);
strcpy(reportType,rType);
strcpy(reportDate,rDate);
strcpy(reportTime,rTime);
}
void report::	DisplayDetails()
{
	cout << "report No: " << reportNo << endl;
	cout << "report Type: " << reportType << endl;
	cout << "report Date: " << reportDate << endl;
	cout << "report Time: " << reportTime << endl;
}
