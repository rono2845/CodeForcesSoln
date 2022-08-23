#include<string.h>
#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    while(n<9000){
        n++;
        int ones = n % 10;
        int tens = n/100 % 10;
        int hundred = n/10 % 10;
        int thousand = n/1000;

        if(ones != tens && ones != hundred && ones != thousand && tens != hundred && tens != thousand && hundred != thousand){
            cout<<n;
            break;
        }
    }
    return 0;
}