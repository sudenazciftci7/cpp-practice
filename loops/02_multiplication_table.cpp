#include <iostream>
using namespace std;

int main(){

int number;
int result;

int total=0;
int even=0;
int odd=0;
int highest=0;

cout<<"Enter a number: ";
cin>>number;

while(number<=0){
    cout<<"Invalid number! Enter again. "<<endl;
    cin>>number;
}

for(int i=1;i<=10;i++){

    result=number*i;
    cout<<number<<" x "<<i<<" = "<<result<<endl;

    total+=result;

    if(result%2==0)
       even++;

    else
       odd++;
}

if(result>highest)
   highest=result;

cout<<"Sum of results: "<<total<<endl;
cout<<"Largest result: "<<highest<<endl;
cout<<"Even numbers. "<<even<<endl;
cout<<"Odd numbers. "<<odd<<endl;   


return 0;
    
}