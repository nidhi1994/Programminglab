#include<iostream>
using namespace std;
class selection
{
	int ar[10];
	public:
	void getdata();
	void display();
	void sort();
};
void selection :: getdata()
{
		
	int i;
	for(i=0;i<10;i++)
	{
		cout<<"Enter number\n";
		cin>>ar[i];
	}

}
void selection :: sort()
{
	int sel;	
	for(int i=0;i<9;i++)
	{
		int min=ar[i];
		sel=i;
		for(int j=i+1;j<10;j++)
		{
			if(ar[j]<min)
			{	
				min=ar[j];				
				sel=j;
			}
		}
		
			int temp=ar[i];
			ar[i]=ar[sel];
			ar[sel]=temp;
		
	}
}
void selection :: display()
{
	int i;
	for(i=0;i<10;i++)
	{
		cout<<ar[i]<<"\n";
	}
}	
int main()
{
	cout<<"Ascending order\n";	
	cout<<"selection sorting\n";
	selection s;
	s.getdata();
	s.sort();
	s.display();
	return 0;
}
