#include <iostream>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class firstClass{
	private:
		int id;
		string name;
	public:
		// Default constructor
		firstClass(){
			id= 10;
			name = "phuong";
		}
		//Constructor with parameters
		firstClass(int id, string name ){
			this->id=id;
			this->name = name;
		}
		
		void setInfo(int id, string name);
		void getIfno();
};

void firstClass::setInfo(int id, string name){
	this->id=id;
	this->name=name;
}

void firstClass::getIfno(){
	cout<<"Name: "<<this->name<<endl;
	cout<<"\tID:"<<this->id<<endl;
}
int main() {
	firstClass fc1, fc2;
	firstClass fc3(5, "Phuong123");// create class object and call constructor with parameters
	int id;
	string name;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter ID: ";
	cin>>id;
	
	fc1.setInfo(id, name);
	
	fc1.getIfno();
	fc2.getIfno();
	fc3.getIfno();
	

	system("pause");
	return 0;
}