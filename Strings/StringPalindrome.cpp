#include <iostream>
using namespace std;

char toLowerCase(char str){  
    if(str>='a' && str<='z'){
        return str;
    }
    else{
        char temp=(str-'A'+'a');  //This converts the uppercase characters to lowercase
        return temp;
    }
}
bool checkPalindrome(char str[],int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        if (toLowerCase(str[s])==toLowerCase(str[e]))
        {
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
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
    bool check=checkPalindrome(str,len);
    if (check)
    {
        cout<<"The string "<<str<<" is a valid Palindrome\n";
    }
    else{
        cout<<"The string "<<str<<" is not a valid Palindrome\n";
    }
    
    return 0;
}