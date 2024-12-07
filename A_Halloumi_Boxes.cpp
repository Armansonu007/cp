#include <bits/stdc++.h>
using namespace std;

// Function to check if the array is sorted
bool isSorted(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i + 1]) return false;
    }
    return true;
}

string func(int n, int k, vector<int>& arr) {
    if (k >= 2) {
        return "YES"; // We can always sort the array if we can reverse subarrays of length >= 2
    } else if (k == 1) {
        return isSorted(arr) ? "YES" : "NO"; // Check if already sorted
    }
    return "NO"; // This case theoretically won't occur with given constraints
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << func(n, k, arr) << endl;
    }

    return 0;
}
