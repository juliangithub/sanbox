#include<stdio.h>
int myprint(int second)
{
    //int static ms = second * 1000;
    int static ms = 1000;
    ms --;
    return ms;

}

int main(void)
{
    int i;
    int ret = 0;
    for(i = 0 ; i < 3 ; i++)
    {
      ret = myprint(1);
      printf("ret i = %d , ret = %d \n", i, ret);
    }

}
