//include the library
#include <iostream>
using namespace std;
int main()
//a main function in declared
{
	int n=0;
	cout<<"Enter the size of the pattern.";
	cin>>n;//size of the pattern in inputted
	bool halfDone=false;
	for(int i=0;i>=0;)
	{
		for(int j=1;j<=(2*n);j++)
		{
			if(j<=(n-i)||j>(n+i))
			cout<<'*';//prints the stars
			else
			cout<<' ';//prints the spaces
		}
		if(i==(n-1)&&halfDone==false)
		{//condition for the mirror point
			halfDone=true;
			i++;
		}
		if(halfDone==true)//the image half
		i--;
		else//the object half
		i++;
		cout<<endl;//print a new line
	}
	return 0;
}

