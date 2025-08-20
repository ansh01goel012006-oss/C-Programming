#include<stdio.h>
float main()
{
float num1, num2;
printf("Enter The First Number:");
scanf("%f", &num1);
printf("Enter the Second Number:");
scanf("%f", &num2);
if(num1>num2)
{
printf("The Largest Number is:%f\n",num1);
printf("The Smallest Number is:%f\n",num2);
}
else
{
printf("The Largest Number is:%f\n",num2);
printf("The Smallest Number is:%f\n",num1);
}
}
