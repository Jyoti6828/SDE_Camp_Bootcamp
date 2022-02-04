#include <iostream>
using namespace std;
int main()
{
/* Print this pattern
        1 2 3 4 5 
         2 3 4 5
          3 4 5 
           4 5
            5
*/
	for(int row=1; row<=5; row++)
	{
	for(int col=1; col<=5; col++)
	{
		if (col>=row)
		{
		cout<<" "<<col;
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
