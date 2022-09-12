#include<iostream>
#include<string>
using namespace std;
class Employee{
	public:
	string name;
	int number;
	Employee(){
		name="";
		number=0;
	}
};
class Manager:public Employee{
	public:
	string title;
	float club_dues;
	Manager(){
		title="Mr";
		club_dues=30;
	}
};
class Scientist:public Employee{
	public:
	string Title;
	int publication;
	Scientist(){
		Title="Ms";
		publication=43;
	}
	
};
class Laborer:public Employee{
	public:
	string title;
	Laborer(){
		title="Mr";
	}
};
int main(){
	Manager ob1;
	Scientist ob2;
	Laborer ob3;
	cout<<"\t\t\t\t\t\tMANAGER"<<endl;
	cout<<"Enter your name: ";
	getline(cin,ob1.name);
	cout<<"Enter employee identification number: ";
	cin>>ob1.number;
	fflush(stdin);
	cout<<"Enter title: ";
	getline(cin,ob1.title);
	cout<<"Enter club dues: ";
	cin>>ob1.club_dues;
	cout<<"\t\t\t\t\t\tSCIENTIST"<<endl;
	fflush(stdin);
	cout<<"Enter your name: ";
	getline(cin,ob2.name);
	cout<<"Enter employee identification number: ";
	cin>>ob2.number;
	fflush(stdin);
	cout<<"Enter title: ";
	getline(cin,ob2.Title);
	cout<<"Enter number of publications: ";
	cin>>ob2.publication;
	cout<<"\t\t\t\t\t\tLABORER"<<endl;
	fflush(stdin);
	cout<<"Enter your name: ";
	getline(cin,ob3.name);
	cout<<"Enter employee identification number: ";
	cin>>ob3.number;
	fflush(stdin);
	cout<<"Enter title: ";
	getline(cin,ob3.title);
	cout<<endl<<"\t\t\t\t\tMANAGER DETAILS"<<endl;
	cout<<"Name: "<<ob1.name<<endl;
	cout<<"Employee identification number: "<<ob1.number<<endl;
	cout<<"Title: "<<ob1.title<<endl;
	cout<<"Club Dues: "<<ob1.club_dues<<endl;
	cout<<endl<<"\t\t\t\t\tSCIENTIST DETAILS"<<endl;
	cout<<"Name: "<<ob2.name<<endl;
	cout<<"Employee identification number: "<<ob2.number<<endl;
	cout<<"Title: "<<ob2.Title<<endl;
	cout<<"Publications: "<<ob2.publication<<endl;
	cout<<endl<<"\t\t\t\t\tLABORER DETAILS"<<endl;
	cout<<"Name: "<<ob3.name<<endl;
	cout<<"Employee identification number: "<<ob3.number<<endl;
	cout<<"Title: "<<ob3.title<<endl;
	
}
