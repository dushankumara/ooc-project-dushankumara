#include <iostream>
#include<cstring>
#include "admin.h"
using namespace std;

admin::admin()
{}
admin::admin(const char aId[20],const char aName[20],const char aEmail[20])
{
strcpy(adminId,aId);
strcpy(adminName,aName);
strcpy(adminEmail,aEmail);
}
void admin::DisplayDetails()
{
	cout<< "admin Id: " << adminId << endl;
	cout << "admin Name: " << adminName << endl;
	cout << "admin email: " << adminEmail << endl;
}
