#include<string.h>
#include<iostream>
#include<sstream>

using namespace std;
int main(){
    string str = "HELLO Ronojit Chowdhury";
    stringstream s(str);
    string word;
 
    while (s >> word){
        cout<<word<<" ";
        cout<<word.length();
    }
}
