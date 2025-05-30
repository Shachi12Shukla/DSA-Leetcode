#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 bool CanFormTriangle(vector<int>& nums){

        if(nums[0] + nums[1] > nums[2] && nums[0] + nums[2] > nums[1] && nums[1] + nums[2] > nums[0]) return true;
            
        return false;
    }

    string triangleType(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        if(CanFormTriangle(nums)) {

            if(nums[0] == nums[1] && nums[0] == nums[2] && nums[1] == nums[2]){
                //  equilateral triangle
                return "equilateral";
            }
            
            else if(nums[0] == nums[1] || nums[1] == nums[2]){
                // isosceles triangle
                return "isosceles";
            }

            else {
                // scalene triangle
                return "scalene";
            }

        }
        return "none";
        
    }
int main(){

    vector<int> sides = {3,4,5};
    string type = triangleType(sides);
    cout << "The given Triangle is a "<< type << " triangle " << endl;




    return 0;
}