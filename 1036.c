#include<stdio.h>

int main()
{
    double A,B,C;
    double s,x1,x2;

    scanf("%lf%lf%lf",&A,&B,&C);

    s=sqrt(B*B-4*A*C);
    x1= ((-B)+s)/(2*A);
    x2= ((-B)-s)/(2*A);

    if(s>=0 && A!=0)
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
    }
    else
        printf("Impossivel calcular\n");

    return 0;
}
