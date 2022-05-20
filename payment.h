#include<iostream>
using namespace std;
class payment
{
private:
char Pay_ID[5];
double amount;
char payment_Type[10];

public:
payment();
payment(const char P_ID[5],double pamount,const char p_Type[10]);
void displayAmount();

};
