#include<iostream>
#include<string>
using namespace std;

class distance_0
{
	private:
		int feet;
		int inches;
		
	public:
		distance_0()
		{
			feet=1;
			inches=1;
		}
		float distanceinmeters()
		{
		float meters;
		cout << "Enter distance in meters: " << endl;
		cin >> meters;	
		return meters;
		}
		void distanceinfeet(float a){
		feet = 3.28084*a; 
		inches = (a/0.0254)-feet*12;
		
		cout << "Distance in feets and inches is: " << feet << "'" << inches << endl;
		}
	~distance_0()
	{
		cout << "Destructor is called" << endl;
	}
};

int main()
{
	float x;
	distance_0 user_1;
	x=user_1.distanceinmeters();
	user_1.distanceinfeet(x);
}
