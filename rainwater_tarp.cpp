#include <iostream>
#include <vector>
using namespace std;

int trapRainWater(vector<int>& height) {
    if (height.empty()) return 0;

    int n = height.size();
    vector<int> leftMax(n), rightMax(n);
    int waterTrapped = 0;

    // Compute left max boundary for each element
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i - 1], height[i]);

    // Compute right max boundary for each element
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
        rightMax[i] = max(rightMax[i + 1], height[i]);

    // Calculate trapped water
    for (int i = 0; i < n; i++)
        waterTrapped += min(leftMax[i], rightMax[i]) - height[i];

    return waterTrapped;
}

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Trapped Water: " << trapRainWater(height) << " units" << endl;
    return 0;
}
