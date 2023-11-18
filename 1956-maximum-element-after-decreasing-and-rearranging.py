class Solution:
    def maximumElementAfterDecrementingAndRearranging(self, arr: List[int]) -> int:
        # Sort the array in ascending order
        arr.sort()
        # Get the length of the array  
        n = len(arr)  
        # Initialize a flag variable to 1. This will keep track of the maximum possible value for each element in the array.
        flag = 1  
        for i in range(flag, n):
                # If the current element is greater than or equal to flag + 1
                if arr[i] >= flag + 1:  
                  # Increment the flag by 1
                  flag += 1  
        return flag  # Return the flag
