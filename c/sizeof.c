#include <stdio.h>
void sizeof_point(int *num, char *chr, char*str){
        printf("%zu %zu %zu \n", sizeof(*num), sizeof(*chr), sizeof(*str));
        printf("%zu %zu %zu \n", sizeof(num), sizeof(chr), sizeof(str));
        void *void_p_int = num;
        void *void_p_char = chr;
        void *void_p_str = str;
        printf("%zu %zu %zu \n", sizeof(void_p_int), sizeof(void_p_char), sizeof(void_p_str));
        printf("%zu %zu %zu \n", sizeof(*void_p_int), sizeof(*void_p_char), sizeof(*void_p_str));
        printf("%zu\n", sizeof(void *));
}
int main()
{
        int num;
        char chr;
        char str[32]={0x0};
	long lnum;
	long long llnum;
	unsigned long long ullnum;
	unsigned total;
		printf("direct sizeof int: %zu char:%zu buf:%zu \n", sizeof(num), sizeof(chr), sizeof(str));
		printf("sizeof long: %zu long long: %zu unsigned long long: %zu unsigned: %zu\n", sizeof(lnum), sizeof(llnum),sizeof(ullnum),sizeof(total));

        sizeof_point(&num,&chr, str);

        

       return 0;

}
