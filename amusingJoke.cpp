#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    string s,s1,s2;
    cin>>s>>s1>>s2;
    string x;
    x=s+s1;

    sort(x.begin(),x.end());
    sort(s2.begin(),s2.end());
    
    if(x==s2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}