#include<iostream>
#include<cstring>
#include"order.h"
using namespace std;

order::order(const char orId[10],const char orAdd[20],const char delMem[20],const char delStatus[50],const char orDate[10], const char delDate[10])
{
strcpy(orderId,orId);
strcpy(orderAddress,orAdd);
strcpy(deliveryMember,delMem);
strcpy(deliveryStatus ,delStatus);
strcpy(orderDate , orDate);
strcpy(deliveryDate , delDate);

}
void order :: displayorderdetails()
{
cout<<"Order ID :"<<orderId<<endl;
cout<<"Order Address :" <<orderAddress<<endl;
cout<<"Delivery Member : " <<deliveryMember<<endl;
cout<<"Delivery Status: "<<deliveryStatus<<endl;
cout<<"Order Date: "<<orderDate<<endl;
cout<<"Delivery Date: "<<deliveryDate<<endl;

}
