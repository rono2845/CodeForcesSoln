#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int n,res=0,lCount=0, rCount=0;
    cin>>n;
    int *l=new int[n];
    int *r=new int[n];
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
        if(l[i]==0){
            lCount++;
        }
        if(r[i]==0){
            rCount++;
        }
    }
    int l2Count=abs(lCount-n);
    int r2Count=abs(rCount-n);
    res += min(l2Count,lCount);
    res += min(r2Count,rCount);
    cout<< res;
    return 0;
}