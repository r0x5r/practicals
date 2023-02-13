#include<iostream> //function overloading and functioin overload with parameter
using namespace std;
class a{
  public:
  void hello(){
    cout<<"helloo"<<endl;
  }
  void hello(string name){
    cout<<"hello "<<name<<endl;
  }
};
int main (){
  a h;
  string name="love babr";
  h.hello();
  h.hello(name);
  return 0;
}