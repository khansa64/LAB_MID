#include<iostream>
using namespace std;

class player{
	private :
		int a;
		string n;
		string t;
		
	public :
	    player()
		{
			a=10;
			n="tom";
			t="real madrid";
				}		
		void inputData()
		{
			cout<<"enter the age"<<endl;
			cin>>a;
			
			cout<<"enter the name"<<endl;
			getline(cin,n);
			
			cout<<"enter the team name:"<<endl;
			getline(cin,t);
		
				}
		void changeData()
		{
			cout<<"enter the name"<<endl;
			getline(cin,n);
			
			cout<<"enter the age"<<endl;
			cin>>a;
			
			cout<<"enter the team name"<<endl;
			getline(cin,t);
			
		}				
};
int main()
{
	player 1;
	int t;
	
}
