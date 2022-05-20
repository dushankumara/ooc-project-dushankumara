#include<iostream>
using namespace std;

class appointment
{
private:
char appointmentNo[10];
int roomNo;
char appointmentDate[10];



public:
appointment();
appointment(const char a_No[10], int a_Room, const char a_Date[10]);
void displayappointmentDetails();
void updateappointmentDetails();
};
