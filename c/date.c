
#include <stdio.h>  
#include <time.h>  
#include <string.h>  
int weekday(int w , char *buff)  

{  
       switch(w)  
    {  
        case 0:  
        sprintf(buff , "%s" , "����һ");  
        break;  
        case 1:  
        sprintf(buff , "%s" , "���ڶ�");  
        break;  
        case 2:  
        sprintf(buff , "%s" , "������");  
        break;  
        case 3:  
       sprintf(buff , "%s" , "������");  
       break;  
       case 4:  
       sprintf(buff , "%s" , "������");  
       break;  
        case 5:  
       sprintf(buff , "%s" , "������");  
        break;  
        case 6:  
       sprintf(buff , "%s" , "������");  
        break;  

  }  

    return 0;  

}  

 /*  

 *get local time (year-month-day hour-min-sec weekday)  

 *  

 */ 

 int getCurTime(char *strTime , int type)  

{  

     time_t t;  

    char buff[10];  

     struct tm *tm = NULL;  

    t = time(NULL);  

       

     if(t == -1)  

     {  

         return -1;  

     }  

    tm = localtime(&t);  

     weekday(tm->tm_wday , buff);  

     if(tm == NULL)  

     {  

        return -1;  

     }  

       

    if(type == 0)  

    {  

        sprintf(strTime , "%d��%d��%d��  %d:%d:%d   %s\n" , tm->tm_year + 1900 , tm->tm_mon +  1, tm->tm_mday , tm->tm_hour , tm->tm_min , tm->tm_sec , buff);  

    }  

    else if(type == 1 )  

   {  

        sprintf(strTime , "%d-%d-%d  %d:%d:%d   %s\n" , tm->tm_year + 1900 , tm->tm_mon +  1, tm->tm_mday , tm->tm_hour , tm->tm_min , tm->tm_sec, buff);  

    }  

    else if(type == 2)  

    {  

        sprintf(strTime , "%d_%d_%d  %d:%d:%d   %s\n" , tm->tm_year + 1900 , tm->tm_mon +  1, tm->tm_mday , tm->tm_hour , tm->tm_min , tm->tm_sec, buff);  

    }  

    return 0;  

 }  

 int main(int argc , char **argv)  

 {     

     char buff[60];  

     getCurTime(buff , 1);  

       

    printf("%s \n " , buff);  

    return 0;  

 } 
