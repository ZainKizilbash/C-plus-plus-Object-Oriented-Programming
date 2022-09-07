#include<iostream>
#include<string>
using namespace std;
class RentCalculator{
	private:
		const string customerName;
		const float rentPerDay;
		int number_of_days;
		float customerRent;
		float discount;
		public:
			RentCalculator(string a, int b):customerName(a), rentPerDay(1000.85),discount(0),number_of_days(b){};
			Rentwithbonus(){
				if(number_of_days>7){
				customerRent=(number_of_days-1)*rentPerDay;
				discount=rentPerDay;
				}
			}
			Rentwithoutbonus(){
				if(number_of_days<=7){
					customerRent=number_of_days*rentPerDay;
				}
			}
			void DisplayRent(){
				cout<<"Customer name: "<<customerName<<endl;
				cout<<"Days: "<<number_of_days<<endl;
				cout<<"Rent: "<<customerRent<<endl;
				cout<<"Discount: "<<discount;
			}
			
};
int main(){
	string name_1;
	int f;
	cout<<"Enter your name: ";
	getline(cin,name_1);
	cout<<"Enter the number of days you stayed: ";
	cin>>f;
	RentCalculator user_1(name_1,f);
	user_1.Rentwithbonus();
	user_1.Rentwithoutbonus();
	user_1.DisplayRent();
}
