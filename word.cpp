#include<iostream>
#include<string.h>
#include <algorithm>

using namespace std;
int main(){
    string s;
    cin>>s;
    int upCount=0;
    int lowCount=0;
    int len=s.length();
    for(int i=0;i<len;i++){
        if(isupper(s[i])){
            upCount++;
        }
        else{
            lowCount++;
        }
    }
    if(upCount>lowCount){
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s;
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
    }
    return 0;
}