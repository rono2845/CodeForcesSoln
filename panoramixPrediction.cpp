#include<iostream>
#include<string.h>

using namespace std;
int main(){
    int x,y;
    int flag=0;
    cin>>x>>y;
    if(y==2){
        cout<<"NO";
    }
    else{
        for(int i=2;i<y/2;i++){
            if(y%i==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
    return 0;
}