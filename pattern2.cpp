//include the library
#include <iostream>
using namespace std;
int main()
//declare a main function
{
	int n=0;
	cout<<"Enter the size of the pattern.";
	cin>>n;
	bool halfDone=false;
	for(int i=0;i>=0;)//loop to print the lines
	{
		for(int j=0;j<(2*i);j++)
		cout<<' ';//prints the spaces
		for(int j=0;j<(n-i);j++)
		cout<<'*';//prints the stars
		if(i==(n-1))//condition for mirror point
		halfDone=true;
		if(halfDone==true)//mirror half
		i--;
		else//object half
		i++;
		cout<<endl;//prints a new line
	}
	return 0;
}
