#include <iostream>

using namespace std;

class Employee {
  public:
    int age;
    // Parameterized constructor
    Employee(int x) { 
    /* Age assigned to value passed as an argument 
    while object declaration.*/
      age = x; 
    }
};

int main() {
  /* Object c1 declared with argument 40, which 
  gets assigned to age.*/
  Employee c1(40); 
  cout << c1.age << endl;
  return 0;
}
