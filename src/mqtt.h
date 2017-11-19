// include MQTT library from marvinroger
#include <AsyncMqttClient.h>
#include "remora.h"

#define MQTT_HOST IPAddress(192, 168, 2, 50)
#define MQTT_PORT 1883

// under MQTT_SUBSCRIBE_TOPIC we are reading fp[X] subtopics to set fp
#define MQTT_SUBSCRIBE_TOPIC "remora/sub"

// under MQTT_PUBLISH_TOPIC we create subtopics tinfo and fp with JSON objects
#define MQTT_PUBLISH_TOPIC "remora"
