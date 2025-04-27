#include <stdio.h>



void combineUtil(int arr[], int n, int k, int index, int data[], int i);
void combine(int arr[], int n, int k);
int main() {
    int arr[] = {1, 2, 3};
    int k = 2;
    combine(arr, 3, k);
    return 0;
}
void combineUtil(int arr[], int n, int k, int index, int data[], int i) {
    if (index == k) {
        for (int j = 0; j < k; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }
    if (i >= n)
        return;

    data[index] = arr[i];
    combineUtil(arr, n, k, index + 1, data, i + 1);

    combineUtil(arr, n, k, index, data, i + 1);
}

void combine(int arr[], int n, int k) {
    int data[k];
    combineUtil(arr, n, k, 0, data, 0);
}

