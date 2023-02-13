#include <iostream>
using namespace std;
class Shape { //abstract class
public:
  virtual void draw() = 0;
};

class Circle : public Shape {
public:
  void draw() {
    std::cout << "Drawing a Circle" << std::endl;
  }
};

int main() {
  Circle c;
  Shape *ptr = &c;  // ptr is a pointer to the Shape object
  ptr->draw();     // calling the draw() method through the pointer

  return 0;
}
