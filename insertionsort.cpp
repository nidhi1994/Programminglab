#include<iostream>
using namespace std;
class insertion
{
	int ar[10];
	public:
	void getdata();
	void display();
	void sort();
};
void insertion:: getdata()
{
		
	int i;
	for(i=0;i<10;i++)
	{
		cout<<"Enter number\n";
		cin>>ar[i];
	}

}
void insertion :: sort()
{
 	int i,j,temp;
	for(i=1;i<10;i++)
	{
		temp=ar[i];		

			j=i-1;			
			while(ar[j]>temp && j>=0)
			{
			 	ar[j+1]=ar[j];
				j--;
			}
			ar[j+1]=temp;
		
	}
				
					
}
void insertion :: display()
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
	insertion i;
	i.getdata();
	i.sort();
	i.display();
	return 0;
}
