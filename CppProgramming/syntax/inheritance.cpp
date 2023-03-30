
#include <iostream>

using namespace std;

class A{

private:
  int a;
  int b;
  int c;

public:
  A(int a, int b, int c){
    this->a = a;
    this->b = b;
    this->c = c;
  }

  void print(){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
  }
};


class B : public A{

private:
  int d;
  int e;
  int f;

public:
  B(int a, int b, int c, int d, int e, int f) : A(a, b, c){
    this->d = d;
    this->e = e;
    this->f = f;
  }

  void print(){
    A::print();
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;
  }
};

int main(){

  B b(1, 2, 3, 4, 5, 6);
  b.print();
  return 0;

}

