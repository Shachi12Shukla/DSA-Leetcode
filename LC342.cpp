#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) {
        // without Recursion

        if(n <= 0) return false;

        // find remainder
        while(n % 4 == 0){
            // keep dividing it
            n/= 4;
        }
        
        return n==1;
    }


int main(){
    
    int n;
    cout << "Enter a number"<<endl;
    cin >> n;

    if(isPowerOfFour(n)){
        cout << "is power of four"<<endl;
    }

    else{
        cout << "not a power of four" << endl;
    }


    return 0;
}