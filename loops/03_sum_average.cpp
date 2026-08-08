#include <iostream>
using namespace std;

int main(){

int numberOfvalues;
int number;
double average;
int highest;
int lowest;
int total=0;


cout<<"How many numbers will you enter? ";
cin>>numberOfvalues;

while(numberOfvalues<=0){
    cout<<"Invalid number! Enter again. "<<endl;
    cin>>numberOfvalues;
}

for(int i=1;i<=numberOfvalues;i++){
    cout<<"Enter number "<<i<<" : ";
    cin>>number;

total+=number;

if(i==1){
    highest=number;
    lowest=number;
}

if(number>highest)
highest=number;

if(number<lowest)
lowest=number;

}

average=total/numberOfvalues;

cout<<"Sum "<<total<<endl;
cout<<"Average "<<average<<endl;
cout<<"Lowest "<<lowest<<endl;
cout<<"Highest "<<highest<<endl;

return 0;

}