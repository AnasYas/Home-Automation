//Viral Science
// www.youtube.com/c/viralscience
//Google Assistant Home Automation
#include <ESP8266WiFi.h>
#include "Adafruit_MQTT.h"
#include "Adafruit_MQTT_Client.h"

#define Door           D3
#define T.V            D2
#define Fan            D1
#define Lighting       D0

#define WLAN_SSID       "Tp-Link_E6CC"             // Your SSID
#define WLAN_PASS       "52810077"        // Your password

/************************* Adafruit.io Setup *********************************/

#define AIO_SERVER      "io.adafruit.com" //Adafruit Server
#define AIO_SERVERPORT  1883                   
#define AIO_USERNAME    "anasyaseen"            // Username
#define AIO_KEY         "aio_fKSM171QKZkdbCtwfISSDg63wAwG"   // Auth Key

//WIFI CLIENT
WiFiClient client;

Adafruit_MQTT_Client mqtt(&client, AIO_SERVER, AIO_SERVERPORT, AIO_USERNAME, AIO_KEY);

Adafruit_MQTT_Subscribe buzzer1 = Adafruit_MQTT_Subscribe(&mqtt, AIO_USERNAME"/feeds/Door"); // Feeds name should be same everywhere
Adafruit_MQTT_Subscribe buzzer2 = Adafruit_MQTT_Subscribe(&mqtt, AIO_USERNAME "/feeds/T.V");
Adafruit_MQTT_Subscribe buzzer3 = Adafruit_MQTT_Subscribe(&mqtt, AIO_USERNAME "/feeds/Fan");
Adafruit_MQTT_Subscribe buzzer4 = Adafruit_MQTT_Subscribe(&mqtt, AIO_USERNAME "/feeds/Lighting");
