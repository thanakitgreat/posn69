#include <stdio.h>


int maxSub_Sum(int a[], int n)
{

    int max=-10000, sum=0;

     for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
             sum = 0;
           for (int k = i; k <= j; k++)
               {
                 sum  =  sum + a[k];
                   if (sum > max)
                        max = sum;
               }

        }
   }


}

int main()
{   int arr[100], arr_size, maxSum, i;

    scanf("%d", &arr_size);
    for(i = 0; i<arr_size;i++)
        scanf("%d", &arr[i]);
    maxSum = maxSub_Sum(arr, arr_size);
    printf("%d ", maxSum);

    return 0;
}
