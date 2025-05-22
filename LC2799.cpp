#include <iostream>
#include<bits/stdc++.h>

using namespace std;
 int countCompleteSubarrays(vector<int>& arr) {
        int completeSubArray = 0;
        // int distinct = 0;
        int n = arr.size();
        // Bruteforce
        unordered_set<int> s1(arr.begin() , arr.end());
       
        for(int i = 0; i< n ; i++){
            unordered_set<int> s2;
            vector<int> subarray;
            for(int  j = i; j < n;j++){
                subarray.push_back(arr[j]);
                //Print SubArray
                // cout<<"Print Subarray from index "<<i<<" to "<<j<<endl;
                // for(auto it : subarray){
                //     cout << it <<" ";
                // }
                cout<<endl;
                // store in set
                s2.insert(arr[j]);
                if(s2.size() == s1.size()){
                    completeSubArray++;
                }

            }
        }
        return completeSubArray;
        
    }
int main(){
    vector<int> arr = {1,3,1,2,2};
    int count  = countCompleteSubarrays(arr);
    cout << "The number of complete subarrays are "<< count << endl;
   

return 0;
}