#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
	char* Name;
	const int ID;
	public:
		Employee(char* a,int b):Name(a),ID(b){}
		void set_name(char* c){
			Name=c;
		}
		char* get_name(){
			return Name;
		}
		int get_ID(){
			return ID;
		}
	
};
int main(){
	char name_1[50], name_2[50], name_3[50], x;
	int id;
	cout<<"Enter 1st Employee's name: ";
	cin>>name_1;
	cout<<"Enter 1st Employee's id: ";
	cin>>id;
	Employee Employee1(name_1,id);
	cout<<"Enter 2nd Employee's name: ";
	cin>>name_2;
	cout<<"Enter 2nd Employee's id: ";
	cin>>id;
	Employee Employee2(name_2,id);
	cout<<"Enter 3rd Employee's name: ";
	cin>>name_3;
	cout<<"Enter 3rd Employee's id: ";
	cin>>id;
	Employee Employee3(name_3,id);
	cout<<"Does 1st Employee want to change his/her name? Y/N: ";
	cin>>x;
	if(x=='y'||x=='Y'){
		cout<<"Enter 1st Employee's name: ";
		cin>>name_1;
		Employee1.set_name(name_1);
	}
	cout<<"Does 2nd Employee want to change his/her name? Y/N: ";
	cin>>x;
	if(x=='y'||x=='Y'){
		cout<<"Enter 2nd Employee's name: ";
		cin>>name_2;
		Employee2.set_name(name_2);
	}
	cout<<"Does 3rd Employee want to change his/her name? Y/N: ";
	cin>>x;
	if(x=='y'||x=='Y'){
		cout<<"Enter 3rd Employee's name: ";
		cin>>name_3;
		Employee3.set_name(name_3);
	}
	cout<<endl<<"               EMPLOYEE DETAILS"<<endl;
	cout<<"Employee 1 Name: "<<Employee1.get_name()<<endl;
	cout<<"Employee 1 ID: "<<Employee1.get_ID()<<endl;
	cout<<"Employee 2 Name: "<<Employee2.get_name()<<endl;
	cout<<"Employee 2 ID: "<<Employee2.get_ID()<<endl;
	cout<<"Employee 3 Name: "<<Employee3.get_name()<<endl;
	cout<<"Employee 3 ID: "<<Employee3.get_ID()<<endl;
	
}
