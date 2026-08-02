#include <iostream>
using namespace std;

int main(){

int roomtype;
int nights;
char breakfast;

double perNightPrice=0;
double totalPrice=0;

cout<< "======HOTEL BOOKING SYSTEM====="<<endl;
cout<<"1. Standart Room ($80/night)"<<endl;
cout<<"2. Deluxe Room ($120/night)"<<endl;
cout<<"3. Suite Room ($200/night)"<<endl;
cout<<"4. Penthouse ($350/night)"<<endl;

cout<<"Select room type "<<endl;
cin>>roomtype;

switch(roomtype){
    case 1:
      perNightPrice = 80;
      break;

    case 2:
      perNightPrice = 120;
      break;
      
    case 3:
      perNightPrice = 200;
      break;
      
    case 4:
      perNightPrice = 350;
      break;  
      
    default:
    cout<<"Invalid room selection!"<<endl;  
    return 0;

}   

cout<<"Number of nights: ";
    cin>>nights;

    cout<<"Add breakfast?(Y/N): ";
    cin>>breakfast;

    totalPrice=perNightPrice*nights;

    if(breakfast=='Y'||breakfast=='y'){
        totalPrice+=nights*20;
    }

    if(nights>=7){
        cout<<"Long stay discount applied(10%). "<<endl;
        totalPrice*=0.9;
    }

cout<<endl;

cout<<"=====BOOKING SUMMARY====="<<endl;    

switch(roomtype){

  case 1:
      cout<<"Room Type : Standard Room"<<endl;
      break;

    case 2:
      cout<<"Room Type : Deluxe Room"<<endl;
      break;
      
    case 3:
      cout<<"Room Type : Suite Room"<<endl;
      break;
      
    case 4:
      cout<<"Room Type : Penthouse "<<endl;
      break;  
}
cout<<"Nights. "<<nights<<endl;

if(breakfast=='Y'||breakfast=='y')
  cout<<"Breakfast : Included" <<endl;

else 
  cout<<"No breakfast. "<<endl;

cout<<"Total Price is: "<<totalPrice<<endl;

cout<<endl;
cout<<"Thank you for choosing our hotel! "<<endl;

return 0; 
}