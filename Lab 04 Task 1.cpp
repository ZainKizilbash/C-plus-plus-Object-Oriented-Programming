#include<iostream>
#include<string>
using namespace std;
class Phone
{
	private:
		string area_code;
		string exchange_code;
		string consumer_no;
	public:
		Phone(string x)
	{
		area_code=x.substr(0,3);
		exchange_code=x.substr(3,4);
		consumer_no=x.substr(7,4);
	}	
		void display()
	{
		cout << "Your Area Code is: " << area_code << endl;
		cout << "Your Exchange Code is: " << exchange_code << endl;
		cout << "Your Consumer Number is: " << consumer_no << endl;
	}
};
int main()
{
	string number;
	cout<<"Input your number: ";
	cin>>number;
	Phone user_1(number);
	user_1.display();
}
