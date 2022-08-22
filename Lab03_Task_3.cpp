//scenario calculate employee's salary after appraisal of 10% using OOP.
#include<iostream>
#include<string>
using namespace std;
class Employee{
	public:
		string firstname;
		string lastname;
		double salary;
		void EmployeeTest(){
			cout<<"Enter first name: ";
			cin>>firstname;
			cout<<"Enter last name: ";
			cin>>lastname;
			cout<<"Enter salary: ";
			cin>>salary;
			salary=salary*12;
			if(salary<0){
				salary=0.0;
			}
		}
		void increase(){
			salary=salary+(0.1*salary);
		}
};
int main(){
	Employee A, B;
	A.EmployeeTest();
	B.EmployeeTest();
	cout<<"Employee A salary: "<<A.salary<<endl;
	cout<<"Employee B salary: "<<B.salary<<endl;
	A.increase();
	B.increase();
	cout<<"Employee A salary after 10% raise: "<<A.salary<<endl;
	cout<<"Employee B salary after 10% raise: "<<B.salary;
	
}
