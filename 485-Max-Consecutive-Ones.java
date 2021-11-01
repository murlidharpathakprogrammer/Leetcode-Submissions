/*
https://leetcode.com/problems/max-consecutive-ones/
Given a binary array nums, return the maximum number of consecutive 1's in the array.
*/
class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
            int count=0;
            int max=0;
        for(int i=0; i<nums.length; i++){
            if(nums[i]==1) count++;
            if(nums[i]!=1){
                count=0;
                continue;
            }
            if(count>max) max=count;
        }
        return max;
    }
}
