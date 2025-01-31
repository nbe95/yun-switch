// Copyright (c) 2023 Niklas Bettgen

#ifndef CONFIG_H_
#define CONFIG_H_


#define PROJECT_NAME            "mqtt-switch"
#define LOCATION_TAG            ""

#define MQTT_BROKER             IPAddress(192, 168, 1, 20)
#define MQTT_PORT               1883
#define MQTT_CLIENT_ID          PROJECT_NAME "_" LOCATION_TAG
#define MQTT_USER               ""
#define MQTT_PASSWORD           ""

#define MQTT_BASE_TOPIC         PROJECT_NAME "/" LOCATION_TAG
#define MQTT_STATE_TOPIC        MQTT_BASE_TOPIC "/state"
#define MQTT_COMMAND_TOPIC      MQTT_BASE_TOPIC "/command"
#define MQTT_AVAIL_TOPIC        MQTT_BASE_TOPIC "/avail"
#define MQTT_RECONNECT_TIMEOUT  1000ul * 5
#define MQTT_JSON_BUFFER        150

#define SERVO_PIN               6
#define SERVO_POS_TOP_DEG       138
#define SERVO_POS_NEUTRAL_DEG   90
#define SERVO_POS_BOTTOM_DEG    46

#define BUTTON_PIN              13
#define BUTTON_DEBOUNCE_MS      30
#define BUTTON_USE_PULLUP       true
#define LED_PIN                 12
#define LED_ON_TOP              true

#endif  // CONFIG_H_
