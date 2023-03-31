#include <iostream>


int main(){
  int a = 10;
  int b = 20;
  int* c = &a+1;





  int arr[] = {1,6,4,5,2};
  int* ptr = arr;

  std::cout << *ptr << std::endl; // 1
  std::cout << *(ptr+1) << std::endl; // 6


}
