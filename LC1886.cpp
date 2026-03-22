#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) {

        int num_rotations = 4;  // 0 -> 90 -> 180 -> 270 
        
        while(num_rotations!= 0){

            if(matrix == target){
                return true;
            }

            int RowSize = matrix.size();
            int ColSize = matrix[0].size();

            // Step 1 : Take Transpose
            for(int i = 0; i<RowSize ; i++){
                for(int j = i ; j < ColSize ; j++){
                    swap(matrix[i][j], matrix[j][i]);
                }
            } 
            // Step 2 : Reverse Row - Wise
            // Iterate  Through Every Row.
            for(int i = 0 ; i< RowSize ; i++){
                reverse(matrix[i].begin(), matrix[i].end());
            }

            num_rotations--;
                
        }

        return false;

    }

int main(){

    int order;
    cout << "Enter order of matrices"<<endl;
    cin >> order;

    vector<vector<int>> matrix(order, vector<int>(order));
    vector<vector<int>> target(order, vector<int>(order));

    cout << "Enter inputs for matrix"<<endl;
    for(int row = 0; row < order; row++){
        cout << "row "<< row + 1 << endl;

        for(int col = 0; col < order; col++){
            cin >> matrix[row][col];
        }
    }
    
    cout << "Enter inputs for target matrix"<<endl;
    for(int row = 0; row < order; row++){
        cout << "row "<< row + 1 << endl;

        for(int col = 0; col < order; col++){
            cin >> target[row][col];
        }
    }

    if(findRotation(matrix,target)){
        cout << "true" << endl;
    }
    else{
        cout << "false"<< endl;
    }
    




   return 0;
}