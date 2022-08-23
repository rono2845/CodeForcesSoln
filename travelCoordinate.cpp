#include<iostream>
#include<string.h>

using namespace std;
int main(){
    int x=0,y=0,n,distance=10;
    char dir='R';
    cin>>n;
    while(n){
        switch(dir){
            case 'R':
                x = x+distance;
                distance += 10;
                dir='U';
                break;
            case 'U':
                y = y+distance;
                distance += 10;
                dir='L';
                break;
            case 'L':
                x = x-distance;
                distance += 10;
                dir='D';
                break;
            case 'D':
                y = y-distance;
                distance += 10;
                dir='A';
                break;

            case 'A':
                x = x+distance;
                distance += 10;
                dir='R';
                break;
        }
        n--;
    }
    cout<<"("<<x<<","<<y<<")";
    return 0;
}
