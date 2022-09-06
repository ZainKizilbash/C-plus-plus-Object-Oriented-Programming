#include<iostream>
using namespace std;
class Parent{
	public:
		virtual void display(){
			cout<<"Parent class"<<endl;
		}
};
class Derived1:public Parent{
	public:
		void display(){
			cout<<"Derived 1 class"<<endl;
		}
};
class Derived2:public Parent{
	public:
		void display(){
			cout<<"Derived 2 class"<<endl;
		}
};
int main(){
	Parent *ptr;
	Parent object;
	Derived1 obj;
	Derived1 *ptr1=dynamic_cast<Derived1*>(&object);
	ptr1->display();
}
