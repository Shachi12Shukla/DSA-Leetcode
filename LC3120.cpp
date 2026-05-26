#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int numberOfSpecialChars(string word) {

        int count = 0;

        vector<bool> counted(26, false);

        for(int i = 0; i < word.length(); i++) {

            char letter = word[i];

            // lowercase case
            if(islower(letter) && counted[letter - 'a'] != true) {

                char upperLetter = toupper(letter);

                for(int j = 0; j < word.length(); j++) {

                    char current_letter = word[j];

                    if(current_letter == upperLetter) {
                        count++;
                        counted[letter - 'a'] = true;  // ['a'] -> counted
                        break;
                    }
                }
            }

            // uppercase case
            else if(isupper(letter) && counted[letter - 'A'] != true) {

                char lowerLetter = tolower(letter);

                for(int j = 0; j < word.length(); j++) {

                    char current_letter = word[j];

                    if(current_letter == lowerLetter) {
                        count++;
                        counted[letter - 'A'] = true;   // ['A'] -> counted
                        break;
                    }
                }
            }
        }

        return count;
    }


int main(){

    string s;
    getline(cin,s);

    cout << numberOfSpecialChars(s) << endl;





    return 0;
}