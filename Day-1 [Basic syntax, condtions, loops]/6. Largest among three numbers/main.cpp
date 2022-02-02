#include <iostream>
using namespace std;
int main()
{
  int n1, n2, n3;
  cout<<"Enter Three Numbers: " <<endl;
  cin>>n1 >> n2 >> n3;
  cout<<"You Entered - " <<endl <<"n1 : " <<n1 <<endl <<"n2 : " <<n2 <<endl <<"n3 : " <<n3 <<endl;

  if(n1 > n2 && n1 > n3)
  {
    cout<<"Greater Number is: " <<n1 <<endl;
  }
  else if(n2 > n1 && n2 > n3)
  {
    cout<<"Greater Number is: " <<n2 <<endl;
  }
  else
  {
    cout<<"Greater Number is: " <<n3 <<endl;
  }
}