#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
/*
    input1: total sum suppose 15
    input2: then array size 6
    input3: {1 ,4 ,20 ,3 ,10 ,5} // we need to sort this so that we can give the maximum denomination possible GREEDY
*/
int coinChange(int arr[],int amount,int n){
    int count=0;
    for(int i=0;i<n;i++){
        while(arr[i] <= amount){
            amount=amount-arr[i];
            count++;
        }
    }
return count;
}

int main(){
    int originalAmount,n,res;
    cin>>originalAmount;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    res = coinChange(arr,originalAmount,n);
    cout<<res;
    return 0;
}