/*
problem: https://leetcode.com/problems/duplicate-zeros/
my submission: https://leetcode.com/submissions/detail/582635461/?from=explore&item_id=3245

*/

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
    
        int length = arr.size();
    
        for (int i = 0; i < length; i++)
        {
            cout<<arr[i]<<" ";
        }
        int i=0;
        while (i<length)
        {
            if (arr[i]==0)
            {
                arr.insert(arr.begin() + i, { 0 });
                arr.pop_back();
                i++;
            }
            i++;   
        }
    }
};

/*
Official solution

class Solution {
    public void duplicateZeros(int[] arr) {
        int possibleDups = 0;
        int length_ = arr.length - 1;

        // Find the number of zeros to be duplicated
        // Stopping when left points beyond the last element in the original array
        // which would be part of the modified array
        for (int left = 0; left <= length_ - possibleDups; left++) {

            // Count the zeros
            if (arr[left] == 0) {

                // Edge case: This zero can't be duplicated. We have no more space,
                // as left is pointing to the last element which could be included  
                if (left == length_ - possibleDups) {
                    // For this zero we just copy it without duplication.
                    arr[length_] = 0;
                    length_ -= 1;
                    break;
                }
                possibleDups++;
            }
        }

        // Start backwards from the last element which would be part of new array.
        int last = length_ - possibleDups;

        // Copy zero twice, and non zero once.
        for (int i = last; i >= 0; i--) {
            if (arr[i] == 0) {
                arr[i + possibleDups] = 0;
                possibleDups--;
                arr[i + possibleDups] = 0;
            } else {
                arr[i + possibleDups] = arr[i];
            }
        }
    }
}

*/