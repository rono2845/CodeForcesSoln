#include<string.h>
#include<iostream>

using namespace std;
int main(){
    string s,s2,s3;
    cin>>s;
    cin>>s2;
    for(int i=0;i<s.length();i++){
        if(s[i]==s2[i]){
            s3+='0';
        }
        else{
            s3+='1';
        }
    }
    cout<<s3;
    return 0;
}
