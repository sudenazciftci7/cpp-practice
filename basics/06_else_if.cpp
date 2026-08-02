#include <iostream>
using namespace std;

int main(){

int speed;

cout<<"Enter your speed: ";
cin>>speed;

if(speed<=50){
    cout<<"Safe speed "<<endl;
}

else if(speed<=90){
    cout<<"Be careful."<<endl;
}

else if(speed<=120){
    cout<<"Speed limit exceeded!"<<endl;
}

else{
    cout<<"Dangerous driving!"<<endl;
}

return 0;

}