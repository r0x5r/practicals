#include<iostream>  //member function out the class
using namespace std;
class student{
    public:
    double marks1,marks2;
  }; 

student creatstudent(){
    student a;
    a.marks1=96.5;
    a.marks2=86.5;
    cout<<"marks 1"<<a.marks1<<endl;
    cout<<"marks 2"<<a.marks2<<endl;
    return student();
}

int main(){
    student a1;
    a1=creatstudent();
    return 0;
}