#include<iostream>
#include<string>
using namespace std;
class Person{
	private:
		int age;
	protected:
		string name;
	public:
		Person(){
			age=20;
			name="Zain";
		}
		void set_age(int a){
			age=a;
		}
		void set_name(string b){
			name=b;
		}
		int get_age(){
			return age;
		}
		string get_name(){
			return name;
		}
};
class Employee{
	private:
		string empID;
	protected:
		int salary;
	public:
		Employee(){
			empID="4675";
			salary=5000;
		}
		void set_emp(string c){
			empID=c;
		}
		void set_sal(int d){
			salary=d;
		}
		string get_emp(){
			return empID;
		}
		int get_sal(){
			return salary;
		}
};
class Manager:public Person, public Employee{
	private:
		string type;
	public:
		Manager(){
			type="Vice president";
		}
		void set_type(string e){
			type=e;
		}
		string get_type(){
			return type;
		}
};
class ITManager:public Manager{
	private:
		int no_of_persons;
	public:
		ITManager(){
			no_of_persons=5;
		}
		void set_no(int f){
			no_of_persons=f;
		}
		void Display(){
			cout<<endl<<"\t\t\t\t\tDETAILS OF ITMANAGER"<<endl;
			cout<<"Name: "<<get_name()<<endl;
			cout<<"Age: "<<get_age()<<endl;
			cout<<"Employee ID: "<<get_emp()<<endl;
			cout<<"Salary: "<<get_sal()<<endl;
			cout<<"Type: "<<get_type()<<endl;
			cout<<"Number of persons: "<<no_of_persons;
			
		}
};
int main(){
	ITManager ob1;
	string NAME, TYPE, EMP;
	int AGE, SAL, NO;
	cout<<"Enter name: ";
	getline(cin,NAME);
	cout<<"Enter age: ";
	cin>>AGE;
	cout<<"Enter Employee ID: ";
	cin>>EMP;
	cout<<"Enter salary: ";
	cin>>SAL;
	cout<<"Enter type: ";
	cin>>TYPE;
	cout<<"Enter number of persons: ";
	cin>>NO;
	ob1.set_age(AGE);
	ob1.set_emp(EMP);
	ob1.set_name(NAME);
	ob1.set_no(NO);
	ob1.set_sal(SAL);
	ob1.set_type(TYPE);
	ob1.Display();
	
}
