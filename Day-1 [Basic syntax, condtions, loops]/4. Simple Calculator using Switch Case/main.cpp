# include <iostream>
using namespace std;

int main() 
{

  char op;
  float n1, n2;

  cout << "Enter Operation : +, -, *, /: "<<endl;
  cin >> op;

  cout << "Enter two numbers : " <<endl;
  cin >> n1 >> n2;

  switch(op) 
{

    case '+':
      cout << n1 << " + " << n2 << " = " << n1 + n2;
      break;

    case '-':
      cout << n1 << " - " << n2 << " = " << n1 - n2;
      break;

    case '*':
      cout << n1 << " * " << n2 << " = " << n1 * n2;
      break;

    case '/':
      cout << n1 << " / " << n2 << " = " << n1 / n2;
      break;

    default:
      cout << "You Entered Wrong Choice!!";
      break;
  }

  return 0;
}
