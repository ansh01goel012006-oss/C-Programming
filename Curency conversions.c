#include<stdio.h>

int main() {
float dollars,rupees,pounds;

printf("dollars:");
scanf("%f", &dollars);

rupees=dollars*48;
printf("when dollars are converted to Rs:%f \n",rupees);





printf("rupees:");
scanf("%f", &rupees);

dollars=rupees/60;
printf("when Rs are converted to $:%f \n",rupees);



}
