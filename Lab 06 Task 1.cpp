#include<iostream>
#include<string>
using namespace std;
class Item{
	public:
		string item_no;
		string name;
		float price;
		Item(){
			item_no="asd785LAN";
			name="Zain Kizilbash";
			price=50.75;
		}
	
};
class Discounted:public Item{
	public:
		int discount_percent=10;
		float cal_discount(){
			return price*discount_percent/100;
		}

		
};
int main(){
	int n, i;
	float total=0, dis=0;
	cout<<"Enter how many items you want?";
	cin>>n;
	Discounted ob1[n];
	for(i=0;i<n;i++){
		cout<<"Enter item number: ";
		cin>>ob1[i].item_no;
		cout<<"Enter item name: ";
		cin>>ob1[i].name;
		cout<<"Enter price: ";
		cin>>ob1[i].price;	
		total=total+ob1[i].price;
		dis+=ob1[i].cal_discount();
	}
	
	cout<<"Your total bill is: "<<total<<endl;
	cout<<"Your bill after discount is: "<<total-dis;
	
	
	
}

