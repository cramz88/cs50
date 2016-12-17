#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(int argc, string argv[]){
    
  if (argc != 2){
      printf("Please enter another agrument\n");
      return 1;
  }
  
  else{
      for (int i = 0, n = strlen(argv[1]); i<n;i++){
        if (!((((int)argv[1][i] >= 97) && ((int)argv[1][i] < 123)) || (((int)argv[1][i] >= 65) && ((int)argv[1][i] < 91)))){
        printf("%i", argv[1][i]);
        printf("Only letters allowed\n");
        return 1;
        }
      }
      string caesar = GetString();
      int startc, startk, tight;
      for (int i = 0, j = 0, n = strlen(caesar), nk = strlen(argv[1]); i<n; i++){
          
        if ((int)caesar[i] > 90)
            startc = 97;
            
        else
            startc = 65;
        
        if ((int)argv[1][j%nk] > 90)
            startk = 97;
        else
            startk = 65;
            
        if ((((int)caesar[i] >= startc) && ((int)caesar[i] < startc + 26)) && ((((int)argv[1][(j%nk)] >= startk) && ((int)argv[1][(j%nk)] < startk + 26)))){
            tight = (((int)caesar[i]-startc) + ((int)argv[1][(j%nk)] - startk)) % 26;
            printf ("%c", (char)(tight+startc));
            j++;
        }
        else
            printf("%c", caesar[i]);
            
      }
      printf("\n");
      return 0;
  }
  
}

//k(j) = (int)argv[1][(j%nk)] - startk
