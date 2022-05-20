#include<iostream>
#include<cstring>
#include"feedback.h"
using namespace std;


feedback::feedback(const char pName[20],const char pNum[11],const char PemailAdd[50])
{
strcpy(patientsname,pName);
strcpy(patientsmobileNum,pNum);
strcpy(patientsemailAdd,PemailAdd);

}
void feedback::displayfeedbackdetails()
{
cout<<"patients Name :"<< patientsname<<endl;
cout<<"patients mobilenumber :"<< patientsmobileNum <<endl;
cout<<"patients emailaddress : "<<patientsemailAdd<<endl;
}

