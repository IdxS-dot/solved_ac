#include <stdio.h>
#include <stdlib.h>

int main(){
    long long N, M;
    long long diff;

    scanf("%lld%lld", &N, &M);
    diff = llabs(N-M);
    printf("%lld", diff);
    return 0;
}