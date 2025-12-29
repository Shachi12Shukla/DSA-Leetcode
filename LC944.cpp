#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int minDeletionSize(vector<string>& strs) {
        int colsToDelete = 0;
        if(strs.empty()) return 0;

        for(int col = 0; col < strs[0].size(); col++){
           for(int row = 1; row < strs.size(); row++){

                if(strs[row][col] < strs[row-1][col]){
                    colsToDelete++;
                    break;  // to break multiple counts
            
                }
           }
        }

        return colsToDelete;
    }

int main(){

    vector<string> strs = {"zyx","wvu","tsr"};
    cout << "Number of columns to delete are "<<minDeletionSize(strs) << endl;





return 0;
}