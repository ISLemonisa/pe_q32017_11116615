#include <stdio.h>
#include <math.h>


struct part1{
    float alpha;
    float beta;
};

float quad(float a, float b){
    float r;
    r = pow((a - b), 2);
    return r;
}

float distancia(struct part1 x, struct part1 y, struct part1 z ){
    float d;
    d = sqrt(quad(x.alpha, x.beta) + quad(y.alpha, y.beta) + quad(z.alpha, z.beta));
    return d;
}

int main(){
    struct part1 a;
    struct part1 b;
    struct part1 c;
    float r;
    printf("Insira o primeiro ponto\n");
    scanf("%f %f %f", &a.alpha, &b.alpha, &c.alpha);
    printf("Insira o segundo ponto\n");
    scanf("%f %f %f", &a.beta, &b.beta, &c.beta);
    printf("%.2f\n", distancia(a, b, c));
    return 0;
}
