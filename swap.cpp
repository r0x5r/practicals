#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two number to swap"<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"printing a"<<a<<endl;
    cout<<"printing b"<<b<<endl;
    return 0;
}