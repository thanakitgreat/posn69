#include<stdio.h>


double mode(int s[])
{ int max=0, j, i;

  for(i=0;i<100;i++)
  { if(max < s[i])
     {  max = s[i];
        j = i;
     }
  }

 return (double) j;
}

double mean(int s[], int n)
{ int sum=0, j, i;

  for(i=0;i<100;i++)
  { if(s[i] > 0)
        sum  = sum + s[i]*i;
  }

 return (double) sum/n;
}

double median(int s[],int n)
{ int arr[n];
  double median;

   for(int i=0, k = 1; i < 100; i++)
    { if(s[i] > 0)
        {  while(s[i]>0)
            {  arr[k++] = i;
               s[i]--;

            }
        }
    }

  /*for(int i=1; i <= n; i++)
    printf("%d ", arr[i]);

   printf("\n");
*/

   if(n%2 != 0)
    {   int x1 = abs((n+1)/2);
        median = arr[x1];
    }
    else
    {   median =(double) (arr[(n+1)/2] + arr[(n+2)/2] ) / 2.0;
    }

  return median;
}

void mmm(int a[], int n)
{  int s[100]={0};

   for(int i=0;i<n;i++)              // sort
     s[a[i]]++;

   double mo = mode(s);
   double me = mean(s, n);
   double med = median(s,n);

   printf("%.2lf %.2lf %.2lf", me, med, mo);
}

void main()
{  int a[100], n;

    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);

    mmm(a, n);
}
