#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    int *nArr=new int[n];
    for(int i=0;i<n;i++){
        cin>>nArr[i];
    }

    int m;
    cin>>m;
    int *mArr=new int[m];
    for(int i=0;i<m;i++){
        cin>>mArr[i];
    }
/* 
    3 2 1
    1 2 3

*/
    int countA=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mArr[i]==nArr[j]){
                countA += j+1;
            }
        }
    }

    reverse(nArr,nArr+n);
    int countB=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mArr[i]==nArr[j]){
                countB += j+1;
            }
        }
    }
    cout<<countA<<" "<<countB;

    return 0;
}