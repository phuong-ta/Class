#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>

using namespace std;

class Car
{
	private:
		int id;
		string name;
		
	public:		
		Car();//constructor without parameters
		Car(int id, string name); // contructor with parameters
		void setValue(int id, string name);
		void getValue();
		
	protected:

};

#endif