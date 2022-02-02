# include <iostream>
using namespace std;

int main() 
{
    int num;
    cout<<"Enter number: " <<endl;
    cin>>num;
    
    if(num%2==0)
    {
        cout<<"You Entered Even Number: " <<num;
    }
    else
    {
        cout<<"You Entered Odd Number: " <<num;
    }
  return 0;
}
