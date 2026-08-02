#include <iostream>

using namespace std;

int main(){

int age;
double experience;

cout<<"Enter your age: "<<endl;
cin>>age;

cout<<"Enter your experience: "<<endl;
cin>>experience;

if((age>=22 && age<=35)|| experience>=2){

    cout<<"You passed the first interview."<<endl;
}
 else{

     cout<<"You did not pass the first interview."<<endl;
 }

return 0;

}