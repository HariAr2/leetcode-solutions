class Solution {
 public:
  // Method to restore the array from adjacent pairs
  vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
    // Resulting array
    vector<int> ans;
    // Map to store each number and its adjacent numbers
    unordered_map<int, vector<int>> numToAdjs;

    // Populate the map with adjacent pairs
    for (const vector<int>& pair : adjacentPairs) {
      const int u = pair[0];
      const int v = pair[1];
      numToAdjs[u].push_back(v);
      numToAdjs[v].push_back(u);
    }

    // Find the starting point of the array
    for (const auto& [num, adjs] : numToAdjs)
      if (adjs.size() == 1) {
        ans.push_back(num);
        ans.push_back(adjs[0]);
        break;
      }

    // Continue building the array until it is complete
    while (ans.size() < adjacentPairs.size() + 1) {
      const int tail = ans.back(); // Current tail of the array
      const int prev = ans[ans.size() - 2]; // Previous element in the array
      const vector<int>& adjs = numToAdjs[tail]; // Adjacent numbers to the tail
      if (adjs[0] == prev)
        ans.push_back(adjs[1]); // Add the non-repeated adjacent number
      else
        ans.push_back(adjs[0]); // Add the non-repeated adjacent number
    }

    // Return the restored array
    return ans;
  }
};
