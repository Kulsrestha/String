#include <iostream>
using namespace std;

char GetMaxOccChar(string s){
    char arr[26]={0}; //this is for mapping all 26 characters 
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        number=ch-'a';
        arr[number]++;   //mapping all characters from the numbers 0-25
    }
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){    //to find the most occuring number
            ans=i;
            maxi=arr[i];
        }

    }
    return 'a'+ans;     //converting the most occuring number to the character
}

int main(){
    string s;
    cout<<"Enter your string\n";
    cin>>s;
    cout<<GetMaxOccChar(s);
    return 0;
}  