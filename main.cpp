#include<iostream>
#include"matrix.h"
using namespace std;
using namespace mymatrix;
int main()
{
	int row1,col1,row2,col2,value1,value2,ch,choice;
	cout<<"Enter no. of rows of matrix1\n";
	cin>>row1;
	cout<<"Enter no. of columns of matrix1\n";
	cin>>col1;
	cout<<"Enter no. of rows of matrix2\n";
	cin>>row2;
	cout<<"Enter no. of columns of matrix2\n";
	cin>>col2;
	matrix m1(row1,col1),m2(row2,col2),m3(m1);
	m1.getdata();
	m2.getdata();
	cout<<"The two matrices are\n";
	m1.display();
	cout<<"\n";
	m2.display();
	do
	{
		cout<<"1.Adding a value to matrix\n";
		cout<<"2.Addition\n";
		cout<<"3.Subtraction\n";
		cout<<"4.Subtracing a value from a matrix\n";
		cout<<"5.Equality check\n";
		cout<<"6.Multiplication \n";
		cout<<"7.Multiplying a value to a matrix\n";
		cout<<"8.Postfix increment\n";
		cout<<"9.Postfix decrement\n";
		cout<<"10.Prefix increment\n";
		cout<<"11.Prefix decrement\n";
		cout<<"Enter a choice\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<"Adding a value to matrix\n";
			cout<<"Enter the value to be added to matrix2\n";
			cin>>value1;
			m3=m2+value1;
			m3.display();
			break;
			case 2:
			if(row1==row2 && col1==col2)
			{
				cout<<"Adding two matrices\n";
				m3=m1+m2;
				m3.display();
			}
			else
			{
				cout<<"Sorry Addition not possible!!\n";
			}	
			break;
			case 3:
			if(row1==row2 && col1==col2)
			{
				cout<<"Subtracting two matrices\n";
				m3=m1-m2;
				m3.display();
			}
			else
			{	
				cout<<"Sorry Subtraction not possible!!\n";
			}
			break;
			case 4:
			cout<<"Subtracting a value from a matrix\n";
			cout<<"Enter the value to be subtracted to matrix1\n";
			cin>>value2;
			m3=m1-value2;
			m3.display();
			break;
			case 5:
			cout<<"Check wether matrix is equal or unequal\n";
			if(m2==m1)
			cout<<"Equal\n";
			else
			cout<<"Unequal\n";
			break;
			case 6:
			if(col1==row2)
			{
				cout<<"Multiplication of two matrices\n";
				m3=m1*m2;
				m3.display();
			}
			else
			{
				cout<<"Sorry Multiplication not possible!!\n";
			}
			break;
			case 7:
			cout<<"Multiplying a value to matrix\n";
			cout<<"Enter the value to be multiplied to matrix2\n";
			cin>>value1;
			m3=m2*value1;
			m3.display();
			
			break;
			case 8:
				cout<<"Postfix increment\n";
				m1++;
				m1.display();
				break;
			case 9:
				cout<<"Postfix decrement\n";
				m1--;
				m1.display();
				break;
			case 10:
	
				cout<<"Prefix increment\n";
				++m1;
				m1.display();
				break;
			case 11:
				cout<<"Prefix decrement\n";
				--m1;
				m1.display();
				break;
			default:
				cout<<"Wrong chocie\n";
		}
		cout<<"To continue press 1\n";
		cin>>ch;
	}while(ch==1);
	
//	m4=m1;
//	m4.display();
	return 0;
}
