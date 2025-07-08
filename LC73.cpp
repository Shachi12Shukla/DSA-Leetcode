#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool firstRowZero = false;
        bool firstColZero = false;

        // Check if first row needs zeroing
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        // Check if first column needs zeroing
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        // Set markers in first row/column
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Zero cells based on markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle first row
        if (firstRowZero) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Handle first column
        if (firstColZero) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }

void PrintMatrix(vector<vector<int>>& matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int i = 0; i< rows; i++){
        for(int j = 0; j < cols ; j++){
            cout << matrix[i][j] <<" ";
        }
        cout << endl;
    }
}

int main(){

    vector<vector<int>> matrix = {{1,1,1} , {1,0,1} , {1,1,1}};
    cout << "Before "<< endl;
    PrintMatrix(matrix);
    setZeroes(matrix);
    cout << "After "<< endl;
    PrintMatrix(matrix);






return 0;
}