#include<stdio.h>

double distance_car(int n)
{  double sum = 0.0;
   int km, m;

   for(int i=0;i<n;i++)
     {  scanf("%d %d", &km, &m);
        sum =  sum + (double) (km/60.0)*m;
     }
  return sum;
}

void main()
{ int n;
  scanf("%d", &n);
  printf("%.1lf", distance_car(n));
}
