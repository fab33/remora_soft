#include "mqtt.h"

AsyncMqttClient mqttClient;

// TODO : void onWifiConnect(const WiFiEventStationModeGotIP& event)


// TODO : void onWifiDisconnect(const WiFiEventStationModeDisconnected& event) {

void connectToMqtt() {
  DebugF("Connecting to MQTT...");
  mqttClient.connect();
}

void onMqttConnect(bool sessionPresent) {
// TODO
}

void onMqttDisconnect(AsyncMqttClientDisconnectReason reason) {
// TODO
}

void onMqttSubscribe(uint16_t packetId, uint8_t qos) {
// TODO
}

void onMqttUnsubscribe(uint16_t packetId) {
// TODO
}

void onMqttMessage(char* topic, char* payload, AsyncMqttClientMessageProperties properties, size_t len, size_t index, size_t total) {
// TODO
}

void onMqttPublish(uint16_t packetId) {
// TODO
}
