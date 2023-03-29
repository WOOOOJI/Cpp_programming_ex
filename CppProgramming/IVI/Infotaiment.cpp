#include <iostream>
#include <string>

using namespace std;

// 차량 정보 클래스
class CarInfo {
public:
    CarInfo() : temperature_(0), mileage_(0), rpm_(0) {}
    ~CarInfo() {}

    void setTemperature(float temperature) { temperature_ = temperature; }
    void setMileage(int mileage) { mileage_ = mileage; }
    void setRPM(int rpm) { rpm_ = rpm; }

    float getTemperature() const { return temperature_; }
    int getMileage() const { return mileage_; }

    
    int getRPM() const { return rpm_; }

private:
    float temperature_;
    int mileage_;
    int rpm_;
};

// 인포테이먼트 클래스
class Infotainment {
public:
    Infotainment() {}
    ~Infotainment() {}

    // 인포테이먼트 기능 함수들
    void showTemperature(const CarInfo& car_info) {
        cout << "Temperature: " << car_info.getTemperature() << " C" << endl;
    }

    void showMileage(const CarInfo& car_info) {
        cout << "Mileage: " << car_info.getMileage() << " km" << endl;
    }

    void showRPM(const CarInfo& car_info) {
        cout << "RPM: " << car_info.getRPM() << endl;
    }

    void showNavigation(const string& destination) {
        cout << "Navigating to " << destination << endl;
    }

    void playMedia(const string& media_file) {
        cout << "Playing " << media_file << endl;
    }

    void makeCall(const string& phone_number) {
        cout << "Calling " << phone_number << endl;
    }
};

// 메인 함수
int main() {
    CarInfo car_info;
    Infotainment infotainment;

    // 차량 정보 설정
    car_info.setTemperature(25.5);
    car_info.setMileage(10000);
    car_info.setRPM(3000);

    // 인포테이먼트 기능 실행
    infotainment.showTemperature(car_info);
    infotainment.showMileage(car_info);
    infotainment.showRPM(car_info);
    infotainment.showNavigation("Seoul");
    infotainment.playMedia("music.mp3");
    infotainment.makeCall("010-1234-5678");

    return 0;

    
}