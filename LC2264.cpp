#include <iostream>
#include<bits/stdc++.h>
using namespace std;

  string largestGoodInteger(string num) {
        int n = num.length();
        string ans = "";

        // Step 1 : Find substring 

       int i = 0; // looping variable
        while(i < n - 2){

            string subnum = num.substr(i , 3);
            // cout << subnum << endl;

            // Step 2 : Check if only 1 unique element exists!
            
            if(subnum[0] == subnum[1] && subnum[1]== subnum[2]){
                // found a "good" integer
                ans = max(subnum , ans);
            } 

            i++;
        }

        return ans;
    }


int main(){

    string num1 = "6777133339";

    string num2 = "2300019";

    string num3 = "42352338";


    cout << " 'Good Integer' from number 1 is "<< largestGoodInteger(num1) << endl;

    cout << " 'Good Integer' from number 2 is "<< largestGoodInteger(num2) << endl;

    cout << " 'Good Integer' from number 3 is "<< largestGoodInteger(num3) << endl;

    return 0;
}
