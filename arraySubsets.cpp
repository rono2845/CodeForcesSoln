#include<string.h>
#include<iostream>

using namespace std;
int main(){
    int n,s,x;/*
    n=no. of elements & 
    s=no. of subsets
    x= element to find in subsets
    */
   int flag;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s>>x;
    for(int i=0;i<n;i+=s){
        flag=0;
        for(int j=i;j<i+s && j<n;j++){
            if(a[j]==x){
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    cout<<flag;
    return 0;
}