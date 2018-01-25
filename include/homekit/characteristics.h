#ifndef __HOMEKIT_CHARACTERISTICS__
#define __HOMEKIT_CHARACTERISTICS__

#include <homekit/types.h>


#ifdef HOMEKIT_SHORT_APPLE_UUIDS
    #define HOMEKIT_APPLE_UUID8(value) (value)
    #define HOMEKIT_APPLE_UUID7(value) (value)
    #define HOMEKIT_APPLE_UUID6(value) (value)
    #define HOMEKIT_APPLE_UUID5(value) (value)
    #define HOMEKIT_APPLE_UUID4(value) (value)
    #define HOMEKIT_APPLE_UUID3(value) (value)
    #define HOMEKIT_APPLE_UUID2(value) (value)
    #define HOMEKIT_APPLE_UUID1(value) (value)
    #define HOMEKIT_APPLE_UUID0(value) (value)
#else
    #define HOMEKIT_APPLE_UUID8(value) (value "-0000-1000-8000-0026BB765291")
    #define HOMEKIT_APPLE_UUID7(value) HOMEKIT_APPLE_UUID8("0" value)
    #define HOMEKIT_APPLE_UUID6(value) HOMEKIT_APPLE_UUID7("0" value)
    #define HOMEKIT_APPLE_UUID5(value) HOMEKIT_APPLE_UUID6("0" value)
    #define HOMEKIT_APPLE_UUID4(value) HOMEKIT_APPLE_UUID5("0" value)
    #define HOMEKIT_APPLE_UUID3(value) HOMEKIT_APPLE_UUID4("0" value)
    #define HOMEKIT_APPLE_UUID2(value) HOMEKIT_APPLE_UUID3("0" value)
    #define HOMEKIT_APPLE_UUID1(value) HOMEKIT_APPLE_UUID2("0" value)
    #define HOMEKIT_APPLE_UUID0(value) HOMEKIT_APPLE_UUID1("0" value)
#endif


#define HOMEKIT_SERVICE_ACCESSORY_INFORMATION HOMEKIT_APPLE_UUID2("3E")
#define HOMEKIT_SERVICE_FAN HOMEKIT_APPLE_UUID2("40")
#define HOMEKIT_SERVICE_GARAGE_DOOR_OPENER HOMEKIT_APPLE_UUID2("41")
#define HOMEKIT_SERVICE_LIGHTBULB HOMEKIT_APPLE_UUID2("43")
#define HOMEKIT_SERVICE_LOCK_MANAGEMENT HOMEKIT_APPLE_UUID2("44")
#define HOMEKIT_SERVICE_LOCK_MECHANISM HOMEKIT_APPLE_UUID2("45")
#define HOMEKIT_SERVICE_OUTLET HOMEKIT_APPLE_UUID2("47")
#define HOMEKIT_SERVICE_SWITCH HOMEKIT_APPLE_UUID2("49")
#define HOMEKIT_SERVICE_THERMOSTAT HOMEKIT_APPLE_UUID2("4A")
#define HOMEKIT_SERVICE_AIR_QUALITY_SENSOR HOMEKIT_APPLE_UUID2("8D")
#define HOMEKIT_SERVICE_SECURITY_SYSTEM HOMEKIT_APPLE_UUID2("7E")
#define HOMEKIT_SERVICE_CARBON_MONOXIDE_SENSOR HOMEKIT_APPLE_UUID2("7F")
#define HOMEKIT_SERVICE_CONTACT_SENSOR HOMEKIT_APPLE_UUID2("80")
#define HOMEKIT_SERVICE_DOOR HOMEKIT_APPLE_UUID2("81")
#define HOMEKIT_SERVICE_HUMIDITY_SENSOR HOMEKIT_APPLE_UUID2("82")
#define HOMEKIT_SERVICE_LEAK_SENSOR HOMEKIT_APPLE_UUID2("83")
#define HOMEKIT_SERVICE_LIGHT_SENSOR HOMEKIT_APPLE_UUID2("84")
#define HOMEKIT_SERVICE_MOTION_SENSOR HOMEKIT_APPLE_UUID2("85")
#define HOMEKIT_SERVICE_OCCUPANCY_SENSOR HOMEKIT_APPLE_UUID2("86")
#define HOMEKIT_SERVICE_SMOKE_SENSOR HOMEKIT_APPLE_UUID2("87")
#define HOMEKIT_SERVICE_STATELESS_PROGRAMMABLE_SWITCH HOMEKIT_APPLE_UUID2("89")
#define HOMEKIT_SERVICE_TEMPERATURE_SENSOR HOMEKIT_APPLE_UUID2("8A")
#define HOMEKIT_SERVICE_WINDOW HOMEKIT_APPLE_UUID2("8B")
#define HOMEKIT_SERVICE_WINDOW_COVERING HOMEKIT_APPLE_UUID2("8C")
#define HOMEKIT_SERVICE_BATTERY_SERVICE HOMEKIT_APPLE_UUID2("96")
#define HOMEKIT_SERVICE_CARBON_DIOXIDE_SENSOR HOMEKIT_APPLE_UUID2("97")
#define HOMEKIT_SERVICE_CAMERA_RTP_STREAM_MANAGEMENT HOMEKIT_APPLE_UUID3("110")
#define HOMEKIT_SERVICE_MICROPHONE HOMEKIT_APPLE_UUID3("112")
#define HOMEKIT_SERVICE_SPEAKER HOMEKIT_APPLE_UUID3("113")
#define HOMEKIT_SERVICE_DOORBELL HOMEKIT_APPLE_UUID3("121")
#define HOMEKIT_SERVICE_FAN2 HOMEKIT_APPLE_UUID2("B7")
#define HOMEKIT_SERVICE_SLAT HOMEKIT_APPLE_UUID2("B9")
#define HOMEKIT_SERVICE_FILTER_MAINTENANCE HOMEKIT_APPLE_UUID2("BA")
#define HOMEKIT_SERVICE_AIR_PURIFIER HOMEKIT_APPLE_UUID2("BB")
#define HOMEKIT_SERVICE_SERVICE_LABEL HOMEKIT_APPLE_UUID2("CC")
#define HOMEKIT_SERVICE_FAUCET HOMEKIT_APPLE_UUID2("D7")
#define HOMEKIT_SERVICE_IRRIGATION_SYSTEM HOMEKIT_APPLE_UUID2("CF")
#define HOMEKIT_SERVICE_VALVE HOMEKIT_APPLE_UUID2("D0")


