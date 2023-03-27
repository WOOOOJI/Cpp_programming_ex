#include <iostream>
#include <cstdlib>
#include <ctime>



int main() {
    srand(time(0)); // 현재 시간을 시드값으로 사용하여 랜덤 함수 초기화

    int answer = rand() % 100 + 1; // 1부터 100 사이의 랜덤한 숫자 생성

    int guess, num_guesses = 0; // 사용자가 입력한 숫자와 시도 횟수 변수 선언

    std::cout << "1부터 100 사이의 숫자를 맞춰보세요!" << std::endl;

    do {
        std::cout << "숫자를 입력하세요: ";
        std::cin >> guess;

        num_guesses++; // 시도 횟수 증가

        if (guess < answer) {
            std::cout << "좀 더 큰 수를 입력하세요." << std::endl;
        } else if (guess > answer) {
            std::cout << "좀 더 작은 수를 입력하세요." << std::endl;
        }
    } while (guess != answer);

    std::cout << "축하합니다! " << num_guesses << "번 만에 맞췄습니다." << std::endl;

    return 0;
}