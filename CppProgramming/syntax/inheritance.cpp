
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

  // 상속받은 클래스의 생성자를 호출하기 위해서는
  // 파생 클래스의 생성자에서 기초 클래스의 생성자를 호출해야 한다.
  B(int a, int b, int c, int d, int e, int f) : A(a, b, c){
    this->d = d;
    this->e = e;
    this->f = f;
  }

  void print(){

    // ::는 범위 지정 연산자라고 한다. 클래스나 네임스페이스의 멤버를 지정할 때 사용한다.
    // :: 연산자를 사용하면 기초 클래스의 멤버 함수를 호출할 수 있다.
    // 그래서 기초 클래스의 멤버 함수를 호출하면 기초 클래스의 멤버 변수들도 출력이 된다.
    A::print();
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;
  }
};

int main(){

  B b(1, 2, 3, 4, 5, 6);

  

  // 그래서 출력을 해보면 기초 클래스의 멤버 변수들도 출력이 된다.
  b.print();
  return 0;

}

