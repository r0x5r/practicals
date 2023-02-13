#include<iostream>
using namespace std;
class human{ // class create
    public:
    int height;
    int weight;
    int age;
    public:
    int getage() //getter 
    {
        return this ->age;
    }
    int setweight(int w) //setter
    {
        this->weight=w;
    }
};

class male:public human{
    public:
    string color;
    void sleep(){
        cout<<"male is slepping"<<endl;
    }
};


int main()
{
    male m1;
    cout<<m1.height;
    // male obj1;
    // cout<<obj1.age<<endl;
    // cout<<obj1.weight<<endl;
    // cout<<obj1.height<<endl;
    // cout<<obj1.color<<endl;
    // obj1.setweight(84);
    // cout<<obj1.weight;
    // obj1.sleep(); 
    
    return 0;
}