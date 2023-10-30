#include<iostream>
#include<list>
using namespace std;

class node{
	private :
		int data;
		node *next;
	
	public :
		void insert(int x);
		void print();
	
};
node *head;
void node :: insert(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->next=head;
	head=temp;
	
}
void node :: print()
   {
   	
    node *temp=head;
	cout<<"list is :";
	while(temp!= NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}	
	cout<<"\n\n";
}
int main()
{
	node list;
	head =NULL;
	int size , number;
	cout<<"size of list:";
	cin >>size;
	for(int i=1;i<=size;i++)
	{
		cout<<"enter number:";
		cin>>number;
	    list.insert(number);
	    list.print();
	}
	    return 0;
}


