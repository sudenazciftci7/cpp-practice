#include <iostream>
using namespace std;

int main(){

int numbers[5];    

cout<<"Enter 5 numbers: "<<endl;

for(int i=0;i<5;i++){
    cin>>numbers[i];

}    

int minimum=numbers[0];
int maximum=numbers[0];

for(int i=1;i<5;i++){
    if(numbers[i]<minimum){
        minimum=numbers[i];
    }
    if(numbers[i]>maximum){
        maximum=numbers[i];
    }
}
cout<<"New mimimum is: "<<minimum<<endl;
cout<<"New maximum is: "<<maximum<<endl;

return 0;    
}