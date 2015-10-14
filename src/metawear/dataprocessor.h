/**
 * @copyright MbientLab License 
 */
#pragma once

#include <stdint.h>

#include "datasignal_fwd.h"
#include "dllmarker.h"

#ifdef	__cplusplus
extern "C" {
#endif

const uint8_t DATA_PROCESSOR_MODULE= 0x9;
const uint8_t DATA_PROCESSOR_ADD= 0x2;

enum Comparison {
    EQ,
    NEQ,
    LT,
    LTE,
    GT,
    GTE
};

enum Arithmetic {
    ADD= 1,
    MULTIPLY,
    DIVIDE,
    MODULUS,
    EXPONENT,
    SQRT,
    L_SHIFT,
    R_SHIFT,
    SUBTRACT,
    ABS_VALUE
};

/*
METAWEAR_API void mbl_mw_dataprocessor_update_id(MblMwDataSignal *signal, uint8_t new_id);
METAWEAR_API MblMwDataSignal* mbl_mw_data_processor_accumulator(uint8_t command[8], const MblMwDataSignal *signal);
METAWEAR_API MblMwDataSignal* mbl_mw_data_processor_comparison(uint8_t command[14], const MblMwDataSignal *signal, uint8_t is_signed, 
        Comparison op, int32_t reference);
METAWEAR_API MblMwDataSignal* mbl_mw_data_processor_math(uint8_t command[13], const MblMwDataSignal *signal, uint8_t is_signed, 
        Arithmetic op, int32_t rhs);
*/

#ifdef	__cplusplus
}
#endif
