#include <SparkFun_I2C_Mux_Arduino_Library.h>
#include <Adafruit_VL6180X.h>

namespace TOF_f
{
    float readDistance(QWIICMUX& mux, Adafruit_VL6180X& sensor, int sel);
} // namespace TOF_f
