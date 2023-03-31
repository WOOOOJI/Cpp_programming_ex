#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
  /* 기초적인 자료형 타입들 */


  // 정수형 - int, short, long, long long
  // 전부 다 정수형이지만, 메모리 크기가 다르다.


  // int는 4바이트 크기의 정수형이다.
  int a = 10;
  int* b = &a;

  *b = 40;

  std::cout << a << std::endl;
  // short는 2바이트 크기의 정수형이다.
  
  // long은 4바이트 크기의 정수형이다.
  long c = 30;
  // long long은 8바이트 크기의 정수형이다.
  long long d = 40;




  // 실수형 - float, double, long double
  // 전부 다 실수형이지만, 메모리 크기가 다르다.

  // float은 4바이트 크기의 실수형이다.
  float e = 1.1;
  // double은 8바이트 크기의 실수형이다.
  double f = 2.2;
  // double과 동일하다.
  long double g = 3.3;



  // 문자형 - char
  // char는 1바이트 크기의 문자형이다.
  // 문자형은 문자를 저장하는 자료형이다.
  // 문자형은 ''로 감싸서 저장한다.
  // 문자형은 아스키 코드로 저장된다.
  char h = 'a';


  
  // 논리형 - bool
  bool i = true;



  // -------------------------------------------------------------------------------------------------

  // 문자열 - string
  // string은 C++에서 문자열을 저장하는 자료형이다.
  // string 사용시 라이브러리를 사용해야한다. #include <string>
  // string은 std::string으로 선언해야 한다.
  std::string str = "Hello World!";




  // -------------------------------------------------------------------------------------------------

  // unsigned 선언 시 부호가 없어지므로, 양수만 저장할 수 있다.
  // unsigned int는 0부터 4,294,967,295까지의 양의 정수를 저장할 수 있다.
  unsigned int j = 4294967295;





  return 0;
}
