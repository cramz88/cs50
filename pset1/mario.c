#include <stdio.h>

#include <cs50.h>

int height;

int hash;

int space;

int width;

int main(void)

{

    do {

    printf("height: ");

    height = GetInt();

    } while ((height <0) || (height>23));

width = height + 1;

for (int line = 0; line <height; line++)

{

    hash = line + 2;

    for (int i = 0; i < (width - hash); i++) {printf(" ");}

    for (int x = 0; x < hash; x++) {printf("#");}
    printf("\n");

}
}