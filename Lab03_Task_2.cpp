//QUESTION#2
//Create a class called Employee that includes three pieces of information as data members—a first
//name (type char*), a last name (type string) and a monthly salary (type int). Your class should have
//a setter function that initializes the three data members. Provide a getter function for each data
//member. If the monthly salary is not positive, set it to 0.Write a test program that demonstrates
//class Employee’s capabilities. Create two Employee objects and display each object’s yearly salary.
//Then give each Employee a 10 percent raise and display each Employee’s yearly salary again.
//Identify and add any other related functions to achieve the said goal.

#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
	string first_name;
	string last_name;
	int salary;
	public:
		void set_fname(string a){
			first_name=a;
		}
		void set_lname(string b){
			last_name=b;
		}
		void set_sal(int c){
			salary=c;
			if(salary<0){
				salary=0;
			}
			fflush(stdin);
		}
		string get_fname(){
			return first_name;
		}
		string get_lname(){
			return last_name;
		}
		int get_salary(){
			return salary;
		}
		int yearly_salary(){
			salary=salary*12;
			return salary;
		}
		int increment(){
			salary=salary+(0.1*salary);
			return salary;
		}
};
int main(){
	Employee user_1, user_2;
	string fname, lname, a, b, c, d;
	int sal, y, z;
	cout<<"Enter first name: ";
	getline(cin,fname);
	cout<<"Enter last name: ";
	getline(cin,lname);
	cout<<"Enter monthly salary: ";
	cin>>sal;
	user_1.set_fname(fname);
	user_1.set_lname(lname);
	user_1.set_sal(sal);
	cout<<"Enter first name: ";
	getline(cin,fname);
	cout<<"Enter last name: ";
	getline(cin,lname);
	cout<<"Enter monthly salary: ";
	cin>>sal;	
	user_2.set_fname(fname);
	user_2.set_lname(lname);
	user_2.set_sal(sal);
	a=user_1.get_fname();
	b=user_1.get_lname();
	y=user_1.get_salary();
	c=user_2.get_fname();
	d=user_2.get_lname();
	z=user_2.get_salary();
	cout<<"Yearly salary of "<<a<<" "<<b<<" is: $"<<user_1.yearly_salary()<<endl;
	cout<<"Yearly salary of "<<c<<" "<<d<<" is: $"<<user_2.yearly_salary()<<endl;
	cout<<"Salary of "<<a<<" "<<b<<" after 10% raise: $"<<user_1.increment()<<endl;
	cout<<"Salary of "<<c<<" "<<d<<" after 10% raise: $"<<user_2.increment()<<endl;
	
}
