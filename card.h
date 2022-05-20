#include<iostream>
using namespace std;
class card

{
private:
	
char cardType[20];
float cardNo;
int cardCvv;
char cardExpdate[10];

public:
	
card();
card(const char cType[], float cNo, int cCvv,const char cExp[10]);
void setcardNo(float cNo);
int getcardNo();
void displaycardDetails();
void savecardDetails();
~card();
};


