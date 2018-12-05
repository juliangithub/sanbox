#include<stdio.h>
#include<string.h>

int main(){
char buf[128]={0x0};
int a = 1111;
int b = 2222;

void *pmt = buf;
printf("buf:%0x \t &a: %0x \t &b:%0x \n", &buf, &a, &b);
printf("a: %d \t b:%d \n", a, b);

 *(int*)pmt = 3333;
memcpy((void*)&a, buf, sizeof(buf));

printf("buf:%0x \t &a: %0x \t &b:%0x \n", &buf, &a, &b);
printf("a: %d \t b:%d \n", a, b);
}
