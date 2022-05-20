#include<iostream>
using namespace std;

#include<iostream>
#include<cstring>
using namespace std;
class feedback
{
private:
char patientsname[20];
char patientsmobileNum[11];
char patientsemailAdd[50];
public:
feedback(const char pName[20],const char pNum[11],const char PemailAdd[50]);
void displayfeedbackdetails();
};

