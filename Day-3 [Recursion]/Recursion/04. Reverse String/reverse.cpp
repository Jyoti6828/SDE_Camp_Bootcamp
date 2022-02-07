#include <iostream>
using namespace std;
 
void reverse(string &str, int k)
{
    static int i = 0;
    if (k == str.length()) {
        return;
    }
 
    reverse(str, k + 1);
 
    if (i <= k) {
        swap(str[i++], str[k]);
    }
}
 
int main()
{
    string str;
    cout<<"Enter any string: ";
    cin>>str;
 
    reverse(str, 0);
    cout << "Reverse of the given string is:  " << str;
 
    return 0;
}
