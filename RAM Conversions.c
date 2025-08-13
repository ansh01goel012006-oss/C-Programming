#include<stdio.h>

int main() {
float bytes,KB,MB,GB;

printf("bytes:");
scanf("%f", &bytes);

KB=bytes/1024;
MB=KB/1024;
GB=MB/1024;

printf("when BYTES are converted to KB:%f\n",KB);
printf("when BYTES are converted to MB:%f\n",MB);
printf("when BYTES are converted to GB:%f\n",GB);

}
