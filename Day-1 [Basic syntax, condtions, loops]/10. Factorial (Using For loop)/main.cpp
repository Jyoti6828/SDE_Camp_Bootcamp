#include<iostream>
using namespace std;
int main()
{
  int no,fact=1;
  cout<<"Enter any number: " <<endl;
  cin>>no;

  for(int i = 1; i<=no; i++)
  {
    fact=fact*i;
  }
  cout<<fact;
  
}
