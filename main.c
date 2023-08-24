#include <stdio.h>

short e_prost(int n, int i) {
    if (n < 4) return 1;
    else if (i == n / 2) return 1;
    else if (n % i == 0) return 0;
    else return e_prost(n, i + 1);
}

int pogolem_prost(int n) {
    if (e_prost(n + 1, 2)) return n + 1;
    else return pogolem_prost(n + 1);
}

int main() {
    int n, i;
    scanf("%d", &n);

    printf("eprost-> %d \n", e_prost(n, 2));
    printf("%d \n", pogolem_prost(n));
    printf("%d ", pogolem_prost(n) - n);

    //    pogolem_prost
    return 0;
}
