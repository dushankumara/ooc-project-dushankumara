#include<iostream>
using namespace std;
class Patient
{
private:
char Patient_ID[10];
char patientName[25];
char address[30];
int age;
char password[8];

public:
Patient();
Patient(const char ID[10],const char p_Name[25],const char p_address[30],int p_age,const char patient_password[8]);
void searchDetails();
void displayDetails();

~Patient();
};
