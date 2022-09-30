#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string name;
	virtual void getData()=0;
	virtual bool Outstanding()=0;
	void getName(){
		fflush(stdin);
		cout<<"Enter name: ";
		getline(cin,name);
	}
	void putName(){
		cout<<"Name: "<<name<<endl;
	}
};
class Student:public Person{
	public:
		float gpa;
	void getData(){
		cout<<"Enter student's GPA: ";
		cin>>gpa;
	}
	bool Outstanding(){
		if(gpa>3.5){
			return true;
		}
		else{
			return false;
		}
	}
};
class Professor:public Person{
	public:
		int publications;
	void getData(){
		cout<<"Enter number of publications: ";
		cin>>publications;
	}
	bool Outstanding(){
		if(publications>100){
			return true;
		}
		else{
			return false;
		}
	}
};
int main(){
	int x;
	char a;
	do{
		cout<<"Press 1 to enter data in student.\nPress 2 to enter data in professor.\n";
		cin>>x;
		if(x==1){
			Student obj;
			obj.getName();
			obj.getData();
			obj.putName();
			cout<<"Is GPA greater than 3.5? "<<obj.Outstanding();
			
		}
		else if(x==2){
			Professor obj;
			obj.getName();
			obj.getData();
			obj.putName();
			cout<<"Are publications greater than 100? "<<obj.Outstanding();
		}
		cout<<"\nDo you want to add more data? (Y for yes/N for no)";
		cin>>a;
	}while(a=='Y'||a=='y');
}
