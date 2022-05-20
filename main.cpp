#include <iostream>
#include<iostream>
#include<cstring>

#include"recipient.h"
#include"card.h"
#include"patient.h"
#include"appointment.h"
#include"doctor.h"
#include"payment.h"
#include"feedback.h"
#include"order.h"
#include"report.h"
#include"admin.h"
using namespace std;

int main()
{
  cout<<"--------------------------"<<endl;
  cout<<"--------------------------"<<endl;
  
Patient * p1;
p1= new Patient("NH1","Dimantha","Kadawatha",26,"abcd1234");
p1->displayDetails();
delete p1;
  
cout<<"--------------------------"<<endl;
  cout<<"--------------------------"<<endl;
  
recipient r1("dulashkshi123@gmail.com","Change my Mind");
r1.displayDetails();
  
cout<<"--------------------------"<<endl;
  cout<<"--------------------------"<<endl;

    appointment app1("APPLY01",8, "05-04-2022");
app1.displayappointmentDetails();
    
cout<<"--------------------------"<<endl;
  cout<<"--------------------------"<<endl;

    doctor * D1;
D1 =new doctor("D01","Dr.Nayani Madarasinghe","eye specialist");
D1->DisplayDetails();
  delete D1;
  
cout<<"--------------------------"<<endl;
  cout<<"--------------------------"<<endl;

payment pay1("PAYQ23",4520.00,"VISA Card");
pay1.displayAmount();
  
cout<<"--------------------------"<<endl;
  cout<<"--------------------------"<<endl;
  
  
  card *crd;
crd = new card("visa", 1415456654,002,"2022-10-05");
crd->displaycardDetails();
delete crd ; 

  
cout<<"--------------------------"<<endl;
  cout<<"--------------------------"<<endl;

  report R1("r01","blood check","13/5/2022","14:53");
R1.DisplayDetails();



cout<<"--------------------------"<<endl;
  cout<<"--------------------------"<<endl;

  order o1("#112224","No143,Malabe road,Malabe","Smith","pending","25/03/2022","04/05/2022");
o1.displayorderdetails();
  
  cout<<"--------------------------"<<endl;
  cout<<"--------------------------"<<endl;

  feedback f1("Mr.Perera","+9470347869","perera04@gmail.com");
  f1.displayfeedbackdetails();

  cout<<"--------------------------"<<endl;
  cout<<"--------------------------"<<endl;
  
  admin A1("a01","mr.perera","perera1@gmail.com");
  A1.DisplayDetails();
   
  cout<<"--------------------------"<<endl;
  cout<<"--------------------------"<<endl;


  return 0;
 }