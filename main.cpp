#include <iostream>
using namespace std;

int add(int a, int b){
  return (a+b);
}

int main(int argc, char const *argv[]) {

  add(10, 10);
  add(20, 10);
  add(20, 30);	
  std::cout << "\n***********************************" << '\n';
  std::cout << "              20 + 30 : " << add(20, 30);
  std::cout << "\n***********************************" << '\n';

  getchar();
  return 0;
}
