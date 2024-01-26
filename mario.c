#include <cs50.h>
#include <stdio.h>

int main(void) {
    int i,j,k;
    
    for(i = 0; i< 3;i++) {
        for(j= 3; j> 0;j--) {
            if(j>i+1) {
                printf(" ");
            } else {
                printf("#");
            }

        }
        printf(" ");
        for(k = i+1; k> 0;k--) {
            printf("#");
        }
        printf("\n");
    }

}
