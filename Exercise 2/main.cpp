#include <iostream>
#include "Car/Car.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Car car1, car2;
	Car car3(25, "Colin");
	car1.setValue(45, "Diep");
	
	car1.getValue();
	car2.getValue();
	car3.getValue();
	
	system("pause");
	return 0;
}