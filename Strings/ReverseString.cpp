#include <iostream>
using namespace std;

void reverse(char str[],int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        swap(str[s++],str[e--]);
    }
}
int getLength(char str[]){
    int count=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char str[20];
    cout<<"Enter your string\n";
    cin>>str;
    cout<<"You entered "<<str;
    cout<<endl;
    int len=getLength(str); 
    cout<<"The length of string is "<<len<<endl;
    reverse(str,len);
    cout<<"The reversed string is "<<str;
    return 0;
}