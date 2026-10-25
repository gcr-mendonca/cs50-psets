#include <stdio.h>

void drawn(int height, int max_height);

int main(void){
    int height = 0;
    while (height <= 0 || height > 8) {
        printf("enter a number: ");
        scanf("%d", &height);
    }
    drawn(height, height);
    
    return 0;
}

void drawn(int height, int max_height) {
    if(height <= 0)
        return;
    drawn(height - 1, max_height);
    for (int i = 0; i < max_height - height; i++)
        printf(" ");
    for (int i = 0; i < height; i++)
        printf("#");
    printf(" ");
    for (int i = 0; i < height; i++)
        printf("#");
    printf("\n");
}
