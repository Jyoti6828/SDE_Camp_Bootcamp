#include <iostream>
using namespace std;
int main() 
{
    int age;
    cout<<"Enter your age" <<endl;
    cin>>age;
    
    if(age>=18)
    {
        cout<<"Age is greater than 18";
    }
    else
    {
        cout<<"Age is less than 18";
    }
    return 0;
}