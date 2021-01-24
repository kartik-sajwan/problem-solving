/*https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/*/
#include<stdio.h>

int main()  {
    int l, r, k, i, result;
    scanf("%d%d%d", &l, &r, &k);
    result = (r/k) - ((l-1)/k);
    printf("%d", result);
    return 0;
}
