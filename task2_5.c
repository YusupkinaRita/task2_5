#include<stdio.h>
int main (){
    int x,y,z,max,min,mid;
    scanf("%d %d %d", &x, &y, &z);
    max=y;
    if (x>max)
        max=x;
    if(z>max)
        max=z;

    min=y;
    if (x<min)
        min=x;
    if(z<min)
        min=z;

    if((max==x && min==y)||(max==y && min==x))
        mid=z;
    if((max==z && min==y)||(max==y && min==z))
        mid=x;
    if((max==x && min==z)||(max==z && min==x))
        mid=y;

    printf("%d %d %d", min, mid, max);
    return 0;

}