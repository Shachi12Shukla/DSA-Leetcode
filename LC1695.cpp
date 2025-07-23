#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maximumUniqueSubarray(vector<int>& arr) {
        int left = 0; 
        unordered_set<int> seen;
        int score = 0;
        int currentsum = 0;

        for(int right = 0; right < arr.size(); right++){
            while(seen.find(arr[right]) != seen.end()){
                
                // erase element
                currentsum = currentsum - arr[left];
                
                seen.erase(arr[left]);
                left++;
            }
            
            currentsum = currentsum + arr[right];
            // else add the element 
            seen.insert(arr[right]);

            // max score
            score = max(score , currentsum);
        }

        return score;
        
    }

int main(){

    vector<int> arr = {5,2,1,2,5,2,1,2,5};

    cout << "Score " << maximumUniqueSubarray(arr) << endl;
   


return 0;
}