#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
	#define MAX_SSID_LEN			33
int main(int argc, char const *argv[])
{
	char cur_prefix[MAX_SSID_LEN] = "HiTV_";
	char cur_ssid[MAX_SSID_LEN] = "HiTV_09071A";
	//char ssid_entity[MAX_SSID_LEN] = {0};
	
	/*
	char ssid[MAX_SSID_LEN] = {0};
	char def_ssid[MAX_SSID_LEN] = {0};
	char def_prefix[MAX_SSID_LEN] = {0};
	
	*/
	char *ssid_entity = NULL;
	ssid_entity = &cur_ssid[0] + strlen(cur_prefix);
	
	//snprintf(ssid_entity, sizeof(ssid_entity), "%s", &cur_ssid[strlen(cur_prefix)]);

	//snprintf(ssid_entity, sizeof(ssid_entity), "%s", &cur_ssid[0] + strlen(cur_prefix));
	printf(" %s \n",ssid_entity);
	return 0;
}
