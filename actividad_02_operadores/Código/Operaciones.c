#include <stdio.h>

int main(){
int A=10;
int B=2;
int C=5;
int D=12;
int E=0;

printf("A=%d \nB=%d \nC=%d \nD=%d \nE=%d \n\n",A,B,C,D,E);

printf("JERARQUÍA\n");
E=A/B+D%C;
printf("E=A/B+DmodC = %d\n\n",E);

printf("TERNARIO\n");
E=B<C?1:0;
printf("E=B<C?1:0 = %d\n\n",E);

printf("OR logico VS OR bitwise\n");
printf("B||C %d\n",B||C);
printf("B|C %d\n\n",B|C);

printf("INCREMENTO Y DECREMENTO\n");
printf("C=%d, D=%d\n",++C,D--);
printf("C=%d, D=%d\n\n",C,D);

printf("PRECEDENCIA\n");
E=B+D*A;
printf("E=B+D*A = %d\n",E);
E=(B+D)*A;
printf("E=(B+D)*A = %d\n\n",E);
}
