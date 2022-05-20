#include<iostream>
#include<cstring>
#include"doctor.h"
using namespace std;

doctor::doctor()
{
}
doctor::doctor(const char dID[5],const char dName[20],const char dType[20])
{
strcpy(doctor_ID,dID);
strcpy(doctor_Name,dName);
strcpy(doctor_Type,dType);
cout<<"overload this card details"<<endl;
}

void doctor::setDetails()
{

}
void doctor::DisplayDetails()
{
	cout << "Doctor ID : " << doctor_ID << endl;
	cout << "Doctor Name: " << doctor_Name << endl;
	cout << "Doctor Type: " << doctor_Type << endl;

}
doctor:: ~doctor()
{
cout<<"doctor class has been deleted"<<endl;
}
