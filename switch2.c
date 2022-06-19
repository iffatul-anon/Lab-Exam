#include<stdio.h>

int main(){

    int option,n2,m2;
    double n,m;

    printf("Select a option:\n1. Addition\n2. Subtraction\n3. Multification\n4. Divition\n5. Modulo\n");
    scanf("%d",&option);

    switch (option)
    {
    case 1:
    printf("Enter 2 numbers:");
    scanf("%lf %lf",&n,&m);
    printf("%.2lf + %.2lf = %.2lf\n",n,m,n+m);
        break;

    case 2:
    printf("Enter 2 numbers:");
    scanf("%lf %lf",&n,&m);
    printf("%.2lf - %.2lf = %.2lf\n",n,m,n-m);
        break;

    case 3:
    printf("Enter 2 numbers:");
    scanf("%lf %lf",&n,&m);
    printf("%.2lf * %.2lf = %.2lf\n",n,m,n*m);
        break;
    
    case 4:
    printf("Enter 2 numbers:");
    scanf("%lf %lf",&n,&m);
    printf("%.2lf / %.2lf = %.2lf\n",n,m,n/m);
        break;

    case 5:
    printf("Enter 2 numbers:");
    scanf("%d %d",&n2,&m2);
    printf("%d %% %d = %d\n",n2,m2,n2%m2);
        break; 

    default: 
    printf("Invalid Option\n");
        break;
    }

    return 0;
}