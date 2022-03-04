#include<iostream>
#include<stdio.h>
#include <iomanip>

using namespace std;
int main(){
    long long a,b,c,d, mul1=1, mul2=1;
        cin>>a>>b>>c>>d;
        mul1 = ((a) * (b)) %100;
        mul2 = ((c) * (d)) %100;
        //cout << mul1 << " " << mul2;
        int last = (mul1 * mul2 )%100;
        last < 10 ? cout <<"0"<<last: cout << last;
// std::cout << std::setw(2)<<last;

    return 0;
}