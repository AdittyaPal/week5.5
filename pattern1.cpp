//include the library
#include <iostream>
using namespace std;
//declare the main function
int main()
{
	int n=0;
	cout<<"Enter the size of the pattern.";
	cin>>n;
	for(int i=0;i<n;i++)//loop to print the lines
	{
		for(int j=n-1-i;j>0;j--)
		cout<<' ';//prints the spaces
		for(int j=0;j<(2*i+1);j++)
		cout<<'*';//prints the stars
		cout<<endl;//prints a new line
	}
	return 0;
}

