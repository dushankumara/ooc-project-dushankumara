#include<iostream>
#include<cstring>
#include"patient.h"
using namespace std;
Patient::Patient()
{
}
Patient::Patient(const char ID[10],const char p_Name[25],const char p_address[30],int p_age,const char patient_password[8])
{
strcpy(Patient_ID,ID);
strcpy(patientName,p_Name);
strcpy(address,p_address);
age=p_age;
strcpy(password,patient_password);
cout<<"overload this patient details"<<endl;
}
void Patient::searchDetails()
{
}
void Patient::displayDetails()
{
cout << "Patient ID : " << Patient_ID << endl;
cout << "Patient Name : " << patientName << endl;
cout << "Address : " << address << endl;
cout << "Age : " << age << endl;
cout << "Password : " << password << endl;
}
Patient:: ~Patient()
{
cout<<"patient class has been deleted"<<endl;
}
