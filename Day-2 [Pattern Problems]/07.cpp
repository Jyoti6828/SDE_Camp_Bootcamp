#include <iostream>
using namespace std;
int main()
{
/* Print this pattern
                *
              * *
            * * * 
          * * * *
        * * * * *
*/
	for(int row=5; row>0; row--)
	{
	for(int col=0; col<=5; col++)
	{
		if (col>=row)
		{
		cout<<"*";
		}
		else
		{
		cout<<" ";
		}
	}
	cout<<endl;
	}
	return 0;
}
