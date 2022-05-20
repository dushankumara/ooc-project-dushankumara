#include<iostream>
#include<cstring>
using namespace std;
class report
{
private:
char reportNo[20];
char reportType[20];
char reportDate[20];
char reportTime[20];
public:
report();
report(const char rNo[20],const char rType[20],const char rDate[20],const char rTime[20]);
void DisplayDetails();
};
