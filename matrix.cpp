#include"matrix.h"
#include<iostream>
using namespace mymatrix;
using namespace std;
matrix::matrix()
{
	rows=0;
	cols=0;
	p=NULL;
}

matrix :: matrix(int m,int n)
{
	rows=m;
	cols=n;
	p=new int *[rows];
	for(int i=0;i<rows;i++)
	p[i]=new int[cols];
}
matrix :: matrix ( matrix& ob)
{
	rows=ob.rows;
	cols=ob.rows;
	p=new int *[rows];
	for(int i=0;i<rows;i++)
	p[i]=new int[cols];
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			p[i][j]=ob.p[i][j];
		}
	}
}
void matrix :: getdata()
{
	cout<<"Enter numbers\n";	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cin>>p[i][j];
		}
	}
}
void matrix :: display() 
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<p[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
matrix matrix :: operator+(int val)
{
	matrix temp(rows,cols);	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			temp.p[i][j]=val+p[i][j];
		}
	}
	return temp;
}
matrix matrix :: operator+(matrix& m)
{
	matrix temp(rows,cols);	
	if(rows==m.rows && cols==m.cols)
	{
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				temp.p[i][j]=p[i][j]+m.p[i][j];
			}
		}
		return temp;
	}
	else
	{
		cout<<"Addtion not possible\n";
	}
}
matrix matrix :: operator-(matrix& m)
{
	matrix temp(rows,cols);	
	if(rows==m.rows && cols==m.cols)
	{
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				temp.p[i][j]=p[i][j]-m.p[i][j];
			}
		}
	
		return temp;
	}
	else
	{
		cout<<"subtraction not possible\n";
	}
}
matrix matrix :: operator-(int val)
{
	matrix temp(rows,cols);	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			temp.p[i][j]=p[i][j]-val;
		}
	}
	return temp;
}
bool matrix :: operator==(matrix& m)
{
	int temp;	
	for(int i=0;i<rows;i++)
	{
			
		for(int j=0;j<cols;j++)
		{
			if(p[i][j]==m.p[i][j])
			temp=1;
			else
			{
				temp=0;
				break;
			}
		}
	}
	return temp;		
}
matrix matrix :: operator*(matrix& m)
{
	matrix temp(rows,m.cols);	
	if(cols==m.rows)
	{	
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<m.cols;j++)
			{
				temp.p[i][j]=0;
				for(int k=0;k<m.cols;k++)
             			{
					temp.p[i][j]=temp.p[i][j]+p[i][k]*m.p[k][j];
                		}
			}
		}
	}
	return temp;
}
matrix matrix :: operator*(int val)
{
	matrix temp(rows,cols);	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			temp.p[i][j]=val*p[i][j];
		}
	}
	return temp;
}
matrix matrix :: operator++()
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			++p[i][j];
		}
	}
	return(*this);
}
matrix matrix :: operator++(int dummy)
{
	matrix temp(rows,cols);
	for(int i=0;i<temp.rows;i++)
	{
		for(int j=0;j<temp.cols;j++)
		{
			temp.p[i][j]=p[i][j];
		}
	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			p[i][j]++;
		}
	}
	return temp;
}
matrix matrix :: operator--()
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			--p[i][j];
		}
	}
	return(*this);
}
matrix matrix :: operator--(int dummy)
{
	matrix temp(rows,cols);
	for(int i=0;i<temp.rows;i++)
	{
		for(int j=0;j<temp.cols;j++)
		{
			temp.p[i][j]=p[i][j];
		}
	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			p[i][j]--;
		}
	}
	return temp;
}
/*matrix matrix :: operator=(matrix& m)
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			p[i][j]=m.p[i][j];
		}
	}
	retutn(*this);
}*/
