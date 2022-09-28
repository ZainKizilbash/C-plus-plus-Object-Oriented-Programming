#include<iostream>
using namespace std;
class Account{
	public:
		float Balance;
		Account(){
			Balance=1000;
		}
		Account(float g){
			Balance=g;
		}
		virtual void Deposit(){
			float x;
			cout<<"Enter Deposit Amount: ";
			cin>>x;
			Balance=Balance+x;
		}
		virtual void Withdraw(){
			float x;
			cout<<"Enter Withdrawn Amount: ";
			cin>>x;
			Balance=Balance-x;
		}
		virtual void CheckBalance(){
			cout<<"Current Balance = "<<Balance<<endl;
		}
};
class InterestAcc:virtual public Account{
	protected:
		float interest;
	public:
		InterestAcc():Account(){
			interest=30/100;
		}
		InterestAcc(float x, float y):Account(y){
			interest=x/100;
		}
		void Deposit(){
			float a;
			cout<<"Enter Deposit Amount: ";
			cin>>a;
			Balance=Balance+a+(a*interest);
		}
};
class ChargingAcc:virtual public Account{
	protected:
		float fee;
	public:
		ChargingAcc():Account(){
			fee=3;
		}
		ChargingAcc(float x, float y):Account(y){
			fee=x;
		}
		void Withdraw(){
			float a;
			cout<<"Enter Withdrawn Amount: ";
			cin>>a;
			Balance=Balance-(a+3);
		}
};
class ACI:public ChargingAcc, public InterestAcc{
	public:
		void Transfer(double x, Account &obj1){
			obj1.Balance=x+obj1.Balance;
		}
		void Transfer(double x, InterestAcc &obj1){
			obj1.Balance=x+obj1.Balance;
		}
		void Transfer(double x, ChargingAcc &obj1){
			obj1.Balance=x+obj1.Balance;
		}
		
};
int main(){
	float x, y;
	cout<<"Enter Balance in your account: ";
	cin>>x;
	Account obj(x);
	cout<<"\t\t\tACCOUNT"<<endl;
	obj.Deposit();
	obj.Withdraw();
	obj.CheckBalance();
	cout<<"Enter Interest Rate(eg if 30% then just write 30): ";
	cin>>y;
	InterestAcc obj2(y, x);
	cout<<"\t\t\tINTEREST ACCOUNT"<<endl;
	obj2.Deposit();
	obj2.Withdraw();
	obj2.CheckBalance();
	ChargingAcc obj3(3, x);
	cout<<"\t\t\tCHARGING ACCOUNT"<<endl;
	obj3.Deposit();
	obj3.Withdraw();
	obj3.CheckBalance();
	ACI obj4;
	cout<<"\t\t\tBalance after transfer"<<endl;
	obj4.Transfer(500,obj);
	obj.CheckBalance();
	obj4.Transfer(300,obj2);
	obj2.CheckBalance();
	obj4.Transfer(200,obj3);
	obj3.CheckBalance();
	
	
}
