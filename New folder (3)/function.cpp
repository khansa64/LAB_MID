#include<iostream>
using namespace std;

struct person{
	string address;
	int age;
	string name;
	
};

struct student{
	short int semester;
    string instute;
    float cgpa;
	person p;
};



student userinput(student);
void displaydata(student);

int main()
{
	
	student std;    
	std=userinput(std);
	displaydata(std);
	return 0;
}

student userinput(student std){
	
	cout <<"EnterName: ";
	getline(cin,std.p.name);
	cout <<"Enter Age: ";
	cin>>std.p.age;
	cout <<"Enter Address: ";
	cin>>std.p.address;
	cout <<"Enter Semester: ";	
	cin>>std.semester;
		cout <<"Enter Institute: ";
	cin>>std.instute;
		cout <<"Enter cgpa: ";
	cin>>std.cgpa;
	
	return std;
}
void displaydata(student std)
{
	cout <<"Name: ";
	cout <<std.p.name;
	cout <<"Enter Age: ";
    cout <<std.p.age;
	cout <<"Enter Address: ";
	cout <<std.p.address;
	cout <<"Enter Semester: ";	
	cout <<std.semester;
	cout <<"Enter Institute: ";
	cout <<std.instute;
	cout <<"Enter cgpa: ";
	cout <<std.cgpa;
}
