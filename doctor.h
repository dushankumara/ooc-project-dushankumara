#include<iostream>
using namespace std;
class doctor
{
private:
char doctor_ID[5];
char doctor_Name[20];
char doctor_Type[20];

public:
doctor();
doctor(const char dID[5],const char dName[20],const char dType[20]);
void setDetails();
void DisplayDetails();
~doctor();

};
