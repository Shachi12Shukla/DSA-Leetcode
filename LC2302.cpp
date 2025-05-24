#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int>& arr, long long k) {
        int n = arr.size();
        long long count = 0;
        long long sum = 0;
        int i = 0;

        for (int j = 0; j < n; ++j) {
            sum += arr[j];
            
            // shrink window if score >= k
            while (i <= j && sum * (j - i + 1) >= k) {
                sum -= arr[i++];
            }
            
            // after shrinking: only window [i..j] is valid
            count += (j - i + 1);
        }
        
        return count;
        
    }
int main(){
    vector<int> arr = {2,1,4,3,5};
    long long k = 10;
    long long count  = countSubarrays(arr,k);
    cout << count << endl;
    





return 0;
}