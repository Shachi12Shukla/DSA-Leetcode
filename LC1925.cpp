#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int countTriples(int n) {
        int count = 0; double c = 0.0;

        // step 1 : Iterate through all possible triplets

        for(int a = 1; a < n; a++){
            for(int b = a+1; b < n; b++){

                // step 2 : sqrt(a^2 + b^2)

                c = sqrt(a*a + b*b);
                if(c <= n && c == (int)c){
                    // is a square root ?
                    count += 2;
                    cout << "The square triples are "<<a<<b<<c<<" and "<<b<<a<<c<<endl;
                }
            }
        }

        return count;
    }

int main(){

    int n = 5 , ans = 0;
    ans = countTriples(n);
    cout << "The count of triples is "<<ans;






return 0;
}