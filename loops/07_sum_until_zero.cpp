#include <iostream>
using namespace std;

int main(){

int number,sum=0,count=0;


cout<<"Enter a number(0 to stop): ";
cin>>number;

while(number!=0){
    sum+=number;
    count++;

cout<<"Enter a number(0 to stop): ";
cin>>number;    
}
cout<<"Count: "<<count<<endl;
cout<<"Sum: "<<sum;



return 0;    
}