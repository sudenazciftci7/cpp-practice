#include <iostream>
using namespace std;

int main(){

int number,power=1;    

cout<<"Enter  a number: ";
cin>>number;

while(power<=number){
    power*=2;
    }
cout<<"Result: "<<power<<endl;


return 0;    
}