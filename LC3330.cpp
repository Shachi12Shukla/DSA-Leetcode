#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int possibleStringCount(string word) {
        int n = word.size();
        int total = 1; // original word is also counted .

        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && word[j] == word[i]) {
                j++;
            }
            int groupSize = j - i;
            if (groupSize > 1) {
                total += (groupSize - 1);
            }
            i = j; // move to the next different character
        }

        return total;
    }
int main(){

    string word = "abbcccc";
    int original_strings = possibleStringCount(word);
    cout << "the total number of possible original strings that Alice might have intended to type is "<<original_strings<<endl;





return 0;
}