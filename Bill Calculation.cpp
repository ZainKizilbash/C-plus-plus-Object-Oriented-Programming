#include<iostream>
#include<string>
using namespace std;
class store{
	private:
		string code_no;
		float price;
		int quantity;
		float total;
		public:
			store(){
				code_no="21khY";
				price=25;
				quantity=5;
				total=0;
			}
			void set_codeno(string a){
				code_no=a;
			}
			void set_price(float b){
				price=b;
			}
			void set_quantity(int c){
				quantity=c;
			}
			void set_total(){
				total=price*quantity;
			}
			string get_codeno(){
				return code_no;
			}
			float get_price(){
				return price;
			}
			int get_quantity(){
				return quantity;
			}
			float get_total(){
				return total;
			}
			~store(){
				cout<<endl<<"Destructor called!";
			}
			
};
int main(){
	int a, i, quan, j, z=0;
	float pri, totalprice=0;
	string codenum;
	cout<<"How many items you want to buy?";
	cin>>a;
	store user[a];
	for(i=0;i<a;i++){
		fflush(stdin);
		cout<<"Enter code number for product "<<i+1<<": "<<endl;
		getline(cin,codenum);
		cout<<"Enter price for product "<<i+1<<": "<<endl;
		cin>>pri;
		cout<<"Enter quantity for product "<<i+1<<": "<<endl;
		cin>>quan;
		user[i].set_codeno(codenum);
		user[i].set_price(pri);
		user[i].set_quantity(quan);
		user[i].set_total();
	}
	cout<<"Press 1 if you want to remove an item from the list: ";
	cin>>j;
	if(j==1){
		fflush(stdin);
		cout<<"Enter code number of the product you want to remove: ";
		getline(cin,codenum);
		for(i=0;i<a;i++){
			if(user[i].get_codeno()==codenum){
				z=1;
				user[i].set_price(0);
				user[i].set_quantity(0);
				user[i].set_total();
				break;
			}
		}
			if(z==1){
			cout<<"Product successfully removed"<<endl;	
		}
		else{
			cout<<"No such product found!"<<endl;
		}
	}
	for(i=0;i<a;i++){
		totalprice=totalprice+user[i].get_total();
	}
	cout<<"Your total is: $"<<totalprice;
}
