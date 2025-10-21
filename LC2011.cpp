#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int finalValueAfterOperations(vector<string>& operations){
    int X = 0;

    for(int i = 0; i < operations.size() ; i++){

        string op = operations[i];
        // increament : X++ or ++X
        if(op == "X++" || op == "++X"){
            X++;
        }
        else{
            // X-- or --X
            X--;
        }
    }

    return X;
}

int main(){

    vector<string> operations1 = {"--X" , "X++" , "X++"};
    vector<string> operations2 = {"X++","++X","--X","X--"};

    cout << finalValueAfterOperations(operations1) << endl;
    cout << finalValueAfterOperations(operations2) << endl;





return 0;
}