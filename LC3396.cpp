#include <iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int minimumOperations(vector<int>& arr) {
            int operations = 0;
            while(true){
                unordered_set<int> s(arr.begin() , arr.end());
                if(s.size() == arr.size()){
                    return operations;
                }
                if(arr.size() <= 3){
                    arr.clear();
                }
                
                else{
                    arr.erase(arr.begin() , arr.begin() + 3);
                } 
                operations++;
            }
            return operations;
        
}
int main(){
      
    vector<int> arr = {1,2,3,4,2,3,3,5,7};
    int minops = minimumOperations(arr);
    cout << minops << endl;

   return 0;
}
   
