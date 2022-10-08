#include<stdio.h>
#include<math.h>

float f(float x)
{
    return (x*x*x)-(5*x)+1;
}

int main()
{
    float x0,x1,err;
    do{
        printf("Enter x0 and x1 :");
        scanf("%f%f",&x0,&x1);
        
        if(f(x0)*f(x1)>=0)
        {
            printf("\nWrong Intervals!!");
          
        }
    }while((f(x0)*f(x1))>=0);
    
    printf("\nEnter Error value :");
    scanf("%f",&err);
    
    float x=(x0+x1)/2;
    int i=1;
    while(fabs(f(x))>err)
    {
    printf("\nIteration number :%d,Values of x=%f",i++,x);
        if(f(x0)*f(x)<0)
        {
            x1=x;
        }
        else
        {
            x0=x;
        }
        x=(x0+x1)/2;
    }
    printf("\nRoots of equations at %d iterations is %f",i,x);
}
