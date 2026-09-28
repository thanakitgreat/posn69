#include<stdio.h>

long int reverse(long int n)
{ long int r=0;

    while(n > 0)
    { r = r*10 + n%10;
      n = n /10;
    }

  return r;
}

int main()
{  long int n, k;
    scanf("%ld", &n);
    k = reverse(n);
    printf("%ld", k);

    return 0;
}
