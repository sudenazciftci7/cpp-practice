#include <iostream>
using namespace std;

int main(){

int password;

cout<<"Enter your password: ";
cin>>password;

while(password!=1234){
    cout<<"Wrong password. "<<endl;
    cout<<"Try again. "<<endl;;
    cin>>password;
}
cout<<"Access granted! ";    

return 0;    
}