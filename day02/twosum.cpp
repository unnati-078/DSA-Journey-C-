//this is a leetcode problem


#include <iostream>
#include <vector>
using namespace std;

// this class has a function to find two numbers that add up to a given target
class Solution {
public:
    // this function takes a list of numbers and a target
    // it returns the indices of the two numbers that add up to the target
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); // get the number of elements in the list

        // check each pair of numbers
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // if their sum matches the target, return their indices
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        // if no pair found, return an empty list
        return {};
    }
};
