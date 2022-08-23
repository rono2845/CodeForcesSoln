#include<iostream>

using namespace std;
int main(){
    int n,maxPsg=0,capacity=0;
    cin>>n;
    int a[1000],b[1000];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        capacity -= a[i];
        capacity += b[i];
        if(capacity>maxPsg){
            maxPsg=capacity;    
        }
    }
    cout<<maxPsg;
    return 0;
}