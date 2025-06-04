
#include <iostream>
#include <vector>
using namespace std;

int solve_memo(vector<int>& weight, vector<int>& value, int capacity, int index, vector<vector<int>>& dp) {
    // Base case
    if (index == 0) {
        if (weight[0] <= capacity) {
            return value[0];
        } else {
            return 0;
        }
    }
    // Check if result is already computed
    if (dp[index][capacity] != -1) {
        return dp[index][capacity];
    }
    // Include or exclude the current item
    int include = 0;
    if (weight[index] <= capacity) {
        include = value[index] + solve_memo(weight, value, capacity - weight[index], index - 1, dp);
    }
    int exclude = solve_memo(weight, value, capacity, index - 1, dp);
    
    dp[index][capacity] = max(include, exclude);
    return dp[index][capacity];
}

int main() {
    vector<int> weight = {4,5,1};
    vector<int> value = {1,2,3};
    int capacity = 4;
    int n = weight.size();
    vector<vector<int>> dp(n, vector<int>(capacity + 1, -1));
    cout << "Maximum value: " << solve_memo(weight, value, capacity, n - 1, dp) << endl;
    return 0;
}

