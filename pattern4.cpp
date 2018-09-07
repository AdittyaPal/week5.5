//include the library
#include <iostream>
using namespace std;
int main()
//declare a main function
{
	int n=0;
	cout<<"Enter the size of the pattern.";
	cin>>n;//the size of the pattern inputted
	bool halfDone=false;
	for(int i=0;i>=0;)//loop for printing a line
	{
		for(int j=0;j<(4-i);j++)
		cout<<' ';//prints the spaces
		for(int j=0;j<((2*i)+1);j++)
		cout<<'*';//prints the stars
		if(i==(n-1))//condition for mirror point
		halfDone=true;
		if(halfDone==true)//image half
		i--;
		else//object half
		i++;
		cout<<endl;//print a new line
	}
	return 0;
}
	
