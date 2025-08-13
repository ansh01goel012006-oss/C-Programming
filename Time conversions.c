#include<stdio.h>

int main() {
int hr,min;

printf("Hours:");
scanf("%d", &hr);

min=hr*60;
printf("when hr is converted to min:%d/n",min);





printf("minutes:");
scanf("%d", &min);

hr=hr/60;
printf("when minutes are converted to hours:%d/n",hr);


}
