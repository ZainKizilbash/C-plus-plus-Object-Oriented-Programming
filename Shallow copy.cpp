#include<iostream>
using namespace std;
class Numbers{
	private:
		int size;
		int *ptr;
	public:
		Numbers(){
			
		}
		void setsize(int a){
			size=a;
		}
		void setpointer(int a){
			ptr=&a;
		}
		int getsize(){
			return size;
		}
		int getpointer(){
			return *ptr;
		}
		~Numbers(){
			delete ptr;
		}
		
};
int main(){
	Numbers obj1, obj2;
	obj1.setsize(15);
	obj1.setpointer(10);
	cout<<"Data of 1st object: "<<endl;
	cout<<"Size: "<<obj1.getsize()<<endl;
	cout<<"Ptr: "<<obj1.getpointer()<<endl;
	cout<<"Shallow copy implemented: "<<endl;
	obj2=obj1;				//shallow copy
	cout<<"Data of 2nd object: "<<endl;
	cout<<"Size: "<<obj2.getsize()<<endl;
	cout<<"Ptr: "<<obj2.getpointer()<<endl;	
}
