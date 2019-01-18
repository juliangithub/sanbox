#include <stdio.h>
#include <string.h>
void main()
{
    //char *data = "formname:vlan_mode&flag:get_info&argument:get_vmode&";
    char *data = "formname:vlan_mode&flag:set_config&argument:set_vmode=transparent,eth1_mode=access,eth2_mode=trunk&";
	char formname[256], action[256], argument[10000];
    char * cp = NULL;
    char * cp2 = NULL;
    if ((cp =strstr(data, "formname:")) != NULL)
    {
        cp2 = (char*)&formname;
        cp += strlen("formname:");
        while(*cp != '&')
        {
            *cp2++ = *cp++;
        }
        *cp2 = '\0';
    }
    printf("formname:%s\n",formname);

    if ((cp = strstr(data, "flag:") )!= NULL)
    {
        cp2 = (char *)&action;
        cp += strlen("flag:");
        while(*cp != '&')
        {
            *cp2++ = *cp++;
        }
        *cp2 = '\0';
    }
     printf("action:%s\n",action);

    if ((cp = strstr(data, "argument:") )!= NULL)
    {
        cp2 = (char *)&argument;
        cp += strlen("argument:");
        while(*cp != '&')
        {
            *cp2++ = *cp++;
        }
        *cp2 = '\0';
    }
     printf("argument:%s\n",argument);


}