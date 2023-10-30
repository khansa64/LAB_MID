#include<iostream>
using namespace std;
template<class T>
class tem
{
	private :
		T a;
		T b;
		
	public :
		void temp1()
		{
			cout<<"enter the first value:"<<endl;
			cin>>a;
			cout<<"enter the second value:"<<endl;
			cin>>b;
		}
		void display()
		{
			cout<<"first "<<a<<endl;
			cout<<"second "<<b<<endl;
		}
};

	//template<class T>
	//T Max(T n,T m)
	//{
		//if(n>m)
		//return n;
		//else
		//return m;
	//}
	int main()
	{
	tem<int> T;
	T.temp1();
	T.display();
	
	tem<float> t;
	t.temp1();
	t.display();
	}

