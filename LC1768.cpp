#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 string mergeAlternately(string word1, string word2) {

        int n = word1.length();
        int m = word2.length();
        int i = 0;
        string merged = "";
        
        while(i < n && i < m){
            merged.push_back(word1[i]);
            merged.push_back(word2[i]);
            i++;
        }

        while(i < n){
            merged.push_back(word1[i]);   // push remaining part of word1
            i++;
        }

        while(i < m){
            merged.push_back(word2[i]);   // push remaining part of word2
            i++;
        }

        return merged;

    }

int main(){

    string merged = mergeAlternately("ab","pqrs");

    cout << "words after being merged : " << merged << endl;




return 0;
}