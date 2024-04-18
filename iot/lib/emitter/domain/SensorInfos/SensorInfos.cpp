//
// Created by clement.mathe on 12/04/2024.
//
#include "SensorInfos.h"

#include <utility>

SensorInfos::SensorInfos(int sensorID, std::vector<SensorType> sensorType) {
    this->sensorID = sensorID;
    this->sensorType = std::move(sensorType);
}