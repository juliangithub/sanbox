#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MIB_PATH_MAX_LENGTH 10000
/*
struct cgi_item
{
    char *keyweb;
    char *value;
    char mibpath[MIB_PATH_MAX_LENGTH];
    cgi_item* next;
};
typedef struct cgi_item CGI_ITEM;
*/

typedef struct cgi_item
{
    char *keyweb;
    char *value;
    char mibpath[MIB_PATH_MAX_LENGTH];
    struct cgi_item *next;
}cgi_item;

typedef struct cgi_item CGI_ITEM;

CGI_ITEM *value_list = NULL;
void main()
{

    
    char data[] = "set_vmode=transparent,eth1_mode=access,eth2_mode=trunk";
    char *kv[256];
    int i;
    int j = 0;
     
    //kv[0] = strtok(data, ',');
    kv[0] = strtok(data, ",");
    
    for(i = 1;i < 256;i++)
    {
        kv[i] = strtok(NULL, ",");
        if (kv[i] == NULL)
        break;
    }
    
    
    while(j < i)
    {
        printf("kv[%d]:%s\n", j,kv[j]);
        j++;
    }
    char *cp = NULL;
    CGI_ITEM *value_item;
    i -= 1;
    j=i ;
    
    for(;i>=0;i--)
    {
        cp = strchr(kv[i], '=');
        *cp++ = '\0';
        value_item=(CGI_ITEM*)malloc(sizeof(CGI_ITEM));
        value_item->keyweb = (char *)kv[i];
        value_item->value = cp;
        value_item->next = (CGI_ITEM *)value_list;
        value_list = value_item;
    }
    
    
     CGI_ITEM *value_cell;
     value_cell = value_list;
     
    
    for(j=0;value_cell != NULL;j++)
    {
        printf("key[%d]:%s---value:%s\n", j, value_cell->keyweb, value_cell->value);
        value_cell = value_cell->next;
    
    }
        
    
}