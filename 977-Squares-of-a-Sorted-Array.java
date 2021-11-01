/*
problem: Squares of a Sorted Array
https://leetcode.com/problems/squares-of-a-sorted-array/
My Submission: https://leetcode.com/submissions/detail/580551085/
*/
class Solution {
    public int[] sortedSquares(int[] nums) {
        int[] num = new int[nums.length];
        for(int i=0; i<nums.length; i++){
            num[i]=nums[i]*nums[i];
            System.out.println(nums[i]);
        }
        for (int i = 0; i <num.length; i++) {     
          for (int j = i+1; j <num.length; j++) {     
              if(num[i] >num[j]) {
                 int temp = num[i];    
                 num[i] = num[j];    
                 num[j] = temp;    
               }     
            }     
        }
        return num;
    }
}
