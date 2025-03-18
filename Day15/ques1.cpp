//Question 1- Kth element of two-arrays
/*https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=k-th-element-of-two-sorted-array*/

#include <iostream>
#include <algorithm>

using namespace std;

int kthElement(int arr1[], int arr2[], int n, int m, int k) {
    // Ensure arr1 is the smaller array for optimized binary search
    if (n > m) 
        return kthElement(arr2, arr1, m, n, k);

    int low = max(0, k - m), high = min(n, k); 

    while (low <= high) {
        int cut1 = (low + high) / 2;
        int cut2 = k - cut1;

        int left1 = (cut1 == 0) ? INT_MIN : arr1[cut1 - 1];
        int left2 = (cut2 == 0) ? INT_MIN : arr2[cut2 - 1];
        int right1 = (cut1 == n) ? INT_MAX : arr1[cut1];
        int right2 = (cut2 == m) ? INT_MAX : arr2[cut2];

        if (left1 <= right2 && left2 <= right1) {
            return max(left1, left2);
        } else if (left1 > right2) {
            high = cut1 - 1;
        } else {
            low = cut1 + 1;
        }
    }
    return -1; // If k is out of bounds
}

int main() {
    int arr1[] = {2, 3, 6, 7, 9};
    int arr2[] = {1, 4, 8, 10};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int k = 5;

    cout << "The " << k << "-th element is: " << kthElement(arr1, arr2, n, m, k) << endl;
    return 0;
}
