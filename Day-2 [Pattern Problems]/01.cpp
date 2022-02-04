#include <iostream>
using namespace std;

int main()
{
    
/* Print this pattern
        * * * * *
        * * * * *
        * * * * *
        * * * * *
        * * * * *
*/
int row, col;
for(row=1; row<=5;row++)
{
    cout<<endl;
    for(col=1; col<=5; col++)
    {
        cout<<" * ";
    }
}
    return 0;
}
