#include <stdio.h>
#include <malloc.h>

int main(){
//ex 2
    int n;
    scanf("%d", &n);
    int* x = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", (x + i));
    }
    for(int i = 0; i < 4; ++i){
        printf("%d ", *(x+i));
    }
    free(x);
}
