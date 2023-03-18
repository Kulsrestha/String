#include <iostream>
using namespace std;

int main()
{
    char str[20];
    int count=0;
    cout<<"Enter your string\n";
    cin>>str;
    cout<<"You entered "<<str;
    cout<<endl;
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    cout<<"The length of the stirng is "<<count;
    
    return 0;
}