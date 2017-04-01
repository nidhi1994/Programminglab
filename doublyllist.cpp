#include<iostream>
using namespace std;
class node
{
	public:	
	int data;
	node *next,*back;
};
class linkedlist
{
	node *head,*last;
	public:
	linkedlist()
	{
		head=NULL;
		last=NULL;
	}
	void create();
	void display();
	void insert(int ,int );
	void del(int);
};
void linkedlist :: create()
{
	node *curr,*prev;
	head=curr=NULL;
	int value,n;
	cout<<"How many nodes you want\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		value=0;
		cout<<"Enter number\n";
		cin>>value;
		curr=new node;
		curr->data=value;
		curr->next=NULL;
		curr->back=NULL;
		if(head==NULL)
		head=curr;
		else
		{
			prev->next=curr;
			curr->back=prev;
		}
		prev=curr;
	}
	last=prev;
}
void linkedlist :: display()
{
	node *ptr=new node;
	ptr=head;
	cout<<"Display list first to last\n";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"\n";
		ptr=ptr->next;
	}
	ptr=last;
	cout<<"Display list last to first\n";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"\n";
		ptr=ptr->back;
	}
}
void linkedlist :: insert(int data1,int data2)
{
	/*node *temp,*temp1;
	temp = new node;
	temp->data= data1;
	temp->next= NULL;
	temp->back= NULL;
	node*curr=new node;
	curr=head;
	for(int i=0;i<=pos;i++)
	{
		curr=curr->next;
		if(i==pos)
		{
			temp1=curr->next;
			curr->next=temp;
			temp->back=curr;
			temp->next=temp1->next;
		}
	}*/
	node *pback,*pfront,*p;
	pback=head;
	p=new node;
	p->data=data2;
	while(pback->next!=NULL && pback->data!=data1)
	{
		pback=pback->next;
	}
	if(pback->back==NULL && pback->data==data1)
	{
		head->back=p;
		p->next=head;
		p->back=NULL;
		head=p;
	}
	else if(pback->next==NULL && pback->data==data1)
	{
		pback->next=p;
		pback->next=NULL;
		p->back=pback;
		last=p;
	}
	else
	{
		pfront=pback->next;
		p->next=pback->next;
		p->back=pback;
		pback->next=p;
		pfront->back=p;
	}
	cout<<"New node is inserted\n";
}
void linkedlist :: del(int data3)
{
	node*pback,*pfront,*p;
	p=head;
	while(p->next!=NULL && p->data!=data3)
	{
		p=p->next;
	}
	if(p->next==NULL && p->data!=data3)
	{
		cout<<"data not found\n";
	}
	else if(p->next==NULL && p->data==data3)
	{
		pback=p->back;
		//temp=p->data;
		pback->next=NULL;
		last=pback;
	}
	else
	{
		if(head==p)
		{
			head=p->next;
			pfront=head;
			pfront->back=NULL;
		}
		else
		{
			
			pback=p->back;
			pback->next=p->next;
			pfront=pback->next;
			pfront->back=pback;
		}
	}
	delete p;
}
	
	
int main()
{
	linkedlist l;
	char ch;
	int n,choice,num1,num,num2;
	do
	{
		cout<<"Menu\n";
		cout<<"1.Create\n";
		cout<<"2.Display\n";
		cout<<"3.Insert\n";
		cout<<"4.Delete\n";
		cout<<"Enter choice\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			
			l.create();
			break;
			case 2:
			l.display();
			break;
			case 3:
			cout<<"Enter the number after which to insert \n";
			cin>>num1;
			cout<<"Enter the number to be inserted\n";
			cin>>num;
			l.insert(num1,num);
			break;
			case 4:
			cout<<"Enter the number to be deleted\n";
			cin>>num2;
			l.del(num2);
			break;
			default:
			cout<<"Wrong Choice!!!\n";
		}
		cout<<"If you want to continue press y\n";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	return 0;
}
