#include <iostream>
using namespace std;
int main()
{
/* Print this pattern
        1 1 1 1 1
         2 2 2 2 
          3 3 3 
           4 4
            5
*/
	for(int row=1; row<=5; row++)
	{
	for(int col=1; col<=5; col++)
	{
		if (col>=row)
		{
		cout<<" "<<row;
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
