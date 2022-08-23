#include<iostream>

using namespace std;
int main(){
    int n,p,total=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p;
        total+=p;
    }
    cout<<static_cast<double>(total) / static_cast<double>(n);
    return 0;
}