#include<iostream>
using namespace std;
class node 
{
	public:
	int data;
	node*next;
};
class stack
{
	
	node *head;
	int top;
	int size;
	public:
	stack(int n)
	{
		top=-1;
		size=n;
	}
	int isEmpty();
	int isFull();
	int push(int);
	int pop();
	int seek();
	void viewstack();
};
int stack :: isEmpty()
{
	if(top<0)
	return(1);
	else
	return(0);
}
int stack :: isFull()
{
	if(top>=size)
	return(1);
	else
	return(0);
}
int stack :: push(int N)
{
	 int value;
   	node *ptr;
   	cout<<"\nPUSH Operation\n";
   	//cout<<"Enter a number to insert: ";
   	//cin>>value;
   	ptr=new node;
   	ptr->data=N;
   	ptr->next=NULL;
  	 if(head!=NULL)
      	ptr->next=head;
   	head=ptr;
   	cout<<"\nNew item is inserted to the stack!!!";
	/*if(top==-1)
	{
		
		head=new node;
		head->data=N;
		head->next=NULL;
		top++;
	}
	else
	{
		node *temp1,*temp2;
		temp1=head;
		if(top>=size)
		{	
			cout<<"Stack overflow\n";
			return(0);
		}
		top++;
		while(temp1->next->next->next!=NULL)
		temp1=temp1->next;
		temp2=new node;
		temp1->next=temp2;
		temp2->next=NULL;
		temp2->data=N;
	}*/
}
int stack :: pop()
{
	node *temp;
	temp=head;
	if(isEmpty()==0)
	{
		top--;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=NULL;
	}
	int x=temp->data;
	return(x);
}
void stack :: viewstack()
{
	node*temp;
	temp=head;
	if(isEmpty()==0)
	{
		while(temp!=NULL)
		{
			cout<<temp->data<<"\n";
			temp=temp->next;
		}
	}
}
int stack :: seek()
{
	node *temp;
	temp=head;
	if(isEmpty()==0)
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=NULL;
	}
	int x=temp->data;
	return(x);
}
int main()
{
	int ch,n,no,num1,num2,x;
	char choice;
	cout<<"Enter the number of elements\n";
	cin>>n;
	stack s(n);
	cout<<"Menu:";
	cout<<"1.Check whether stack is empty\n";
	cout<<"2.Check whether stack is full\n";
	cout<<"3.Push elements\n";
	cout<<"4.Pop elements\n";
	cout<<"5.Seek\n";
	cout<<"6.View Stack\n";
	
	do
	{
		cout<<"Enter choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				if(s.isEmpty()==1)
				cout<<"Stack is empty\n";
				else
				cout<<"Stack id not empty\n";
				break;
			case 2:
				if(s.isFull()==1)
				cout<<"Stack is full\n";
				else
				cout<<"Stack is not full\n";
				break;
			case 3:
				cout<<"Enter a number\n";
				cin>>no;
				s.push(no);
				break;
			case 4:
				num1=s.pop();
				if(num1!=0)
				cout<<"The last digit is"<<num1<<"\n";
				break;
			case 5:
				num2=s.seek();
				if(num2!=0)
				cout<<"The last digit is"<<num2<<"\n";
				break;
			case 6:
				/*while(s.isEmpty()!=1)
				{
					x=s.pop();
					cout<<x<<"\n";
					s1.push(x);
				}
				while(s1.isEmpty()!=1)
				{
					x=s1.pop();
					s.push(x);
				}*/
				s.viewstack();
				break;
			default:
				cout<<"Invalid CHoice\n";

			
		}
		cout<<"If you want to continue press y\n";
		cin>>choice;
	}while(choice=='y'||choice=='Y');
	return 0;
}


