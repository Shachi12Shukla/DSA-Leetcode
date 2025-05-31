#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int differenceOfSums(int n, int m) {
        int sum = 0;
        int num1;
        int num2;
        // define num1
        for(int i = 1 ; i <= n ; i++){
            // i not divisible by m
            if( i % m !=0){
                sum += i;
            } 
        }
        num1 = sum;

        sum = 0;
        // define num2
        for(int j = 1 ; j <=n ; j++){
            // i divisible by m
            if( j % m == 0){
                sum += j;
            }
        }

        num2 = sum;

        return num1 - num2;
    }
int main(){

    cout << differenceOfSums(10,3) << endl;



    return 0;
}