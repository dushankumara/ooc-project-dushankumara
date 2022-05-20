#include<iostream>
#include<cstring>
#include"payment.h"
using namespace std;

payment::payment()
{
}
payment::payment(const char P_ID[5],double pamount,const char p_Type[10])
{
strcpy(Pay_ID,P_ID);
amount=pamount;
strcpy(payment_Type,p_Type);
}


void payment::displayAmount()
{
	cout << "Pay ID : " << Pay_ID << endl;
	cout << "Amount : " << amount << endl;
	cout << "Payment Type: " << payment_Type << endl;

}
