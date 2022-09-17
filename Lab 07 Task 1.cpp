#include<iostream>
#include<string>
using namespace std;
class Fruit{
	public:
		int no_of_fruits;

};
class Apples:public Fruit{
	public:
		int display(){
			return no_of_fruits;
		}
};
class Mangoes:public Fruit{
	public:
		int display(){
			return no_of_fruits;
		}
		
};


int main(){
	Apples ob1;
	Mangoes ob2;
	int x, y;
	cout<<"Enter the number of apples you want to buy: ";
	cin>>x;
	ob1.no_of_fruits=x;
	cout<<"Enter the number of mangoes you want to buy: ";
	cin>>y;
	ob2.no_of_fruits=y;
	cout<<"Total fruits are: "<<ob1.display()+ob2.display();
}
	
	
	
	
	

