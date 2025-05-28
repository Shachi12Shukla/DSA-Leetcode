#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 int removeElement(vector<int>& arr, int val) {
        int n = arr.size();
        int i = 0; // wants val 
        int j = n-1; // wants any element other than val 

        // Case 
        if( n == 1 && arr[i] ==val ){
            return 0;
        }

        // Case : nums = [3,3] and val = 3
        if( n == 2 && arr[i] == val && arr[j] == val ){
            // arr.clear();
            return 0;
        }

        // Step 1 : Shift val element to the end
        while( i <= j ){

            // the condition which satisfies both i and j
            if(arr[i] == val && arr[i] != arr[j]){
                swap(arr[i] , arr[j]);
                i++ ; j--;
            } 

            // j has val h but it wants any 'other element' so j--
            else if(arr[j] == val) {
                j--;
            }

            // i has 'other element' h but it wants val so i++
            else if(arr[i] != val){
                i++;
            }
        }
        return i;
        // Since the last index that "i" will be pointing to before the loop breaks 
        // will be the last position of "other elements" (the kth position)
    }
int main(){
    vector<int> arr = {0,1,2,2,3,0,4,2};
    int val = 2;
    int ans = removeElement(arr , val);
    cout << ans << endl;
     
    cout << "print array after removing "<< val << endl;
    // print array after removing element
    for(auto element : arr){
        cout << element << " ";
    }





return 0;
}