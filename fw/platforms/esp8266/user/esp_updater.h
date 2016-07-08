/*
* Copyright (c) 2016 Cesanta Software Limited
* All rights reserved
*/

#ifndef CS_FW_PLATFORMS_ESP8266_USER_ESP_UPDATER_H_
#define CS_FW_PLATFORMS_ESP8266_USER_ESP_UPDATER_H_

#include "common/platforms/esp8266/rboot/rboot/appcode/rboot-api.h"

rboot_config *get_rboot_config();

int apply_update(rboot_config *cfg);
void commit_update(rboot_config *cfg);
void revert_update(rboot_config *cfg);

#endif /* CS_FW_PLATFORMS_ESP8266_USER_ESP_UPDATER_H_ */
