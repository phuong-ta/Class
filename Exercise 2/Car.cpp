#include <iostream>
#include <string>
#include "Car.h"

using namespace std;
Car::Car(){
	this->id=10;
	this->name="Phuong";
};
Car::Car(int id, string name){
	this->id=id;
	this->name=name;
}
void Car::setValue(int id, string name){
	this->id=id;
	this->name=name;
}

void Car::getValue(){
	cout<<id<<": "<< name<<endl;
}