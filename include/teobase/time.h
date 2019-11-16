/**
 * @file teobase/time.h
 * @brief Utility functions for working with time.
 */

#ifndef TEOBASE_TIME_H
#define TEOBASE_TIME_H

#include <stdint.h>

/// Unnamed enumeration with integer constants.
typedef enum {
    MILLISECONDS_IN_SECOND = 1000,  ///< Amount of milliseconds in second.
    MICROSECONDS_IN_SECOND = 1000000,  ///< Amount of microseconds in second.
    MICROSECONDS_IN_MILLISECOND = 1000,  ///< Amount of microseconds in millisecond.
} TEOTIME_CONSTANTS;

/**
 * Get current time in microseconds.
 *
 * @return current time in microseconds since Unix Epoch.
 *
 * @note On 32-bit linux systems return value is limited to maximum value of 32-bit signed integer.
 */

int64_t teotimeGetCurrentTimeUs();

/**
 * Get current time in milliseconds.
 *
 * @return current time in milliseconds since Unix Epoch.
 *
 * @note On 32-bit linux systems return value is limited to maximum value of 32-bit signed integer.
 */

int64_t teotimeGetCurrentTimeMs();

/**
 * Get time in microseconds between saved moment of time and current time.
 *
 * @param time_value Saved moment of time in microseconds.
 *
 * @return Time in microseconds between time_value and current time.
 *
 * @note Return value can be negative if time_value is in the future.
 */

int64_t teotimeGetTimePassedUs(int64_t time_value_us);

/**
 * Get time in milliseconds between saved moment of time and current time.
 *
 * @param time_value Saved moment of time in milliseconds.
 *
 * @return Time in milliseconds between time_value and current time.
 *
 * @note Return value can be negative if time_value is in the future.
 */
int64_t teotimeGetTimePassedMs(int64_t time_value_ms);

#endif
