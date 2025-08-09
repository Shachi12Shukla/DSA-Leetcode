#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 bool isPowerOfTwo(int n) {
        for(int i=0; i<31 ; i++)
        {
            int ans = pow(2,i);
            if(ans==n)
            {
                return true;
            }
         
        }
        return false;
        
    }
int main(){

    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    if(isPowerOfTwo(n)){
        // power of two
        cout <<"Entered number is a power of two "<<endl;
    } 

    else{
        // not a power of two
        cout<<"Entered number is not a power of two "<<endl;
    }





return 0;
}