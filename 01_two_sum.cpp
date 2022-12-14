// Given an array of integers nums and an integer target, return indices of the two numbers such 
// that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

//solution-------------------------------------------

#include<bits/stdc++.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        vector<int> :: iterator it;
        for(int i=0; i< nums.size(); i++){
            int ele = target - nums[i];
            it = find(nums.begin(), nums.end(), ele);
            if(it != nums.end()){ // found
                if((it - nums.begin()) == i)
                    continue;
                ret.push_back(i);
                ret.push_back(it - nums.begin());
                return ret;
            }
        }
        return ret;
    }
};

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


// Input: nums = [3,2,4], target = 6
// Output: [1,2]


// Input: nums = [3,3], target = 6
// Output: [0,1]