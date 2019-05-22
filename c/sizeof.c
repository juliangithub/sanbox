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
		printf("direct sizeof %zu %zu %zu \n", sizeof(num), sizeof(chr), sizeof(str));

        sizeof_point(&num,&chr, str);

        

       return 0;

}
