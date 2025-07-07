#include <iostream>
#include<bits/stdc++.h>
using namespace std;

   vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> arr;
        for(int i = 0; i < words.size() ; i++){
            string currentword = words[i];
            int j = 0;
            while(j < currentword.size()){
                char currentchar = currentword[j];
                if(currentchar == x){
                    // store index
                    arr.push_back(i);
                    break;
                }
                j++;
            }
        }
        return arr;
        
    }

int main(){

    vector<string> words = {"leet","code"};
    char x = 'e';
    vector<int> answords = findWordsContaining(words , x);
    for(int i = 0; i < answords.size() ; i++){
        cout << answords[i] << " ";
    }



return 0;
}