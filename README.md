# Rainwater-trapping-code-in-cpp
This repository contains an optimized C++ implementation of the Trapping Rain Water problem. It efficiently calculates the total trapped water between buildings using the two-array technique for maximum boundaries.


#Features:

Optimized O(N) time complexity solution
Simple and well-structured C++ code
Ready to compile and run

#Explain
The function trapRainWater() calculates trapped rainwater between buildings given their heights.
It initializes two arrays, leftMax and rightMax, to store the highest barriers on the left and right for each index.
leftMax is filled by iterating from left to right, storing the max height encountered so far.
rightMax is filled by iterating from right to left, storing the max height from the right.
The trapped water at each index is calculated as min(leftMax[i], rightMax[i]) - height[i].
If this value is positive, it is added to waterTrapped, which keeps the total water count.
The function returns waterTrapped as the final result.
The main() function tests the algorithm with a sample input and prints the trapped water.
