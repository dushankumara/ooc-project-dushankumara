#include <iostream>
#include<cstring>
using namespace std;
class admin
{
protected:
char adminId[20];
char adminName[20];
char adminEmail[20];
public:
admin();
admin(const char aId[20],const char aName[20],const char aEmail[20]);
void DisplayDetails();
};
