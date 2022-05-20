#include<iostream>
#include<cstring>
#include"appointment.h"
using namespace std;
appointment::appointment()
{
}
appointment::appointment(const char a_No[10], int a_Room, const char a_Date[10] )
{
strcpy(appointmentNo,a_No);
roomNo=a_Room;
strcpy(appointmentDate,a_Date);
}
void appointment::displayappointmentDetails()
{
cout<<"Appointment NO :"<<appointmentNo<<endl;
cout<<"Room NO :"<<roomNo<<endl;
cout<<"Appointment Date :"<<appointmentDate<<endl;

}
void appointment:: updateappointmentDetails()
{
}
