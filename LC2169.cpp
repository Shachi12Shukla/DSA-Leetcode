#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int countOperations(int num1, int num2) {

        int op = 0;
        // if we use OR operator then the loop never ends
        while(num1 != 0 && num2 != 0){   

            if(num1 >= num2){
                num1 = num1 - num2;
                op++;
            }

            else{
                num2 = num2 - num1;
                op++;
            }

        }
        return op;
    }

int main(){

    int num1; int num2;
    cin >> num1;
    cin >> num2;
    int operationCount = countOperations(num1 , num2);
    cout <<"The number of operations needed to make either of the numbers 0 is "<< operationCount << endl;





    return 0;
}