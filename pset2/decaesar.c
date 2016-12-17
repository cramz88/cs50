#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(int argc, string argv[]){
  if (argc != 2){
      printf("Please enter another agrument\n");
      return 1;
  }
  else{
      string caesar = GetString();
      int start, tight;
      for (int i = 0, n = strlen(caesar); i<n; i++){
          
        if ((int)caesar[i] > 90)
            start = 97;
            
        else
            start = 65;
            
        if (((int)caesar[i] >= start) && ((int)caesar[i] < start + 26)){
            tight = (((int)caesar[i]-start) - atoi(argv[1])) % 26;
            if (tight < 0)
                tight = tight + 26;
            printf ("%c", (char)(tight+start));
        }
        else
            printf("%c", caesar[i]);
            
        //else if ((int)caesar[i] + atoi(argv[1]) > 122)
            //printf('%c', (char)(122 - (int)caesar))
      }
      printf("\n");
      return 0;
  }
  
}