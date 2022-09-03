#include<iostream>
#include<string>
using namespace std;
class Sales{
private:
int SaleID;
string itemname;
int quantity;
public:
//Sales(){
//SaleID=5;
//itemname="toys";
//quantity=11;
//}
Sales(){
cout<<"Enter Sale ID: ";
cin>>SaleID;
cout<<"Enter item name: ";
cin>>itemname;
cout<<"Enter quantity: ";
cin>>quantity;
}
Sales(int a,string b, int c){
SaleID=a;
itemname=b;
quantity=c;
}

int get_quantity(){
	return quantity;
}
};
int main(){
//Sales user_1();
int sale, quan;
string item;
cout<<"Enter Sale ID: ";
cin>>sale;
cout<<"Enter item name: ";
cin>>item;
cout<<"Enter quantity: ";
cin>>quan;
Sales user_1(sale,item,quan);
Sales user_2=user_1;
cout<<"Quantity copied!"<<endl<<user_2.get_quantity();


}

