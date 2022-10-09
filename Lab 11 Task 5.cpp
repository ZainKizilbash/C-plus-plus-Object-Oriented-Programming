#include<iostream>
#include<fstream>
using namespace std;
class Participant{
	private:
		string ID;
		string fname;
		string lname;
		float score;
	public:
		void Input(){
			fflush(stdin);
			cout<<"ID: ";
			getline(cin,ID);
			cout<<"First name: ";
			getline(cin,fname);
			cout<<"Last name: ";
			getline(cin,lname);
			cout<<"Score: ";
			cin>>score;
			ofstream output("participant.dat",ios::app);
			output<<ID<<" "<<fname<<" "<<lname<<" "<<score<<"\n";
		}
		void Output(){
			string id;
			string fn;
			string ln;
			float s;
			fflush(stdin);
			cout<<"Enter ID to search data: ";
			getline(cin,ID);
			ifstream input("participant.dat",ios::in);
			while(!input.eof()){
			input>>id>>fn>>ln>>s;
			if(id==ID){
				cout<<"ID: "<<id<<endl;
				cout<<"Name: "<<fn<<" "<<ln<<endl;
				cout<<"Score: "<<s<<endl;
				break;
			
			}
		}
			
		}
		void Max(){
			string id1;
			string fn1;
			string ln1;
			float s1;
			float max=0;
			cout<<"\t\t\t\t\tSearching for Max Marks"<<endl;
			ifstream input("participant.dat");
			while(!input.eof()){
			input>>id1>>fn1>>ln1>>s1;
			if(s1>max){
				max=s1;
				ID=id1;
				fname=fn1+" "+ln1;
				score=s1;
			}
		}
			cout<<"ID: "<<ID<<endl;
			cout<<"Name: "<<fname<<endl;
			cout<<"Score: "<<score<<endl;
		
	}
};
int main(){
	int a, i;
	cout<<"How many participant's data you want to add? ";
	cin>>a;
	Participant obj[a];
	for(i=0;i<a;i++){
		cout<<"\n\t\t\t\t\tParticipant "<<i+1<<endl;
		obj[i].Input();
	};
	obj[a-1].Output();
	obj[a-1].Max();
}
