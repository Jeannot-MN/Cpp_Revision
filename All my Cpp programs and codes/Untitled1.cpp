#include <iostream>
 
class A {
  int x;
public:
  A() { x = 0; ++x; }
};
 
int main() {
 for (int i = 0; i < 10000; ++i) {
   A *a = new A();
   delete a;
 }
 std::cout << "DING!" << std::endl;
}

