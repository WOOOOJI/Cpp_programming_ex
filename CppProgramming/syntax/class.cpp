#include <iostream>

// namespace: 이름공간
// std: 표준 라이브러리 / cout, cin, endl 등등 사용 가능
// using namespace std; 를 사용하면 std:: 생략 가능
using namespace std;

class MyClass{

    // 접근제한자 (public, private, protected)


    // private: 클래스 내부에서만 접근 가능
    private:
        int a;
        int b;
        int c;


    // public: 클래스 외부에서도 접근 가능
    public:
        MyClass(int& a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }


    // Method: 함수 (기능)
        void print(){
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
            cout << "c = " << c << endl;
            a=55;
        }
};


// main 함수에서 클래스 사용
int main(){
    int a;


    cout << "값을 입력해주세요:";
    cin >> a;

    // 객체 생성
    MyClass myClass(a, 2, 3);
    // 객체의 메소드 호출
    myClass.print();



    
    return 0;
}

