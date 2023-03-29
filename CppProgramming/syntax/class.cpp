#include <iostream>

using namespace std;

class MyClass{
    private:
        int a;
        int b;
        int c;

    public:
        MyClass(int a, int b, int c){
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

int main(){
  int a;

  cin >> a;

    MyClass myClass(a, 2, 3);
    myClass.print();

  return 0;
}

