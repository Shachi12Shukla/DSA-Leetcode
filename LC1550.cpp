#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size() < 3) return false;
        for(int i = 0; i <= arr.size() - 3; i++){
            if(arr[i]&1 && arr[i+1]&1 && arr[i+2]&1 ) return true;
        }
        return false;
    }
int main(){
     
    vector<int> arr = {1,2,34,3,4,5,7,23,12};
    bool ans = threeConsecutiveOdds(arr);
    cout << ans << endl;





   return 0;
}