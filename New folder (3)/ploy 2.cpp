#include<iostream>
using namespace std;

class person{
	public:
		void display()
		{
			cout<<"parent class:"<<endl;
		}
		
		
};
class employee : public person{
	public :
	void display()
	{
		cout<<"employee class"<<endl;
	}
};
class programemer : public employee{
	public :
	void display()
	{
		cout<<"programmer class"<<endl;
	}
	
};
int main()
{
	person objp;
	employee obje;
	programmer objf;
	
	person *p;
	p=$objp;
	p->display();
	
	employee *e;
	e=&obje;
	e->display();
	
	programmer *P;
	P=&objP;
	P->display();
}
