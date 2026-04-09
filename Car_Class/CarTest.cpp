#include "Car.h"// 자동차 클래스 헤더파일 포함
int main() {
class SportsCar : public Car{
public:
	bool bTurbo;
	void setTurbo(bool bTur) { bTurbo = bTur; }
	void speedUp() {
		if (bTurbo) speed += 20;
		else Car::speedUp();
	}
};
	Car myCar(0, "Morning", 1);

	// 2. 현재 상태 출력
	myCar.display();
	//3. 속도 올리기 (5씩 증가)
	myCar.speedUp();
	myCar.display();
	// 4. 기어 변경	
	myCar.changeGear();
	myCar.display();
	// 5. 현재 상태 출력	
	myCar.display();
	// 6. 객체 주소 출력	
	myCar.whereAmI();
	return 0;
}