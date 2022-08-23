#include<string.h>
#include<iostream>
#include<sstream>

using namespace std;
int main(){
    string str = "Geeks for shuvam ronojit";
    stringstream s(str);
    string word;
 
    while (s >> word){
        cout<<word<<" ";
        cout<<word.length();
    }
}