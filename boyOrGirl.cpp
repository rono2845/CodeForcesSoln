#include<string.h>
#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int count=0;
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                count++;
            }
        }
    }

    if((s.length()-count)%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}