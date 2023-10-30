#include<iostream>
using namespace std;
 
class employee{
	public :
		virtual void show()
		{
			cout<<"employee class"<<endl;
		}
};
class teacher{
	public :
		void display()
		{
			cout<<"teacher class"<<endl;
		}
};
employee *emp[4];
int main()
{
int i= option;
option=1;
cout<<"enter the choice \n1 employee class \n2 teachure class "<<endl;
for(int i=0;i<4;i++)
{
	cout<<"which clss object u want to create"<<endl;
	cin>>option;
	if (option==1)
	{
		emp[i]=new employee;
	}
	else if (option == 2)
	{
		emp[i]=new teacher;
	}
	for(i=0; i<4 ;i++)
	{
		emp[i]->display();
	}
}
}
