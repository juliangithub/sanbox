#include<stdio.h>
#include<stdarg.h>

#define MY_PRINT(x,args...) printf("%s %s %s %d\n", x,__FILE__, __func__, __LINE__, ##args)

float average(int n_values, ...)
{
    va_list var_arg;
    int count;
    float sum = 0;

    va_start(var_arg, n_values);

    for(count = 0; count < n_values; count++)
    {
        sum = sum + va_arg(var_arg, int);
        MY_PRINT("in");
        MY_PRINT("in",count,sum);
    }
    
    va_end(var_arg);

    return sum / n_values;

}

int main(void)
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float result1 = 0, result2 = 0;
    
    result1 = average(3, num[0], num[1], num[2]);
    result2 = average(6, num[0], num[1], num[2], num[3], num[4], num[5]);

    printf("average(3, num[0], num[1], num[2] ) = %f\n", result1 );

    printf("average(6, num[0], num[1], num[2], num[3], num[4], num[5] ) = %f\n", result2);

    getchar();

    return 0;



}
