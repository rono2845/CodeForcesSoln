#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
bool isPalindrome(int num){
    int n, k, rev = 0;
    n = num;
    while (num != 0) {
        k = num % 10;
        rev = (rev * 10) + k;
        num = num / 10;
    }
    if (n == rev) {
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    while(true){
        n=n+1;
        if(isPalindrome(n)){
            cout<<n;
            break;
        }
    }
    return 0;
}