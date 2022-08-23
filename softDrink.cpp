#include<iostream>
#include<algorithm>
/*
    =>n friends decided to buy k bottles
    =>Each bottle has l milliliters of the drink
    =>bought c limes and cut each of them into d slices
    =>p grams of salt

    To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt. 
    How many toasts can each friend make?
*/
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n >>k >>l >>c >>d >>p >>nl >>np;

    int totalDrinks=k*l; //total quantity of drink
    totalDrinks=totalDrinks/nl; //no. of drinks can be made 
    
    int totalSlices=c*d;
    int totalSalt=p/np;

    int res=min(min(totalDrinks,totalSlices),totalSalt)/n;
    cout<<res;

    return 0;
}