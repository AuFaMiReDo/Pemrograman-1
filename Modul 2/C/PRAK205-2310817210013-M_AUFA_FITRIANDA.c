#include <stdio.h>
#include <math.h>
int main(){
int a, b;
printf("\n");
scanf("%d %d", &a, &b);
int c = sqrt(b*b - a*a);
int keliling = a + b + c;
int luas = (a * c) / 2;
printf("\nalas = %d cm\n",c);
printf("tinggi = %d cm\n",a);
printf("keliling = %d cm\n",keliling);
printf("luas = %d cm^2",luas);
return 0;
}