
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <gmp.h>

void fact(int n) {
    int i;
    mpz_t p;

    mpz_init_set_ui(p, 1);
    for(i = 1 ; i <= n ; ++i)
    {
        mpz_mul_ui(p, p, i);
    }
    printf("%d! = ",n);
    mpz_out_str(stdout, 10, p);
    mpz_clear(p);
}

int main(int argc, char * argv[]) {
    int n;

    if (argc <= 1)
    {
       printf("Usage : %s <number> \n", argv[0]);
        return 1;
    }

    n = atoi(argv[1]);
    assert(n >= 0);
    fact(n);

    return 1;
}
