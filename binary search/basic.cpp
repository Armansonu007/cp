#include <bits/stdc++.h>
using namespace std;

int main() {
    // Example array and target
    vector<int> arr = {1, 3, 5, 7, 9, 11}; // Define the array
    int target = 7;                         // Define the target value
    int n = arr.size();                     // Size of the array

    // Binary search requires a sorted array
    int left = 0;
    int right = n - 1;

    // Basic binary search logic
    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid overflow by calculating mid this way

        if (arr[mid] == target) {
            cout << "Target found at index: " << mid << endl;
            return 0; // Exit once the target is found
        } 
        else if (arr[mid] < target) {
            left = mid + 1; // Discard left half
        } 
        else {
            right = mid - 1; // Discard right half
        }
    }

    // If target is not found
    cout << "Target not found in the array." << endl;

    // Additional logic for unsorted arrays or other problems like square roots
    // Example: Finding the integer square root of a number
    int num = 5; // Example number
    left = 1;
    right = num;
    int sqrt_ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid * mid == num) {
            sqrt_ans = mid;
            break;
        } 
        else if (mid * mid < num) {
            sqrt_ans = mid; // Update possible answer
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }

    if (sqrt_ans != -1) {
        cout << "Integer square root of " << num << " is: " << sqrt_ans << endl;
    } else {
        cout << "Square root not found exactly." << endl;
    }

    return 0;
}
