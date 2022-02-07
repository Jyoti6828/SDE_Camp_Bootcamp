#include <iostream>
using namespace std;

int main()
{
	static int i = 1;
	
	if (i <= 100)
	{
		cout << i++ << " "<<endl;
		main();
	}
	return 0;
}
