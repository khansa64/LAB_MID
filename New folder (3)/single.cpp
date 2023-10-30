#include<iostream>
using namespace std;

class animal{
	protected:
		int a;
		int b;
	public:  
	       void show()
	       {
	       	cout<<"value of a"<<a<<endl;
	       	cout<<"enter value of b"<<b<<end;
	       	
		   }
		   class child:public animal
		   {
		   	void input();
		   	{
		   		cout<<"enter the value of a"<<endl;
		   		cin>>a;
		   		cout<<"enter the value of b"<<endl;
		   		cin>>b;
			   }
		   };
	  
};
int main(){
	child q;
	q.
}