#define HOMEKIT_CHARACTERISTIC_ADMINISTRATOR_ONLY HOMEKIT_APPLE_UUID1("1")
#define HOMEKIT_DECLARE_CHARACTERISTIC_ADMINISTRATOR_ONLY(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_ADMINISTRATOR_ONLY, \
    .description = "Administrator Only Access", \
    .format = homekit_format_bool, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_BOOL_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_AUDIO_FEEDBACK HOMEKIT_APPLE_UUID1("5")
#define HOMEKIT_DECLARE_CHARACTERISTIC_AUDIO_FEEDBACK(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_AUDIO_FEEDBACK, \
    .description = "Audio Feedback", \
    .format = homekit_format_bool, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_BOOL_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_BRIGHTNESS HOMEKIT_APPLE_UUID1("8")
#define HOMEKIT_DECLARE_CHARACTERISTIC_BRIGHTNESS(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_BRIGHTNESS, \
    .description = "Brightness", \
    .format = homekit_format_int, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .unit = homekit_unit_percentage, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_INT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_COOLING_THRESHOLD_TEMPERATURE HOMEKIT_APPLE_UUID1("D")
#define HOMEKIT_DECLARE_CHARACTERISTIC_COOLING_THRESHOLD_TEMPERATURE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_COOLING_THRESHOLD_TEMPERATURE, \
    .description = "Cooling Threshold Temperature", \
    .format = homekit_format_float, \
    .unit = homekit_unit_celsius, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {10}, \
    .max_value = (float[]) {35}, \
    .min_step = (float[]) {0.1}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CURRENT_DOOR_STATE HOMEKIT_APPLE_UUID1("E")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CURRENT_DOOR_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CURRENT_DOOR_STATE, \
    .description = "Current Door State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {4}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 5, \
        .values = (uint8_t[]) { 0, 1, 2, 3, 4 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CURRENT_HEATING_COOLING_STATE HOMEKIT_APPLE_UUID1("F")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CURRENT_HEATING_COOLING_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CURRENT_HEATING_COOLING_STATE, \
    .description = "Current Heating Cooling State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {2}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 3, \
        .values = (uint8_t[]) { 0, 1, 2 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CURRENT_RELATIVE_HUMIDITY HOMEKIT_APPLE_UUID2("10")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CURRENT_RELATIVE_HUMIDITY(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CURRENT_RELATIVE_HUMIDITY, \
    .description = "Current Relative Humidity", \
    .format = homekit_format_float, \
    .unit = homekit_unit_percentage, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CURRENT_TEMPERATURE HOMEKIT_APPLE_UUID2("11")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CURRENT_TEMPERATURE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CURRENT_TEMPERATURE, \
    .description = "Current Temperature", \
    .format = homekit_format_float, \
    .unit = homekit_unit_celsius, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .min_step = (float[]) {0.1}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_FIRMWARE_REVISION HOMEKIT_APPLE_UUID2("52")
#define HOMEKIT_DECLARE_CHARACTERISTIC_FIRMWARE_REVISION(revision, ...) \
    .type = HOMEKIT_CHARACTERISTIC_FIRMWARE_REVISION, \
    .description = "Firmware Revision", \
    .format = homekit_format_string, \
    .permissions = homekit_permissions_paired_read, \
    .value = HOMEKIT_STRING_(revision), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_HARDWARE_REVISION HOMEKIT_APPLE_UUID2("53")
#define HOMEKIT_DECLARE_CHARACTERISTIC_HARDWARE_REVISION(revision, ...) \
    .type = HOMEKIT_CHARACTERISTIC_HARDWARE_REVISION, \
    .description = "Hardware Revision", \
    .format = homekit_format_string, \
    .permissions = homekit_permissions_paired_read, \
    .value = HOMEKIT_STRING_(revision), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_HEATING_THRESHOLD_TEMPERATURE HOMEKIT_APPLE_UUID2("12")
#define HOMEKIT_DECLARE_CHARACTERISTIC_HEATING_THRESHOLD_TEMPERATURE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_HEATING_THRESHOLD_TEMPERATURE, \
    .description = "Heating Threshold Temperature", \
    .format = homekit_format_float, \
    .unit = homekit_unit_celsius, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {25}, \
    .min_step = (float[]) {0.1}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_HUE HOMEKIT_APPLE_UUID2("13")
#define HOMEKIT_DECLARE_CHARACTERISTIC_HUE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_HUE, \
    .description = "Hue", \
    .format = homekit_format_float, \
    .unit = homekit_unit_arcdegrees, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {360}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_IDENTIFY HOMEKIT_APPLE_UUID2("14")
#define HOMEKIT_DECLARE_CHARACTERISTIC_IDENTIFY(callback, ...) \
    .type = HOMEKIT_CHARACTERISTIC_IDENTIFY, \
    .format = homekit_format_bool, \
    .permissions = homekit_permissions_paired_write, \
    .description = "Identify", \
    .setter = callback \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_LOCK_CONTROL_POINT HOMEKIT_APPLE_UUID2("19")
#define HOMEKIT_DECLARE_CHARACTERISTIC_LOCK_CONTROL_POINT(...) \
    .type = HOMEKIT_CHARACTERISTIC_LOCK_CONTROL_POINT, \
    .description = "Lock Control Point", \
    .format = homekit_format_tlv, \
    .permissions = homekit_permissions_paired_write, \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_LOCK_CURRENT_STATE HOMEKIT_APPLE_UUID2("1D")
#define HOMEKIT_DECLARE_CHARACTERISTIC_LOCK_CURRENT_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_LOCK_CURRENT_STATE, \
    .description = "Lock Current State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {3}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 4, \
        .values = (uint8_t[]) { 0, 1, 2, 3 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_LOCK_LAST_KNOWN_ACTION HOMEKIT_APPLE_UUID2("1C")
#define HOMEKIT_DECLARE_CHARACTERISTIC_LOCK_LAST_KNOWN_ACTION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_LOCK_LAST_KNOWN_ACTION, \
    .description = "Lock Last Known Action", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {8}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 9, \
        .values = (uint8_t[]) { 0, 1, 2, 3, 4, 5, 6, 7, 8 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_LOCK_MANAGEMENT_AUTO_SECURITY_TIMEOUT HOMEKIT_APPLE_UUID2("1A")
#define HOMEKIT_DECLARE_CHARACTERISTIC_LOCK_MANAGEMENT_AUTO_SECURITY_TIMEOUT(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_LOCK_MANAGEMENT_AUTO_SECURITY_TIMEOUT, \
    .description = "Lock Management Auto Security Timeout", \
    .format = homekit_format_uint32, \
    .unit = homekit_unit_seconds, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_write \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_UINT32_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_LOCK_TARGET_STATE HOMEKIT_APPLE_UUID2("1E")
#define HOMEKIT_DECLARE_CHARACTERISTIC_LOCK_TARGET_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_LOCK_TARGET_STATE, \
    .description = "Lock Target State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_LOGS HOMEKIT_APPLE_UUID2("1F")
#define HOMEKIT_DECLARE_CHARACTERISTIC_LOGS(...) \
    .type = HOMEKIT_CHARACTERISTIC_LOGS, \
    .description = "Logs", \
    .format = homekit_format_tlv, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_MANUFACTURER HOMEKIT_APPLE_UUID2("20")
#define HOMEKIT_DECLARE_CHARACTERISTIC_MANUFACTURER(manufacturer, ...) \
    .type = HOMEKIT_CHARACTERISTIC_MANUFACTURER, \
    .description = "Manufacturer", \
    .format = homekit_format_string, \
    .permissions = homekit_permissions_paired_read, \
    .value = HOMEKIT_STRING_(manufacturer), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_MODEL HOMEKIT_APPLE_UUID2("21")
#define HOMEKIT_DECLARE_CHARACTERISTIC_MODEL(model, ...) \
    .type = HOMEKIT_CHARACTERISTIC_MODEL, \
    .description = "Model", \
    .format = homekit_format_string, \
    .permissions = homekit_permissions_paired_read, \
    .value = HOMEKIT_STRING_(model), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_MOTION_DETECTED HOMEKIT_APPLE_UUID2("22")
#define HOMEKIT_DECLARE_CHARACTERISTIC_MOTION_DETECTED(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_MOTION_DETECTED, \
    .description = "Motion Detected", \
    .format = homekit_format_bool, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_BOOL_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_NAME HOMEKIT_APPLE_UUID2("23")
#define HOMEKIT_DECLARE_CHARACTERISTIC_NAME(name, ...) \
    .type = HOMEKIT_CHARACTERISTIC_NAME, \
    .description = "Name", \
    .format = homekit_format_string, \
    .permissions = homekit_permissions_paired_read, \
    .value = HOMEKIT_STRING_(name), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_OBSTRUCTION_DETECTED HOMEKIT_APPLE_UUID2("24")
#define HOMEKIT_DECLARE_CHARACTERISTIC_OBSTRUCTION_DETECTED(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_OBSTRUCTION_DETECTED, \
    .description = "Obstruction Detected", \
    .format = homekit_format_bool, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_BOOL_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_ON HOMEKIT_APPLE_UUID2("25")
#define HOMEKIT_DECLARE_CHARACTERISTIC_ON(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_ON, \
    .description = "On", \
    .format = homekit_format_bool, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_BOOL_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_OUTLET_IN_USE HOMEKIT_APPLE_UUID2("26")
#define HOMEKIT_DECLARE_CHARACTERISTIC_OUTLET_IN_USE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_OUTLET_IN_USE, \
    .description = "Outlet In Use", \
    .format = homekit_format_bool, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_BOOL_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_ROTATION_DIRECTION HOMEKIT_APPLE_UUID2("28")
#define HOMEKIT_DECLARE_CHARACTERISTIC_ROTATION_DIRECTION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_ROTATION_DIRECTION, \
    .description = "Rotation Direction", \
    .format = homekit_format_int, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_ROTATION_SPEED HOMEKIT_APPLE_UUID2("29")
#define HOMEKIT_DECLARE_CHARACTERISTIC_ROTATION_SPEED(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_ROTATION_SPEED, \
    .description = "Rotation Speed", \
    .format = homekit_format_float, \
    .unit = homekit_unit_percentage, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .min_step = (float[]) {1}, \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SATURATION HOMEKIT_APPLE_UUID2("2F")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SATURATION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_SATURATION, \
    .description = "Saturation", \
    .format = homekit_format_float, \
    .unit = homekit_unit_percentage, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SERIAL_NUMBER HOMEKIT_APPLE_UUID2("30")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SERIAL_NUMBER(serial, ...) \
    .type = HOMEKIT_CHARACTERISTIC_SERIAL_NUMBER, \
    .description = "Serial Number", \
    .format = homekit_format_string, \
    .permissions = homekit_permissions_paired_read, \
    .value = HOMEKIT_STRING_(serial), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_TARGET_DOOR_STATE HOMEKIT_APPLE_UUID2("32")
#define HOMEKIT_DECLARE_CHARACTERISTIC_TARGET_DOOR_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_TARGET_DOOR_STATE, \
    .description = "Target Door State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_TARGET_HEATING_COOLING_STATE HOMEKIT_APPLE_UUID2("33")
#define HOMEKIT_DECLARE_CHARACTERISTIC_TARGET_HEATING_COOLING_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_TARGET_HEATING_COOLING_STATE, \
    .description = "Target Heating Cooling State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {3}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 4, \
        .values = (uint8_t[]) { 0, 1, 2, 3 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_TARGET_RELATIVE_HUMIDITY HOMEKIT_APPLE_UUID2("34")
#define HOMEKIT_DECLARE_CHARACTERISTIC_TARGET_RELATIVE_HUMIDITY(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_TARGET_RELATIVE_HUMIDITY, \
    .description = "Target Relative Humidity", \
    .format = homekit_format_float, \
    .unit = homekit_unit_percentage, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_TARGET_TEMPERATURE HOMEKIT_APPLE_UUID2("35")
#define HOMEKIT_DECLARE_CHARACTERISTIC_TARGET_TEMPERATURE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_TARGET_TEMPERATURE, \
    .description = "Target Temperature", \
    .format = homekit_format_float, \
    .unit = homekit_unit_celsius, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {10}, \
    .max_value = (float[]) {38}, \
    .min_step = (float[]) {0.1}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_TEMPERATURE_DISPLAY_UNITS HOMEKIT_APPLE_UUID2("36")
#define HOMEKIT_DECLARE_CHARACTERISTIC_TEMPERATURE_DISPLAY_UNITS(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_TEMPERATURE_DISPLAY_UNITS, \
    .description = "Temperature Display Units", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_VERSION HOMEKIT_APPLE_UUID2("37")
#define HOMEKIT_DECLARE_CHARACTERISTIC_VERSION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_VERSION, \
    .description = "Version", \
    .format = homekit_format_string, \
    .permissions = homekit_permissions_paired_read, \
    .value = HOMEKIT_STRING_(_value), \
    ##__VA_ARGS__


#define HOMEKIT_CHARACTERISTIC_AIR_PARTICULATE_DENSITY HOMEKIT_APPLE_UUID2("64")
#define HOMEKIT_DECLARE_CHARACTERISTIC_AIR_PARTICULATE_DENSITY(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_AIR_PARTICULATE_DENSITY, \
    .description = "Air Particulate Density", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1000}, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_AIR_PARTICULATE_SIZE HOMEKIT_APPLE_UUID2("65")
#define HOMEKIT_DECLARE_CHARACTERISTIC_AIR_PARTICULATE_SIZE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_AIR_PARTICULATE_SIZE, \
    .description = "Air Particulate Size", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SECURITY_SYSTEM_CURRENT_STATE HOMEKIT_APPLE_UUID2("66")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SECURITY_SYSTEM_CURRENT_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_SECURITY_SYSTEM_CURRENT_STATE, \
    .description = "Security System Current State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {4}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 5, \
        .values = (uint8_t[]) { 0, 1, 2, 3, 4 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SECURITY_SYSTEM_TARGET_STATE HOMEKIT_APPLE_UUID2("67")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SECURITY_SYSTEM_TARGET_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_SECURITY_SYSTEM_TARGET_STATE, \
    .description = "Security System Target State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {3}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 4, \
        .values = (uint8_t[]) { 0, 1, 2, 3 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_BATTERY_LEVEL HOMEKIT_APPLE_UUID2("68")
#define HOMEKIT_DECLARE_CHARACTERISTIC_BATTERY_LEVEL(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_BATTERY_LEVEL, \
    .description = "Battery Level", \
    .format = homekit_format_uint8, \
    .unit = homekit_unit_percentage, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CONTACT_SENSOR_STATE HOMEKIT_APPLE_UUID2("6A")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CONTACT_SENSOR_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CONTACT_SENSOR_STATE, \
    .description = "Contact Sensor State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CURRENT_AMBIENT_LIGHT_LEVEL HOMEKIT_APPLE_UUID2("6B")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CURRENT_AMBIENT_LIGHT_LEVEL(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CURRENT_AMBIENT_LIGHT_LEVEL, \
    .description = "Current Ambient Light Level", \
    .format = homekit_format_float, \
    .unit = homekit_unit_lux, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0.0001}, \
    .max_value = (float[]) {100000}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CURRENT_HORIZONTAL_TILT_ANGLE HOMEKIT_APPLE_UUID2("6C")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CURRENT_HORIZONTAL_TILT_ANGLE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CURRENT_HORIZONTAL_TILT_ANGLE, \
    .description = "Current Horizontal Tilt Angle", \
    .format = homekit_format_int, \
    .unit = homekit_unit_arcdegrees, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {-90}, \
    .max_value = (float[]) {90}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_INT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CURRENT_POSITION HOMEKIT_APPLE_UUID2("6D")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CURRENT_POSITION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CURRENT_POSITION, \
    .description = "Current Position", \
    .format = homekit_format_uint8, \
    .unit = homekit_unit_percentage, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CURRENT_VERTICAL_TILT_ANGLE HOMEKIT_APPLE_UUID2("6E")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CURRENT_VERTICAL_TILT_ANGLE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CURRENT_VERTICAL_TILT_ANGLE, \
    .description = "Current Vertical Tilt Angle", \
    .format = homekit_format_int, \
    .unit = homekit_unit_arcdegrees, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {-90}, \
    .max_value = (float[]) {90}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_INT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_HOLD_POSITION HOMEKIT_APPLE_UUID2("6F")
#define HOMEKIT_DECLARE_CHARACTERISTIC_HOLD_POSITION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_HOLD_POSITION, \
    .description = "Hold Position", \
    .format = homekit_format_bool, \
    .permissions = homekit_permissions_paired_write, \
    .value = HOMEKIT_BOOL_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_LEAK_DETECTED HOMEKIT_APPLE_UUID2("70")
#define HOMEKIT_DECLARE_CHARACTERISTIC_LEAK_DETECTED(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_LEAK_DETECTED, \
    .description = "Leak Detected", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_OCCUPANCY_DETECTED HOMEKIT_APPLE_UUID2("71")
#define HOMEKIT_DECLARE_CHARACTERISTIC_OCCUPANCY_DETECTED(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_OCCUPANCY_DETECTED, \
    .description = "Occupancy Detected", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_POSITION_STATE HOMEKIT_APPLE_UUID2("72")
#define HOMEKIT_DECLARE_CHARACTERISTIC_POSITION_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_POSITION_STATE, \
    .description = "Position State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {2}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 3, \
        .values = (uint8_t[]) { 0, 1, 2 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_PROGRAMMABLE_SWITCH_EVENT HOMEKIT_APPLE_UUID2("73")
#define HOMEKIT_DECLARE_CHARACTERISTIC_PROGRAMMABLE_SWITCH_EVENT(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_PROGRAMMABLE_SWITCH_EVENT, \
    .description = "Programmable Switch Event", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {2}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 3, \
        .values = (uint8_t[]) { 0, 1, 2 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_STATUS_ACTIVE HOMEKIT_APPLE_UUID2("75")
#define HOMEKIT_DECLARE_CHARACTERISTIC_STATUS_ACTIVE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_STATUS_ACTIVE, \
    .description = "Status Active", \
    .format = homekit_format_bool, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_BOOL_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SMOKE_DETECTED HOMEKIT_APPLE_UUID2("76")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SMOKE_DETECTED(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_SMOKE_DETECTED, \
    .description = "Smoke Detected", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_STATUS_FAULT HOMEKIT_APPLE_UUID2("77")
#define HOMEKIT_DECLARE_CHARACTERISTIC_STATUS_FAULT(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_STATUS_FAULT, \
    .description = "Status Fault", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_STATUS_JAMMED HOMEKIT_APPLE_UUID2("78")
#define HOMEKIT_DECLARE_CHARACTERISTIC_STATUS_JAMMED(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_STATUS_JAMMED, \
    .description = "Status Jammed", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_STATUS_LOW_BATTERY HOMEKIT_APPLE_UUID2("79")
#define HOMEKIT_DECLARE_CHARACTERISTIC_STATUS_LOW_BATTERY(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_STATUS_LOW_BATTERY, \
    .description = "Status Low Battery", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_STATUS_TAMPERED HOMEKIT_APPLE_UUID2("7A")
#define HOMEKIT_DECLARE_CHARACTERISTIC_STATUS_TAMPERED(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_STATUS_TAMPERED, \
    .description = "Status Tampered", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_TARGET_HORIZONTAL_TILT_ANGLE HOMEKIT_APPLE_UUID2("7B")
#define HOMEKIT_DECLARE_CHARACTERISTIC_TARGET_HORIZONTAL_TILT_ANGLE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_TARGET_HORIZONTAL_TILT_ANGLE, \
    .description = "Target Horizontal Tilt Angle", \
    .format = homekit_format_int, \
    .unit = homekit_unit_arcdegrees, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {-90}, \
    .max_value = (float[]) {90}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_INT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_TARGET_POSITION HOMEKIT_APPLE_UUID2("7C")
#define HOMEKIT_DECLARE_CHARACTERISTIC_TARGET_POSITION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_TARGET_POSITION, \
    .description = "Target Position", \
    .format = homekit_format_uint8, \
    .unit = homekit_unit_percentage, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_TARGET_VERTICAL_TILT_ANGLE HOMEKIT_APPLE_UUID2("7D")
#define HOMEKIT_DECLARE_CHARACTERISTIC_TARGET_VERTICAL_TILT_ANGLE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_TARGET_VERTICAL_TILT_ANGLE, \
    .description = "Target Vertical Tilt Angle", \
    .format = homekit_format_int, \
    .unit = homekit_unit_arcdegrees, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {-90}, \
    .max_value = (float[]) {90}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SECURITY_SYSTEM_ALARM HOMEKIT_APPLE_UUID2("8E")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SECURITY_SYSTEM_ALARM(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_SECURITY_SYSTEM_ALARM, \
    .description = "Security System Alarm", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CHARGING_STATE HOMEKIT_APPLE_UUID2("8F")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CHARGING_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CHARGING_STATE, \
    .description = "Charging State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {2}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 3, \
        .values = (uint8_t[]) { 0, 1, 2 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CARBON_MONOXIDE_LEVEL HOMEKIT_APPLE_UUID2("90")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CARBON_MONOXIDE_LEVEL(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CARBON_MONOXIDE_LEVEL, \
    .description = "Carbon Monoxide Level", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CARBON_MONOXIDE_PEAK_LEVEL HOMEKIT_APPLE_UUID2("91")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CARBON_MONOXIDE_PEAK_LEVEL(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CARBON_MONOXIDE_PEAK_LEVEL, \
    .description = "Carbon Monoxide Peak Level", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CARBON_MONOXIDE_DETECTED HOMEKIT_APPLE_UUID2("69")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CARBON_MONOXIDE_DETECTED(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CARBON_MONOXIDE_DETECTED, \
    .description = "Carbon Monoxide Detected", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CARBON_DIOXIDE_LEVEL HOMEKIT_APPLE_UUID2("93")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CARBON_DIOXIDE_LEVEL(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CARBON_DIOXIDE_LEVEL, \
    .description = "Carbon Dioxide Level", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100000}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CARBON_DIOXIDE_PEAK_LEVEL HOMEKIT_APPLE_UUID2("94")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CARBON_DIOXIDE_PEAK_LEVEL(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CARBON_DIOXIDE_PEAK_LEVEL, \
    .description = "Carbon Dioxide Peak Level", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100000}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_AIR_QUALITY HOMEKIT_APPLE_UUID2("95")
#define HOMEKIT_DECLARE_CHARACTERISTIC_AIR_QUALITY(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_AIR_QUALITY, \
    .description = "Air Quality", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {5}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 6, \
        .values = (uint8_t[]) { 0, 1, 2, 3, 4, 5 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_STREAMING_STATUS HOMEKIT_APPLE_UUID3("120")
#define HOMEKIT_DECLARE_CHARACTERISTIC_STREAMING_STATUS(...) \
    .type = HOMEKIT_CHARACTERISTIC_STREAMING_STATUS, \
    .description = "Streaming Status", \
    .format = homekit_format_tlv, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SUPPORTED_VIDEO_STREAM_CONFIGURATION HOMEKIT_APPLE_UUID3("114")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SUPPORTED_VIDEO_STREAM_CONFIGURATION(...) \
    .type = HOMEKIT_CHARACTERISTIC_SUPPORTED_VIDEO_STREAM_CONFIGURATION, \
    .description = "Supported Video Stream Configuration", \
    .format = homekit_format_tlv, \
    .permissions = homekit_permissions_paired_read, \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SUPPORTED_AUDIO_STREAM_CONFIGURATION HOMEKIT_APPLE_UUID3("115")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SUPPORTED_AUDIO_STREAM_CONFIGURATION(...) \
    .type = HOMEKIT_CHARACTERISTIC_SUPPORTED_AUDIO_STREAM_CONFIGURATION, \
    .description = "Supported Audio Stream Configuration", \
    .format = homekit_format_tlv, \
    .permissions = homekit_permissions_paired_read, \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SUPPORTED_RTP_CONFIGURATION HOMEKIT_APPLE_UUID3("116")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SUPPORTED_RTP_CONFIGURATION(...) \
    .type = HOMEKIT_CHARACTERISTIC_SUPPORTED_RTP_CONFIGURATION, \
    .description = "Supported RTP Configuration", \
    .format = homekit_format_tlv, \
    .permissions = homekit_permissions_paired_read, \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SETUP_ENDPOINTS HOMEKIT_APPLE_UUID3("118")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SETUP_ENDPOINTS(...) \
    .type = HOMEKIT_CHARACTERISTIC_SETUP_ENDPOINTS, \
    .description = "Setup Endpoints", \
    .format = homekit_format_tlv, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write, \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SELECTED_RTP_STREAM_CONFIGURATION HOMEKIT_APPLE_UUID3("117")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SELECTED_RTP_STREAM_CONFIGURATION(...) \
    .type = HOMEKIT_CHARACTERISTIC_SELECTED_RTP_STREAM_CONFIGURATION, \
    .description = "Selected RTP Stream Configuration", \
    .format = homekit_format_tlv, \
    .permissions = homekit_permissions_paired_write, \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_VOLUME HOMEKIT_APPLE_UUID3("119")
#define HOMEKIT_DECLARE_CHARACTERISTIC_VOLUME(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_VOLUME, \
    .description = "Volume", \
    .format = homekit_format_uint8, \
    .unit = homekit_unit_percentage, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_MUTE HOMEKIT_APPLE_UUID3("11A")
#define HOMEKIT_DECLARE_CHARACTERISTIC_MUTE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_MUTE, \
    .description = "Mute", \
    .format = homekit_format_bool, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_BOOL_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_NIGHT_VISION HOMEKIT_APPLE_UUID3("11B")
#define HOMEKIT_DECLARE_CHARACTERISTIC_NIGHT_VISION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_NIGHT_VISION, \
    .description = "Night Vision", \
    .format = homekit_format_bool, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_BOOL_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_OPTICAL_ZOOM HOMEKIT_APPLE_UUID3("11C")
#define HOMEKIT_DECLARE_CHARACTERISTIC_OPTICAL_ZOOM(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_OPTICAL_ZOOM, \
    .description = "Optical Zoom", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_DIGITAL_ZOOM HOMEKIT_APPLE_UUID3("11D")
#define HOMEKIT_DECLARE_CHARACTERISTIC_DIGITAL_ZOOM(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_DIGITAL_ZOOM, \
    .description = "Digital Zoom", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_IMAGE_ROTATION HOMEKIT_APPLE_UUID3("11E")
#define HOMEKIT_DECLARE_CHARACTERISTIC_IMAGE_ROTATION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_IMAGE_ROTATION, \
    .description = "Image Rotation", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .valid_values = { \
        .count = 4, \
        .values = (uint8_t[]) { 0, 90, 180, 270 }, \
    }, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_IMAGE_MIRRORING HOMEKIT_APPLE_UUID3("11F")
#define HOMEKIT_DECLARE_CHARACTERISTIC_IMAGE_MIRRORING(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_IMAGE_MIRRORING, \
    .description = "Image Mirroring", \
    .format = homekit_format_bool, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .value = HOMEKIT_BOOL_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_ACCESSORY_FLAGS HOMEKIT_APPLE_UUID2("A6")
#define HOMEKIT_DECLARE_CHARACTERISTIC_ACCESSORY_FLAGS(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_ACCESSORY_FLAGS, \
    .description = "Accessory Flags", \
    .format = homekit_format_uint32, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT32_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_LOCK_PHYSICAL_CONTROLS HOMEKIT_APPLE_UUID2("A7")
#define HOMEKIT_DECLARE_CHARACTERISTIC_LOCK_PHYSICAL_CONTROLS(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_LOCK_PHYSICAL_CONTROLS, \
    .description = "Lock Physical Controls", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CURRENT_AIR_PURIFIER_STATE HOMEKIT_APPLE_UUID2("A9")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CURRENT_AIR_PURIFIER_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CURRENT_AIR_PURIFIER_STATE, \
    .description = "Current Air Purifier State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {2}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 3, \
        .values = (uint8_t[]) { 0, 1, 2 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CURRENT_SLAT_STATE HOMEKIT_APPLE_UUID2("AA")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CURRENT_SLAT_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CURRENT_SLAT_STATE, \
    .description = "Current Slat State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {2}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 3, \
        .values = (uint8_t[]) { 0, 1, 2 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SLAT_TYPE HOMEKIT_APPLE_UUID2("C0")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SLAT_TYPE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_SLAT_TYPE, \
    .description = "Slat", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_FILTER_LIFE_LEVEL HOMEKIT_APPLE_UUID2("AB")
#define HOMEKIT_DECLARE_CHARACTERISTIC_FILTER_LIFE_LEVEL(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_FILTER_LIFE_LEVEL, \
    .description = "Filter Life Level", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {100}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_FILTER_CHANGE_INDICATION HOMEKIT_APPLE_UUID2("AC")
#define HOMEKIT_DECLARE_CHARACTERISTIC_FILTER_CHANGE_INDICATION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_FILTER_CHANGE_INDICATION, \
    .description = "Filter Change Indication", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_RESET_FILTER_INDICATION HOMEKIT_APPLE_UUID2("AD")
#define HOMEKIT_DECLARE_CHARACTERISTIC_RESET_FILTER_INDICATION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_RESET_FILTER_INDICATION, \
    .description = "Reset Filter Indication", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {1}, \
    .max_value = (float[]) {1}, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_TARGET_AIR_PURIFIER_STATE HOMEKIT_APPLE_UUID2("A8")
#define HOMEKIT_DECLARE_CHARACTERISTIC_TARGET_AIR_PURIFIER_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_TARGET_AIR_PURIFIER_STATE, \
    .description = "Target Air Purifier State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_TARGET_FAN_STATE HOMEKIT_APPLE_UUID2("BF")
#define HOMEKIT_DECLARE_CHARACTERISTIC_TARGET_FAN_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_TARGET_FAN_STATE, \
    .description = "Target Fan State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CURRENT_FAN_STATE HOMEKIT_APPLE_UUID2("AF")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CURRENT_FAN_STATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CURRENT_FAN_STATE, \
    .description = "Current Fan State", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {2}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 3, \
        .values = (uint8_t[]) { 0, 1, 2 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_ACTIVE HOMEKIT_APPLE_UUID2("B0")
#define HOMEKIT_DECLARE_CHARACTERISTIC_ACTIVE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_ACTIVE, \
    .description = "Active", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SWING_MODE HOMEKIT_APPLE_UUID2("B6")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SWING_MODE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_SWING_MODE, \
    .description = "Swing Mode", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CURRENT_TILT_ANGLE HOMEKIT_APPLE_UUID2("C1")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CURRENT_TILT_ANGLE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CURRENT_TILT_ANGLE, \
    .description = "Current Tilt Angle", \
    .format = homekit_format_int, \
    .unit = homekit_unit_arcdegrees, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {-90}, \
    .max_value = (float[]) {90}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_INT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_TARGET_TILT_ANGLE HOMEKIT_APPLE_UUID2("C2")
#define HOMEKIT_DECLARE_CHARACTERISTIC_TARGET_TILT_ANGLE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_TARGET_TILT_ANGLE, \
    .description = "Target Tilt Angle", \
    .format = homekit_format_int, \
    .unit = homekit_unit_arcdegrees, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {-90}, \
    .max_value = (float[]) {90}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_INT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_OZONE_DENSITY HOMEKIT_APPLE_UUID2("C3")
#define HOMEKIT_DECLARE_CHARACTERISTIC_OZONE_DENSITY(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_OZONE_DENSITY, \
    .description = "Ozone Density", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1000}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_NITROGEN_DIOXIDE_DENSITY HOMEKIT_APPLE_UUID2("C4")
#define HOMEKIT_DECLARE_CHARACTERISTIC_NITROGEN_DIOXIDE_DENSITY(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_NITROGEN_DIOXIDE_DENSITY, \
    .description = "Nitrogen Dioxide Density", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1000}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SULPHUR_DIOXIDE_DENSITY HOMEKIT_APPLE_UUID2("C5")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SULPHUR_DIOXIDE_DENSITY(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_SULPHUR_DIOXIDE_DENSITY, \
    .description = "Sulphur Dioxide Density", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1000}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_PM25_DENSITY HOMEKIT_APPLE_UUID2("C6")
#define HOMEKIT_DECLARE_CHARACTERISTIC_PM25_DENSITY(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_PM25_DENSITY, \
    .description = "PM25 Density", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1000}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_PM10_DENSITY HOMEKIT_APPLE_UUID2("C7")
#define HOMEKIT_DECLARE_CHARACTERISTIC_PM10_DENSITY(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_PM10_DENSITY, \
    .description = "PM10 Density", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1000}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_VOC_DENSITY HOMEKIT_APPLE_UUID2("C8")
#define HOMEKIT_DECLARE_CHARACTERISTIC_VOC_DENSITY(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_VOC_DENSITY, \
    .description = "VOC Density", \
    .format = homekit_format_float, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1000}, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SERVICE_LABEL_INDEX HOMEKIT_APPLE_UUID2("CB")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SERVICE_LABEL_INDEX(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_SERVICE_LABEL_INDEX, \
    .description = "Service Label Index", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read, \
    .min_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SERVICE_LABEL_NAMESPACE HOMEKIT_APPLE_UUID2("CD")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SERVICE_LABEL_NAMESPACE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_SERVICE_LABEL_NAMESPACE, \
    .description = "Service Label Namespace", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_COLOR_TEMPERATURE HOMEKIT_APPLE_UUID2("CE")
#define HOMEKIT_DECLARE_CHARACTERISTIC_COLOR_TEMPERATURE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_COLOR_TEMPERATURE, \
    .description = "Color Temperature", \
    .format = homekit_format_uint32, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {50}, \
    .max_value = (float[]) {400}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_UINT32_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_IN_USE HOMEKIT_APPLE_UUID2("D2")
#define HOMEKIT_DECLARE_CHARACTERISTIC_IN_USE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_IN_USE, \
    .description = "In Use", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_IS_CONFIGURED HOMEKIT_APPLE_UUID2("D6")
#define HOMEKIT_DECLARE_CHARACTERISTIC_IS_CONFIGURED(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_IS_CONFIGURED, \
    .description = "Is Configured", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {1}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 2, \
        .values = (uint8_t[]) { 0, 1 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_PROGRAM_MODE HOMEKIT_APPLE_UUID2("D1")
#define HOMEKIT_DECLARE_CHARACTERISTIC_PROGRAM_MODE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_PROGRAM_MODE, \
    .description = "Program Mode", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {2}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 3, \
        .values = (uint8_t[]) { 0, 1, 2 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_REMAINING_DURATION HOMEKIT_APPLE_UUID2("D4")
#define HOMEKIT_DECLARE_CHARACTERISTIC_REMAINING_DURATION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_REMAINING_DURATION, \
    .description = "Remaining Duration", \
    .format = homekit_format_uint32, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {3600}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_UINT32_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_SET_DURATION HOMEKIT_APPLE_UUID2("D3")
#define HOMEKIT_DECLARE_CHARACTERISTIC_SET_DURATION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_SET_DURATION, \
    .description = "Remaining Duration", \
    .format = homekit_format_uint32, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_paired_write \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {3600}, \
    .min_step = (float[]) {1}, \
    .value = HOMEKIT_UINT32_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_VALVE_TYPE HOMEKIT_APPLE_UUID2("D5")
#define HOMEKIT_DECLARE_CHARACTERISTIC_VALVE_TYPE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_VALVE_TYPE, \
    .description = "Valve Type", \
    .format = homekit_format_uint8, \
    .permissions = homekit_permissions_paired_read \
                 | homekit_permissions_notify, \
    .min_value = (float[]) {0}, \
    .max_value = (float[]) {3}, \
    .min_step = (float[]) {1}, \
    .valid_values = { \
        .count = 4, \
        .values = (uint8_t[]) { 0, 1, 2, 3 }, \
    }, \
    .value = HOMEKIT_UINT8_(_value), \
    ##__VA_ARGS__

#endif // __HOMEKIT_CHARACTERISTICS__
