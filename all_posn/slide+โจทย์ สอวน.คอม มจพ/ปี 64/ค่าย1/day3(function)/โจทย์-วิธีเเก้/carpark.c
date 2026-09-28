#include <stdio.h>

int carpark_fee(int h, int m)
{ int fee= 0;

 if(m >= 15)
   h = h + 1;

 if(h > 0)
 {
   while(h > 0)
    {    if(h > 6)
            fee += 50;
      else if(h > 3)
            fee += 40;
      else if(h > 1)
            fee += 20;
      else
            fee += 10;
      h--;
    }
 }

  printf("%d", fee);

  return fee;
}


int main(){

    int hour = 0;
    int minute = 0;
    int fee;

    scanf("%d %d",&hour,&minute);

    fee = carpark_fee(hour, minute);
}

