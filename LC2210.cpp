#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int countHillValley(vector<int>& arr) {
        // Using Two Pointer Approach
        
        int count = 0;
        int n = arr.size();

        for(int i = 1; i < n - 1 ; i++){

            // avoid non-equal neighbors 
            if(arr[i] == arr[i-1]) {
                // skip iteration for this element.
                // as this element belongs to same hill or valley as the previous one.
                continue;
            }

            int left = i-1;

            // find nearest left non-equal neighbor of i
            while(left >= 0 && arr[i] == arr[left]){
                // find towards left
                left--;
            }
            
            int right = i + 1;
            // find nearest right non-equal neighbor of i
            while(right < n && arr[i] == arr[right]){
                // find towards right 
                right++;
            }


            // found non-equal beighbors of ith Index
            if(left >= 0 && right < n){
                if( (arr[i] > arr[left] && arr[i] > arr[right]) || (arr[i] < arr[left] && arr[i] < arr[right]) ){
                    // found valley and hills 
                    count++;
            }
            }

        }

        return count;
    }

    
int main(){

    vector<int> arr1 ={2,4,1,1,6,5};

    vector<int> arr2 ={6,6,5,5,4,1};

    cout << "Number of Hills and Valleys for input 1 are "<<countHillValley(arr1) << endl;

    cout << "Number of Hills and Valleys for input 2 are "<<countHillValley(arr2) << endl;





return 0;
}