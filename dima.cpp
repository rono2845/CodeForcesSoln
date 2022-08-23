#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int n,total=0,count=0;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }

    for(int i=1;i<=5;i++){
        if((total+i)%(n+1)!=1){
            count++;
        }
    }
    cout<<count;
    return 0;
}