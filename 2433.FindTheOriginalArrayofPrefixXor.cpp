class Solution {
public:
  // This function takes a vector of integers called 'pref' as input and returns
  // a new vector of integers.
  vector<int> findArray(vector<int>& pref) {
    // Create a vector called 'ans' with the same size as the input vector 'pref'.
    vector<int> ans(pref.size());

    // Set the first element of the 'ans' vector to be the same as the first
    // element of the 'pref' vector.
    ans[0] = pref[0];

    // Loop through the 'ans' vector starting from the second element (index 1).
    for (int i = 1; i < ans.size(); ++i) {
      // Calculate the value for the current element of 'ans' by performing
      // a bitwise XOR (^) operation between the current element of 'pref'
      // and the previous element of 'ans'.
      ans[i] = pref[i] ^ pref[i - 1];
    }

    // Return the 'ans' vector, which now contains the computed values.
    return ans;
  }
};
