#include <stdio.h>
int sizeof_point(int *num, char *chr, char*str){
        printf("%d %d %d \n", sizeof(*num), sizeof(*chr), sizeof(*str));
}
int main()
{
        int num;
        char chr;
        char str[32]={0x0};

        sizeof_point(&num,&chr, str);

}
