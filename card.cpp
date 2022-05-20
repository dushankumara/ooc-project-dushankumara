#include<iostream>
#include<cstring>
#include"card.h"
using namespace std;



card::card()
{
}
card::card(const char cType[], float cNo, int cCvv,const char cExp[10])
{
strcpy(cardType,cType);
cardNo=cNo;
cardCvv=cCvv;
strcpy(cardExpdate,cExp);
cout<<"overload this card details"<<endl;
}



void card::setcardNo(float cNo)
{
}
int card::getcardNo()
{
return cardNo ;
}
void card:: displaycardDetails()
{
cout<<"Card Type :"<<cardType<<endl;
cout<<"Card No :"<<cardNo<<endl;
cout<<"Card CVV :"<<cardCvv<<endl;
cout<<"Card EXP :"<<cardExpdate<<endl;

}



void card:: savecardDetails()
{
}



card::~card()
{
cout<<"card class has been deleted"<<endl;
}
