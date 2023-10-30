//213064 Khansa

#include<iostream>
using namespace std;

int const size=3;

void signup(int *);
int search(int *,int);
void changePass(int *, int);

int main()
{
	int password[size];
	char choice ;
	int index;
	
	int *ptr_pass=password ;
	
	signup(ptr_pass);
	
	cout << "Do you want to change your password (y/n) : ";
	cin.ignore();
	cin.get(choice) ;
	
	if(choice=='y')
	{
		int pass;
		cout << "Enter your password: ";
		cin >> pass;
		index=search(ptr_pass,pass);
		if(index==-1)
			cout << "\tWrong Password.\n";
		else
			changePass(ptr_pass, index);
	}
	else
		cout << "Bye-bye!\n";
		 
	return 0;
}

void signup(int *password)
{
	for(int i=0 ; i<size ; i++)
	{
	cout << "Enter password of user number "<<i+1<<" : ";
	cin >> *(password+i);
	}
}
int search(int *password,int pass)
{
	int position=-1, counter;
	bool found = false ;
	
	while(!found && counter<size)
	{
		if(pass == *(password+counter))
		{
			position=counter;
			found=true;
		}
		counter++;
	}
	
	return position;
}
void changePass(int *password, int index)
{
	cout << "Enter your new password: ";
	cin >> *(password+index);
}
