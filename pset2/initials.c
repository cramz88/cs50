#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
  string s = GetString();
  int x;
  for (int i = 0, n = strlen(s); i<n; i++)
  {
      if ((i == 0) || (s[i-1] == ' '))
        {
            x = (int)s[i];
            if (x>90) 
                printf ("%c", (char)(x-32));
            else 
                printf ("%c", (char)x);
        }
        
  }
  printf("\n");
}