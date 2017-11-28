#include <stdlib.h>

struct tempo{
    int min;
    int seg;
    int dec;
};

void diferenca(struct tempo t1, struct tempo t2){
    int m, s, d;
    if(t2.dec < t1.dec)
    {
        t2.seg= t2.seg - 1;
        t2.dec = t2.dec + 100;
    }
    if(t2.seg < t1.seg)
    {
        t2.min = t2.min - 1;
        t2.seg = t2.seg + 60;
    }
    m = t2.min - t1.min;
    s = t2.seg - t1.seg;
    d = t2.dec - t1.dec;
    printf("%dm %ds %d", m, s, d);
}

int main(){
    struct tempo t1;
    struct tempo t2;
    scanf("%dm %ds %d", &t1.min, &t1.seg, &t1.dec);
    printf("t2:");
    scanf("%dm %ds %d", &t2.min, &t2.seg, &t2.dec);
    diferenca(t1, t2);
    return 0;
}
