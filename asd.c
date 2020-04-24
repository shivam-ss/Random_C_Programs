#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D,e,x,y;
    printf("\n Enter a ");
    scanf("%f",&a);
    printf("\n Enter b ");
    scanf("%f",&b);
    printf("\n Enter c ");
    scanf("%f",&c);
    e=b*b;
    D=e-(4*a*c);
    float z=sqrt(D);
   // printf("%f %f %f",z,e,D);
    
    if(D>0)
    {
        x=(z-b)/(2*a);
        y=(-1)*(z+b)/(2*a);
        printf("The roots for given will be %f  %f",x,y); //In case when Determinent is equal to zero, x and y are equal.
        
    }
  else if(D<0)
    {
        printf("Real roots does not exist");
        float p,q;
        p=(-b)/(2*a);
        q=(pow(-D,(1/2)))/(2*a);
        
        printf("\n The imaginary roots are x=%f+%fi , y=%f-%fi",p,q,p,q);
    }
return 0;
}
