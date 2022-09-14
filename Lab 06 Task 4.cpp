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
			age=10;
			name="Ali";
		}
		void set_age(int a){
			age=a;
		}
		int get_age(){
			return age;
		}
};
class Employee{
	private:
		int empid;
	protected:
		float salary;
	public:
		Employee(){
			empid=101;
			salary=5000;
		}
		void set_empid(int b){
			empid=b;
		}
		int get_empid(){
			return empid;
		}
};
class Manager:public Person,public Employee{
	private:
		string type;
	public:
		Manager(){
			type="ABC";
		}
		void set_type(string c){
			type=c;
		}
		string get_type(){
			return type;
		}
};
class ITManager:public Manager{
	private:
		int no_of_persons;
	public:
		ITManager(int a, string b, int c, float d, string e, int f){
			set_age(a);
			name=b;
			set_empid(c);
			salary=d;
			set_type(e);
			no_of_persons=f;
		}
		void display(){
			cout<<"\t\t\t\t\tDISPLAY FUNCTION CALLED"<<endl;
			cout<<"Age: "<<get_age()<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Employee ID: "<<get_empid()<<endl;
			cout<<"Salary: "<<salary<<endl;
			cout<<"Type: "<<get_type()<<endl;
			cout<<"Number of persons: "<<no_of_persons;
			
		}
};
int main(){
	ITManager ob1(20, "Zain Kizilbash", 4675,25000,"Programmer",10);
	ob1.display();
	return 0;
}



