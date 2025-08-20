#include<stdio.h>
void main()
{
float salary,allowances,deduction,gross_salary;
printf("ENTER SALARY :");
scanf("%f",&salary);
if(salary>10000)
{


    allowances = (salary*10)/100;
    deduction = (salary*3)/100;
    gross_salary = salary + allowances - deduction;
    printf("THE GROSS SALARY IS %f",gross_salary);
}
else{
    allowances = (salary*7)/100;
    deduction = (salary*2)/100;
    gross_salary = salary + allowances - deduction;
    printf("THE GROSS SALARY IS %f",gross_salary);
}
}


