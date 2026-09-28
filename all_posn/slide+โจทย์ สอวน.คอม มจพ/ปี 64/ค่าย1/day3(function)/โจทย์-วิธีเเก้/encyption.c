#include<stdio.h>

char *encode(char *s, int key)
{ int i;

   for(i = 0; s[i] != '\0'; ++i)
      {
         if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (s[i] + key - 65)%26 + 65;

        else if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = (s[i] + key - 97)%26 + 97;
       }

 return s;
}

char *decode(char s[], int key)
{

   for(int i = 0; s[i] != '\0'; ++i)
   {   if(s[i]>='A' && s[i] <= 'Z')
           s[i] = (s[i] - key - 65)%26 + 65;
       else if(s[i]>='a' && s[i] <= 'z')
           s[i] = (s[i] - key - 97)%26 + 97;
   }


  return s;
}

int main()
{ char message[300];
   char  *result;
   int key, mode;

   scanf("%d %d", &key, &mode);
  // fflush(stdin);

   scanf("%s", message);
    //gets(message);

   if(mode == 0)
       result = decode(message, key);
   else
       result = encode(message, key);

    puts(result);

  return 0;
}
