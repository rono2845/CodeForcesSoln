#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[1]=='+'){
            sum += 1;
        }
        else{
            sum -= 1;
        }
    }
    cout<<sum;
    return 0;
}