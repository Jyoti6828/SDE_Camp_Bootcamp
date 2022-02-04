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
    for (int row = 0; row < 5; row++) 
	{
		for (int col = 0; col <= row; col++) 
		{
			cout << "* ";
		}
		cout << endl;
	}
}

