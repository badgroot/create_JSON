/*
 *  main.cpp
 *  Program to Create JSON
 *  Created on: Sept 23, 2018
 *  Author: Manish
 */

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "sdkconfig.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cJSON.h"

extern "C" {

	void app_main(void);
}


   char field_name[32], value[32], *data_json;
   cJSON *root,*data;

void json_creation() {

    root = cJSON_CreateObject();
    data = cJSON_CreateArray();

    cJSON_AddItemToObject(root, "Name", cJSON_CreateString("Manish kumar"));
    cJSON_AddItemToObject(root, "ID", cJSON_CreateString("1"));
    cJSON_AddItemToObject(root, "TIMESTAMP", cJSON_CreateString("11:46"));
    cJSON_AddItemToArray(data, root);
	
    data_json = cJSON_Print(data);
    printf("%s\n",data_json);
	
}

void app_main(void)
{
	json_creation();

}
