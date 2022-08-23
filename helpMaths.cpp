#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length()-1;i+=2){
        bool flag=false;
        for(int j=0;j<s.length()-i-1;j+=2){
            if(s[j]>s[j+2]){
                flag=true;
                swap(s[j],s[j+2]);
            }
        }
        if(flag==false){
            break;
        }
    }
    cout<<s;
    return 0;
}