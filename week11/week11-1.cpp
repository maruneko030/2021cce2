#include <stdio.h>
int main()
{
    int T;
    FILE * fin = fopen("input.txt","r");
    fscanf(fin,"%d",&T);
    printf("你讀到了T: %d\n",T);
}
