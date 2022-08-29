#include<stdio.h>

int main()
{
	float t_val,a_val;

	printf("Enter true value :");
	scanf("%f",&t_val);

	printf("Enter absolute value :");
	scanf("%f",&a_val);

	float abs= t_val -a_val;
	float abs_error;
	if(abs>0)
	{
		abs_error =abs;
	}
	else
	{
	abs_error= (-1)*abs;
	}

	float rel_error=abs_error/t_val;

	float per_error =rel_error *100;

	printf("\nAbsolute Error is :%0.2f",abs_error);
	printf("\nRelative Error is :%0.2f",rel_error);
	printf("\nAbsolute Error is :%0.2f",per_error);

}
