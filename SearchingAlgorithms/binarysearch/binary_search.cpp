#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key) {
    int l = 0, r = n - 1; // first and last indices of array

    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    // key not present in the array, return -1
    return -1;
}

int main() {
    int n;
    cin >> n;

    int arr[n];    // array must be sorted
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;    // element to be searched for
    cin >> key;

    int idx = binary_search(arr, n, key);

    if (idx == -1) {
        cout << key << " not found in array" << endl;
    } else {
        cout << key << " found at index " << idx << " of array" << endl;
    }

    return 0;
}
