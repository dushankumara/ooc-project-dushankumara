#include<iostream>
using namespace std;
class recipient
{
private:
char email[20];
char details[25];
public:
recipient();
recipient(const char email[20],const char details[25]);
void updatedetails();
void displayDetails();
};

