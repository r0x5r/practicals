#include<iostream>
using namespace std;
float moneyrec(int current,float factor=1.04)//function with default argument  
{
    return current*factor;
}
int main(){
    int money=100;
    cout<<"if you have "<<money<<" then after one year you wil  get  "<<moneyrec(money)<<endl;

    cout<<"for vip "<<money<<"  after "<<moneyrec(money,1.1)<<endl;
    return 0;
}