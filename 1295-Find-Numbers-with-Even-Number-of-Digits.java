/*
Problem: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
         Given an array nums of integers, return how many of them contain an even number of digits.
My Submission: https://leetcode.com/submissions/detail/580529526/
*/
class Solution {
    public int findNumbers(int[] nums) {
        int res=0;
        for(int each:nums){
            int dig=0;
            while(each>0){
                dig++;
                each/=10;
            }
            if(dig%2==0) res++;
        }
        return res;
    }
}
