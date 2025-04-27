#include <stdio.h>


void subsetsUtil(int arr[], int n, int index, int data[], int dataSize);
void subsets(int arr[], int n);
int main() {
    int arr[] = {1, 2};
    subsets(arr, 2);
    return 0;
}

void subsetsUtil(int arr[], int n, int index, int data[], int dataSize) {
    if (index == n) {
        printf("{");
        for (int i = 0; i < dataSize; i++)
            printf("%d ", data[i]);
        printf("}\n");
        return;
    }

    data[dataSize] = arr[index];
    subsetsUtil(arr, n, index + 1, data, dataSize + 1);

    subsetsUtil(arr, n, index + 1, data, dataSize);
}

void subsets(int arr[], int n) {
    int data[n];
    subsetsUtil(arr, n, 0, data, 0);
}


