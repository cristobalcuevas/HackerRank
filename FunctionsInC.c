/*
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
*/
#include <stdio.h>
int max_of_four(int a, int b, int c, int d) {
    int max = 0;
    a = a > b ? a : b;
    c = c > d ? c : d;
    max = a > c ? a : c;
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
        return 0;
}