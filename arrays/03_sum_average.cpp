#include <iostream>
using namespace std;

int main(){

int sum=0;
double average;
int numbers[6];

cout<<"Enter 6 numbers: "<<endl;

for(int i=0;i<6;i++){
    cin>>numbers[i];
    sum+=numbers[i];
}
average=(double)sum/6;

cout<<"Sum: "<<sum<<endl;
cout<<"Average: "<<average;


return 0;    
}