#include<iostream>
using namespace std;

template <class Khansa>

class A{
	private:
		Khansa a;
	public:
		void getValue(){
			cout<<"Please Enter the Value: "<<endl;
			cin>>a;
		}
		void display()
		{
			cout<<"You have entered: "<< a<<endl;
		}
	
};

int main(){
	A<int>obj;
	A<float>obj1;
	A<char>obj2;
	A<string>obj3;
	
	obj.getValue();
	obj.display();
	obj1.getValue();
	obj1.display();
	
	obj2.getValue();
	obj2.display();
	
	obj3.getValue();
	obj3.display();
	}
