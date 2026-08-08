#include <iostream>
using namespace std;

int main(){

int numberOfstudent;
int grade;
double average;

int total=0;
int passed=0;
int failed=0;

cout<<"How many students? ";
cin>>numberOfstudent;

while(numberOfstudent<=0){
    cout<<"Invalid number of students. Enter again. ";
    cin>>numberOfstudent;
}

for(int i=1;i<=numberOfstudent;i++){
    cout<<"Student "<<i<<" grade(0-100): ";
    cin>>grade;

while(grade<0 || grade>100){
    cout<<"Invalid grade! Enter between 0-100 ";
    cin>>grade;
}    
    
    total+=grade;

if(grade>=50)
passed++;

else
failed++;

}

average=total/numberOfstudent;

cout<<"Average is : "<<average<<endl;
cout<<"Passed students: "<<passed<<endl;
cout<<"Failed students: "<<failed<<endl;

return 0;

}