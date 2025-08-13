#include<stdio.h>

int main() {
float dollars,rupees,pounds;

printf("dollars:");
scanf("%f", &dollars);

rupees=dollars*48;
pounds=rupees/70;
printf("when dollars are converted to Rs:%f \n",rupees);
printf("when dollars are converted to pounds:%f \n",pounds);





printf("rupees:");
scanf("%f", &rupees);

dollars=rupees/48;
printf("when Rs are converted to $:%f \n",dollars);



}

