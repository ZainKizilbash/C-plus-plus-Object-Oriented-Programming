//QUESTION#1
//Create a class Rectangle with attributes length and width, each of which defaults to 1. Provide
//member functions that calculate the perimeter and the area of the rectangle. Also, provide set and
//get functions for the length and width attributes. The set functions should verify that length and
//width are each floating-point numbers larger than 0.0 and less than 20.0.


#include<iostream>
#include<iomanip>
using namespace std;
	class rectangle{
		private:
		float length;
		float width;
		public:
		void set_length(float a){
			length=a;
			if(length<0||length>20){
				cout<<"The value of length is invalid.Program terminated!";
				exit(1);
			}
		
		}
		void set_width(float b){
			width=b;
			if(width<0||width>20){
			cout<<"The value of width is invalid.Program terminated!";
			exit(1);
		}
		}
		float get_length(){
			return length;
		}
		float get_width(){
			return width;
		}
		float perimeter(){
			float p;
			p=length+length+width+width;
			return p;
		}
		float area(){
			float a;
			a=length*width;
			return a;
		}
	};
int main()
{
	cout<<fixed<<setprecision(2);
	float area, perimeter, len, wid, len_1, wid_1;
	rectangle zain;
	cout<<"Enter length of the rectangle(0-20): ";
	cin>>len;
	cout<<"Enter width of the rectangle(0-20): ";
	cin>>wid;
	zain.set_length(len);
	zain.set_width(wid);
	len_1=zain.get_length();
	wid_1=zain.get_width();
	perimeter=zain.perimeter();
	area=zain.area();
	cout<<"Area of a rectangle with length ("<<len_1<<") and width ("<<wid_1<<") is: "<<area<<endl;
	cout<<"Perimeter of a rectangle with length ("<<len_1<<") and width ("<<wid_1<<") is: "<<perimeter;
}
