#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		string name;
		string roll_no;
		int semester;
		char section;
		public:
			student(string a,string b, int c, char d){
				name=a;
				roll_no=b;
				semester=c;
				section=d;
			}
			void display(){
				cout<<"Display function called!"<<endl;
				cout<<"Name: "<<name<<endl;
				cout<<"Roll no. "<<roll_no<<endl;
				cout<<"Semester: "<<semester<<endl;
				cout<<"Section: "<<section;
				
			}
};
int main(){
	string w, x;
	int y;
	char z;
	cout<<"Enter your name: ";
	getline(cin,w);
	cout<<"Enter your roll no. ";
	getline(cin,x);
	cout<<"Enter your semester: ";
	cin>>y;
	cout<<"Enter your section: ";
	cin>>z;
	student user_1(w,x,y,z);
	user_1.display();
}
