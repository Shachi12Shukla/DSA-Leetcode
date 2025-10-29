#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int StrictlyGreaterPowerOf2(int n){

    int i = 1;  // n is a positive number
    int power = 0;

    while(i <= n){   // finding power strictly greater than or equal to n
        power = pow(2,i);

        if(power > n){
            break;
        }

        i++;
    }
    return power;

}

int main(){
    
    int n;
    cout << "Enter a number: "<<endl;
    cin >> n;
    int ans = StrictlyGreaterPowerOf2(n);
    cout << "ans -> "<< ans - 1<< endl;





return 0;
}