#include<stdio.h>
#include<cs50.h>
#include<math.h>
int coins = 0;
int ch;
int twentyfive;
int ten;
int five;
int one;
int ch;
int ch;
float ch2;
int main()
{  
    do{
    printf("How much change is owed?\n");
    ch2 = GetFloat();
    } while (ch2 < 0.0);
ch2*=100;
ch = (int)round(ch2);

coins = (ch/25) - ((ch%25)/25);
twentyfive = coins;
ch -= coins*25;
coins = (ch/10) - ((ch%10)/10);
ten = coins;
ch -= coins*10;
coins = (ch/5) - ((ch%5)/5);
five = coins;
ch -= coins*5;
coins = (ch/1) - ((ch%1)/1);
one = coins;
ch -= coins*1;
printf ("%i quarters, %i dimes, %i nickels, %i pennies\n", twentyfive, ten, five, one);
}