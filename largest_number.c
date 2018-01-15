 #include <stdio.h>
 int main() {
        long long int n, data[100], i, j, temp;
        scanf("%lld", &n);
        for (i = 0; i < n; i++)
                scanf("%lld", &data[i]);

        for (i = 0; i < n-1; i++) {
                for (j = i + 1; j < n; j++) {
                        if (data[i] > data[j]) {
                                temp = data[i];
                                data[i] = data[j];
                                data[j] = temp;
                        }
                }
    }
        for (i = n-1; i >= 0; i--)
                printf("%lld", data[i]);

        return 0;
  }
