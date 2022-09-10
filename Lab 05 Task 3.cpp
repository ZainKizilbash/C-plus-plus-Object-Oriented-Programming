#include<iostream>
#include<string>
using namespace std;
class Bank{
	private:
		string name;
		string account_number;
		string type_of_account;
		float balance;
		static float interest;
		int z;
		public:
			Bank(){
				name="ABC";
				account_number="0f278969WF";
				type_of_account="current";
				balance=500.5;
			}
			Bank(string a, string b, string c, float d, float e){
				name=a;
				account_number=b;
				type_of_account=c;
				balance=d;
				interest=e;
			}
			void set_name(string a){
				name=a;
			}
			void set_account_number(string b){
				account_number=b;
			}
			void set_type_of_account(string c){
				type_of_account=c;
			}
			void set_balance(float d){
				balance=d;
			}
			void set_interest(float e){
				interest=e;
			}
			string get_name(){
				return name;
			}
			string get_account_number(){
				return account_number;
			}
			string get_type_of_account(){
				return type_of_account;
			}
			float get_balance(){
				return balance;
			}
			float get_interest(){
				return interest;
			}
			int withdrawal(float x){
				if(x<=balance){
					balance=balance-x;
					return 1;
				}
				else{
					return 0;
				}
				
			}
			void display(int y){
				cout<<"Name of account holder: "<<name<<endl;
				cout<<"Account number: "<<account_number<<endl;
				cout<<"Type of account: "<<type_of_account<<endl;
				if(y==1){
					cout<<"Withdrawal accepted!"<<endl;
					cout<<"Balance after withdrawal is: "<<balance<<endl;
				}
				else{
					cout<<"Withdrawal is rejected as you don't have sufficient funds!"<<endl;
					cout<<"Your balance is: "<<balance<<endl;
				}
				
			}
			float hi(){
				return interest;
			}
			void displayinterest(){
				cout<<"Interest rate is: "<<interest;
			}
};
float Bank::interest=0;
int main(){
	Bank user_1("Zain","4202768","Saving",5000,7);
	string name, acc, type;
	float balance, interest, amount;
	int z;
	cout<<"Enter your name: ";
	getline(cin,name);
	cout<<"Enter your account number: ";
	getline(cin,acc);
	cout<<"Enter your account type: ";
	getline(cin,type);
	cout<<"Enter current balance in your account: ";
	cin>>balance;
	cout<<"Enter interest rate: ";
	cin>>interest;
	user_1.set_name(name);
	user_1.set_account_number(acc);
	user_1.set_type_of_account(type);
	user_1.set_balance(balance);
	user_1.set_interest(interest);
	cout<<"Enter the withdrawal amount: ";
	cin>>amount;
	z=user_1.withdrawal(amount);
	user_1.display(z);
	user_1.displayinterest();
}
