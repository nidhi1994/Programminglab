#include<iostream>
using namespace std;
class Node
{
	public:	
	int data;
	Node *next;

};
class LinkedList
{
	Node* head;
	Node* N;
	Node* temp;
	public:
	LinkedList()
	{
		head=NULL;//empty linked list
	}
	int create(int);
	void display();
	void insert(int,int);
	void delete_node(int);
};
int LinkedList :: create(int data1)
{
	
			
	if(head==NULL)
	{
		N=new Node;
		N->data=data1;
		temp=N;
		head=N;
		
	}
	else
	{
		N=new Node;
		N->data=data1;
		temp->next=N;
		temp=temp->next;
	}
}
void LinkedList :: display()
{
	Node* temp1=head;
	Node*temp2=head;
	if(temp1==NULL)
	{
		cout<<"List is empty\n";
	}
	if(temp1->next==temp2)
	{
		cout<<temp1->data;
	}
	else
	{
		do
		{
			cout<<temp1->data<<"\n";
			temp1=temp1->next;
		}while(temp1!=temp2);
	}
			

}
void LinkedList :: insert(int pos,int data2)
{
	Node*insertnode=new Node;//create a temporary node and allocate memory
	if(pos==1)
	{
		insertnode->data=data2;
		insertnode->next=head;
		head=insertnode;
	}
	else
	{
		insertnode=head;
		for(int i=1;i<pos;i++)
		{
			insertnode=insertnode->next;//go to next node
			if(insertnode==NULL)
			{
				cout<<pos<<"node does not exist\n";
				break;
			}
		}
		Node* temp=new Node;
		temp->data=data2;
		temp->next=insertnode->next;
		insertnode->next=temp;

	}
}
void LinkedList :: delete_node(int no)
{
	if(no==1)
	{	
		Node*temp=new Node;
		temp=head;
		head=temp->next;
		delete temp;
	}
	else
	{
		Node* temp1=new Node;	
		temp1=head;//transfer the address of head to temp1
		Node* temp2=new Node;
		temp2=temp1;//transfer the address of temp1 to temp2
		for(int i=1;i<no;i++)
		{
			temp2=temp1;
			temp1=temp1->next;
		}
		temp2->next=temp2->next;
		delete temp1;
	}
}

int main()
{
	char ch;
	int choice;
	int i,n,val,ipos;
	LinkedList l;
	do
	{	
		cout<<"Menu\n";
		cout<<"1.Create\n";
		cout<<"2.Display\n";
		cout<<"3.Insert\n";
		cout<<"4.Delete\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<"To create a linked list\n";
			cout<<"Enter the number of elements\n";
			cin>>n;
			for(i=0;i<n;i++)
			{
				int element;		
				cout<<"Enter the element\n";
				cin>>element;
				l.create(element);
			}
			break;
			case 2:
			cout<<"Display:";	
			l.display();
			break;
			case 3:
			cout<<"Insert\n";
			cout<<"Enter the position of the newnode\n";
			cin>>ipos;
			cout<<"Enter the value \n";
			cin>>val;
			l.insert(ipos,val);
			l.display();
			break;
			case 4:
			int del;
			cout<<"Delete\n";
			cout<<"Enter the node to deleted\n";
			cin>>del;
			l.delete_node(del);
			l.display();

			break;
			default:
			cout<<"Wrong choice!!!";
		}
		cout<<"If you want to press another choice press 'y'\n";
		cin>>ch;
		
	}while(ch=='y'||ch=='Y');
	
	return 0;
}
