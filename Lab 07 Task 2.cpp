#include<iostream>
#include<string>
using namespace std;
class Mammals{
	public:
		void func1(){
			cout<<"I am mammal."<<endl;
		}
};
class MarineAnimals{
	public:
		void func2(){
			cout<<"I am a marine animal."<<endl;
		}
};
class Bluewhale:public Mammals, public MarineAnimals{
	public:
		void func3(){
			cout<<"I belong to both the categories: Mammals as well as Marine Animals."<<endl;
		}
};
int main(){
	Mammals ob1;
	MarineAnimals ob2;
	Bluewhale ob3;
	ob1.func1();
	ob2.func2();
	ob3.func3();
	ob3.func1();
	ob3.func2();
}
