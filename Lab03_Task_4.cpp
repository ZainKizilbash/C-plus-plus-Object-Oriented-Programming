#include<iostream>
#include<string>
using namespace std;
class book{
	public:
		string book_name;
		int ISBN_no;
		string author_name;
		string publisher;
		getbookinfo(){
			cout<<"Book name: ";
			getline(cin,book_name);
			cout<<"ISBN number: ";
			cin>>ISBN_no;
			fflush(stdin);
			cout<<"Author name: ";
			getline(cin,author_name);
			cout<<"Publisher: ";
			getline(cin,publisher);
			cout<<"The Book: "<<book_name<<" has ISBN number "<<ISBN_no<<" and is written by "<<author_name<<" and published by "<<publisher<<endl;
		}
		
		
};
int main(){
	book booktest[5];
	int i;
	for(i=0;i<5;i++){
		booktest[i].getbookinfo();
	}
}
