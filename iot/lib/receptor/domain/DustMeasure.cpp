//
// Created by clement.mathe on 27/06/2024.
//

#include "DustMeasure.h"

using namespace measure;

DustMeasure::DustMeasure() : AbstractMeasure(DUST_SENSOR_DATA_BIT_LENGTH,
                                             SensorInfos(
                                                     DUST_SENSOR_ID,
                                                     DUST_SENSOR_REF,
                                                     std::vector<SensorType>{SensorInfos::stringToSensorType(DUST_SENSOR_TYPE)})) {
}

//retourne la valeur de la mesure de poussière en string
String DustMeasure::getDeSerializedMeasure() {

#ifdef RECEPTOR_DEBUG
    Serial.print("Dust : ");
    Serial.println(String(measure::AbstractMeasure::rawMeasure));
#endif

    return String(measure::AbstractMeasure::rawMeasure);
}
