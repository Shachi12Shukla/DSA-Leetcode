#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string makeFancyString(string s) {
        // Greedy Approach 
        int n = s.length();
        string result = "";
        
        for(int i = 0 ; i < n ; i++){
            char currentchar = s[i];
            int resultlength = result.length();

            if(resultlength >= 2 && currentchar == result[resultlength-1] && currentchar == result[resultlength-2]){
                // skip currentchar 
                continue;
            }

            else{
                result.push_back(s[i]);
            }
        }

        return result;
    }
int main(){
    
    string s1 = "leetcode";
    string s2 = "Hannnnaaa";

    cout << makeFancyString(s1) << endl;

    cout << makeFancyString(s2) << endl;

return 0;
}