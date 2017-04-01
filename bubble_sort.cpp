//descending
#include<iostream>
using namespace std;
class bubble
{
	int ar[10];
	public:
	void getdata();
	void display();
	void sort();
};
void bubble :: getdata()
{
	cout<<"Enter numbers\n";	
	int i;
	for(i=0;i<10;i++)
	{
		cin>>ar[i];
	}

}
void bubble :: sort()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(ar[i]>ar[j])
			{
				int temp=0;
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
}
void bubble :: display()
{
		int i;
	for(i=0;i<10;i++)
	{
		cout<<ar[i];
	}

}
int main()
{
	cout<<"Descending order\n";	
	cout<<"Bubble sorting\n";
	bubble b;
	b.getdata();
	b.sort();
	b.display();

	return 0;
}
