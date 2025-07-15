#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return true;

        else return false;
    }
    bool isValid(string word) {
        // BruteForce Approach
        int n = word.length();
        if(n < 3) return false; // must contain a min of 3 characters.
        
        int consonent_count = 0;
        int vowel_count = 0;

        for(int i = 0; i < n ; i++){
            char currentchar = word[i];
            // conatins only digits (0-9) and English letters (uppercase and lowercase).
            if(!isalnum(currentchar)) return false;

            if(isalpha(currentchar)){
                // contains vowel
                if(isvowel(currentchar)){
                    vowel_count++;
                }

                // contains consonents
                else{
                    consonent_count++;
                }
            }
        }

        if(consonent_count >= 1 && vowel_count >= 1) return true; 
        return false;
        
    }
int main(){
    string word1 = "234Adas";
    cout << isValid(word1) << endl; 

    string word2 = "A2I";
    cout << isValid(word2) << endl;



return 0;
}