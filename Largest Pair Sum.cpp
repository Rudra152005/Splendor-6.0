#include <iostream>
#include <vector>
#include <algorithm> // for std::max

class Solution {
  public:
    int pairsum(std::vector<int> &arr) {
        // Initialize two variables to hold the largest and second largest elements
        int max1 = 0, max2 = 0;

        // Traverse the array to find the largest and second largest elements
        for (int num : arr) {
            if (num > max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }

        // Return the sum of the largest and second largest elements
        return max1 + max2;
    }
};

int main() {
    // Create an instance of the Solution class
    Solution sol;

    // Input size of the array
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    // Input elements of the array
    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Call the pairsum function and display the result
    int result = sol.pairsum(arr);
    std::cout << "The largest pair sum is: " << result << std::endl;

    return 0;
}
