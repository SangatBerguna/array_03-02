#include <stdio.h>

void rotate(int arr[], int n, int k) {
    k = k % n;
    int temp[k];
    for (int i = n - k, j = 0; i < n; i++, j++) {
        temp[j] = arr[i];
    }
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 3;
    printf("Input array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    rotate(nums, n, k);
    printf("\nOutput array setelah rotasi %d langkah ke kanan: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}
