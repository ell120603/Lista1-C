#include <stdio.h>


int binarySearch(int arr[], int l, int r, int x);
int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int x = 5;
    int result = binarySearch(arr, 0, 4, x);
    printf("%d\n", result);
    return 0;
}

int binarySearch(int arr[], int l, int r, int x) {
    if (l <= r) {
        int m = (l + r) / 2;
        if (arr[m] == x) return m;
        if (arr[m] > x) return binarySearch(arr, l, m - 1, x);
        return binarySearch(arr, m + 1, r, x);
    }
    return -1;
}

