#include<iostream>
#include<list>
using namespace std;
class Node{
	private:
	int data;
	Node* next;
	
	public:
		void insert(int x);
		void print();
		void reverse();
		
};
 Node* head;
//insert the list data
void Node :: insert(int x)
{
	Node* temp=new Node();
	temp ->data=x;
	temp ->next=head;
	head =temp;
}
//print the list
void Node :: print ()
    {
	Node *temp =head;
	cout<<"list :";
	while (temp != NULL)
	{
		cout<<temp->next;
	}
	cout<<"\n\n";
}
void Node :: reverse()
    {
    	
	Node *temp=head;
	Node *pre=NULL;
	Node *next=NULL;
	while(temp!=NULL)
	{
		next =temp->next;
		//reverse node's pointer
		temp->next =pre;
		pre=temp;
		temp=next;
		
	}
	head=pre;
	cout<<"list in reverse :";
	
}
int main()
{
	Node list;
	int size ;
	int x;
	head=NULL;
	cout<<"Size of the list :";
	cin>>size;
	for(int i=1;i<size+1;i++)
	{
		cout<<"Enter numbers:";
		cin>>x;
		list.insert(x);
		
	}
	
}

