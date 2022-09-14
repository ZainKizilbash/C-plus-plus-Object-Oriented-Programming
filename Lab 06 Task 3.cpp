#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
		int empNo;
		char name[20];
		char des[20];
	public:
		void getEmployeeDetails(){
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter employee number: ";
		cin>>empNo;
		cout<<"Ente DES: ";
		cin>>des;
		}
		void employee_display(){
			cout<<"EMP number: "<<empNo<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Des: "<<des<<endl;
		}
		
		
};
class Salary:private Employee{
	public:
		float basic_pay;
		float human_resource_allowance;
		float dearness_allowance;
		float profitability_fund;
		float net_pay;

		void getPayDetails(){
			getEmployeeDetails();
			cout<<"Enter basic pay: ";
			cin>>basic_pay;
			cout<<"Enter human_resrouce_allowance: ";
			cin>>human_resource_allowance;
			cout<<"Enter Dearness Allowance: ";
			cin>>dearness_allowance;
			cout<<"Enter profitability fund: ";
			cin>>profitability_fund;

			
		}
		float Calculate_net_pay(){
			net_pay=(basic_pay+human_resource_allowance+dearness_allowance)-profitability_fund;
			return net_pay;
		}
		void Salary_display(){
			employee_display();
			cout<<"Basic Pay: "<<basic_pay<<endl;
			cout<<"Human Resoruce Allowance: "<<human_resource_allowance<<endl;
			cout<<"Dearness Allowance: "<<dearness_allowance<<endl;
			cout<<"Profitability fund: "<<profitability_fund<<endl;
			cout<<"Net Pay: "<<Calculate_net_pay()<<endl;
			
		}
};
class Bankcredit:private Salary{
	public:
		int accountno;
		char bankname[20];
		char IFSC[20];
		void getBankDetails(){
			getPayDetails();
			cout<<"Enter account number: ";
			cin>>accountno;
			cout<<"Enter bankname: ";
			cin>>bankname;
			cout<<"Enter IFSC: ";
			cin>>IFSC;
			
		}
		void display(){
			Salary_display();
			cout<<"Account Number: "<<accountno<<endl;
			cout<<"Bank name: "<<bankname<<endl;
			cout<<"IFSC: "<<IFSC;
		}
};
int main(){
	int n, i;
	cout<<"Enter number of employees: ";
	cin>>n;
	Bankcredit ob1[n];
	for(i=0;i<n;i++){
		ob1[i].getBankDetails();
		cout<<endl<<endl;
	}
	for(i=0;i<n;i++){
		cout<<endl<<"\t\t\t\t\tDeatils of Employee "<<i+1<<endl;
		ob1[i].display();
	}
	}
	
