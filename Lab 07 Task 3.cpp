#include<iostream>
#include<string>
using namespace std;
class Vehicle{
	public:
		int mileage;
		int price;	
};
class Car:public Vehicle{
	public:
		int cost;
		int warranty;
		int seating_capacity;
		string fuel;
};
class Bike:public Vehicle{
	public:
		int cylinder;
		int gears;
		string cooling;
		string wheel;
		float t_size;	
};
class Audi:public Car{
		public:
			string model_type;
			void display(){
			cout<<"Model type: "<<model_type<<endl;
			cout<<"Ownership cost: "<<cost<<endl;
			cout<<"Warranty: "<<warranty<<endl;
			cout<<"Seating Capacity: "<<seating_capacity<<endl;
			cout<<"Fuel type: "<<fuel<<endl;
			cout<<"Mileage is: "<<mileage<<endl;
			cout<<"Price of the car is: "<<price<<endl;
			}
};
class Ford:public Car{
	public:
		string model_type;
		void display(){
			cout<<"Model type: "<<model_type<<endl;
			cout<<"Ownership cost: "<<cost<<endl;
			cout<<"Warranty: "<<warranty<<endl;
			cout<<"Seating Capacity: "<<seating_capacity<<endl;
			cout<<"Fuel type: "<<fuel<<endl;
			cout<<"Mileage is: "<<mileage<<endl;
			cout<<"Price of the car is: "<<price<<endl;
		}
	
};
class Bajaj:public Bike{
	public:
		string make_type;
		void display(){
			cout<<"Make type is: "<<make_type<<endl;
			cout<<"Number of cylinders are: "<<cylinder<<endl;
			cout<<"Number of gears are: "<<gears<<endl;
			cout<<"Cooling type: "<<cooling<<endl;
			cout<<"Wheel type is: "<<wheel<<endl;
			cout<<"Fuel tank size is: "<<t_size<<endl;
			cout<<"Mileage is: "<<mileage<<endl;
			cout<<"Price of the bike is: "<<price<<endl;
			}
};
class TVS:public Bike{
	public:
		string make_type;
		void display(){
			cout<<"Make type is: "<<make_type<<endl;
			cout<<"Number of cylinders are: "<<cylinder<<endl;
			cout<<"Number of gears are: "<<gears<<endl;
			cout<<"Cooling type: "<<cooling<<endl;
			cout<<"Wheel type is: "<<wheel<<endl;
			cout<<"Fuel tank size is: "<<t_size<<endl;
			cout<<"Mileage is: "<<mileage<<endl;
			cout<<"Price of the bike is: "<<price<<endl;
			}

};
int main(){
	Audi ob1;
	Ford ob2;
	TVS ob3;
	Bajaj ob4;
	cout<<"\t\t\t\tAUDI"<<endl;
	cout<<"Enter model type: ";
	cin>>ob1.model_type;
	cout<<"Enter ownership cost: ";
	cin>>ob1.cost;
	cout<<"Enter warranty period: ";
	cin>>ob1.warranty;
	cout<<"Enter seating capacity: ";
	cin>>ob1.seating_capacity;
	cout<<"Enter fuel type: ";
	cin>>ob1.fuel;
	cout<<"Enter mileage: ";
	cin>>ob1.mileage;
	cout<<"Enter price of the car: ";
	cin>>ob1.price;
	cout<<"\t\t\t\tFORD"<<endl;
	cout<<"Enter model type: ";
	cin>>ob2.model_type;
	cout<<"Enter ownership cost: ";
	cin>>ob2.cost;
	cout<<"Enter warranty period: ";
	cin>>ob2.warranty;
	cout<<"Enter seating capacity: ";
	cin>>ob2.seating_capacity;
	cout<<"Enter fuel type: ";
	cin>>ob2.fuel;
	cout<<"Enter mileage: ";
	cin>>ob2.mileage;
	cout<<"Enter price of the car: ";
	cin>>ob2.price;
	cout<<"\t\t\t\tTVS"<<endl;
	cout<<"Enter make type: ";
	cin>>ob3.make_type;
	cout<<"Enter no of cylinders: ";
	cin>>ob3.cylinder;
	cout<<"Enter no of gears: ";
	cin>>ob3.gears;
	cout<<"Enter cooling type: ";
	cin>>ob3.cooling;
	cout<<"Enter wheel type: ";
	cin>>ob3.wheel;
	cout<<"Enter fuel tank size: ";
	cin>>ob3.t_size;
	cout<<"Enter mileage: ";
	cin>>ob3.mileage;
	cout<<"Enter price of the car: ";
	cin>>ob3.price;
	cout<<"\t\t\t\tBAJAJ"<<endl;
	cout<<"Enter make type: ";
	cin>>ob4.make_type;
	cout<<"Enter no of cylinders: ";
	cin>>ob4.cylinder;
	cout<<"Enter no of gears: ";
	cin>>ob4.gears;
	cout<<"Enter cooling type: ";
	cin>>ob4.cooling;
	cout<<"Enter wheel type: ";
	cin>>ob4.wheel;
	cout<<"Enter fuel tank size: ";
	cin>>ob4.t_size;
	cout<<"Enter mileage: ";
	cin>>ob4.mileage;
	cout<<"Enter price of the car: ";
	cin>>ob4.price;
	cout<<endl<<"\t\t\tDETAILS OF AUDI"<<endl;
	ob1.display();
	cout<<endl<<"\t\t\tDETAILS OF FORD"<<endl;
	ob2.display();
	cout<<endl<<"\t\t\tDETAILS OF TVS"<<endl;
	ob3.display();
	cout<<endl<<"\t\t\tDETAILS OF BAJAJ"<<endl;
	ob4.display();
	
	
	
}

