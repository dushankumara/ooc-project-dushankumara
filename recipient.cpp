#include<iostream>
#include<cstring>
#include"recipient.h"
using namespace std;
recipient::recipient()
{
}
recipient::recipient(const char recipient_email[20],const char recipient_details[25])
{
strcpy(email,recipient_email);
strcpy(details,recipient_details);
}
void recipient::updatedetails()
{
}



void recipient::displayDetails()
{
cout << "Email : " << email << endl;
cout << "Details : " << details << endl;
}
