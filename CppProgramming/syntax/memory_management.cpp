#include <iostream>



int main(){
  
  // a라는 변수에 메모리가 할당된다. 즉 int크기 만큼의 메모리 주소를 가지게 된다.
  // main 메소드가 종료되기전 까지는 a변수는 메모리 주소를 가지고 있다.
  int a = 10;
  std::cout << a << std::endl;




  //new 연산자를 사용하여 10개의 int형 원소를 가진 배열 동적 할당
  int* arr = new int[10];
  // 배열에 값을 채우고 출력
  for (int i = 0; i < 10; i++) {
    arr[i] = i;
    std::cout << arr[i] << " ";
  }

  //단일 객체일 경우에는 delete를 쓰면 된다.
  delete[] arr; // 메모리 해제



  return 0;
}
