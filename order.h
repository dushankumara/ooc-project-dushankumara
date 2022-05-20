#include<iostream>
using namespace std;

class order
{
private:
char orderId[10];
char deliveryStatus[20];
char deliveryMember[20];
char orderAddress[50];
char orderDate[10];
char deliveryDate[10];

public:
order(const char orId[10],const char orAdd[20],const char delMem[20],const char delStatus[50],const char orDate[10], const char delDate[10]);
void displayorderdetails();

};
