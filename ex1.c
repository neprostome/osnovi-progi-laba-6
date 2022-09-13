#include <stdio.h>

int main() {
//ex 1
    //int n;
    //printf("how many elments do u wanna to insert\?\n");
    //scanf("%d", &n);
    //int *a[100] = {0};
    //int *y = a;
    int a[4];
    a[0] = 0;
    a[1] = 3;
    a[2] = 5;
    a[3] = 7;
    /*for (int i = 0; i < n; i++) {
        scanf("%d", (a + i));
    }*/
    for(int i = 0; i < 4; i++){
        printf("%d ", a[i]);
    }
    return 0;
    }



