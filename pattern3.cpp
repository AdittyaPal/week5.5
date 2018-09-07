//include the library
#include <iostream>
using namespace std;
int main()
//declare a main function 
{
	int n=0;
	cout<<"Enter the size of the pattern.";
	cin>>n;//size of the pattern inputted
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		if(i==0||j==0||i==j||i==(n-1-j)||i==(n-1)||j==(n-1))//condition of the boundary elements and the diagonal elements
		cout<<'*';//prints the stars if required
		else
		cout<<' ';//else prints the spaces
		cout<<endl;//prints a new line
	}
	return 0;
}

