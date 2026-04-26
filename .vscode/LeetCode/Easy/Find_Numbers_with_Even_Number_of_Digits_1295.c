#include <stdio.h>

int countDigits(int num) {
    if (num == 0) return 1;

    int count = 0;

    while (num != 0) {
        count++;
        num /= 10;
    }

    return count;
}

int findNumbers(int nums[], int n) {
    int evenCount = 0;

    for (int i = 0; i < n; i++) {
        int digits = countDigits(nums[i]);

        if (digits % 2 == 0) {
            evenCount++;
        }
    }

    return evenCount;
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = findNumbers(nums, n);
    printf("%d\n", result);

    return 0;
}