/**
 * @copyright MbientLab License 
 * @file switch.h
 * @brief Push button switch
 */
#pragma once

#include <stdint.h>

#include "datasignal_fwd.h"
#include "dllmarker.h"
#include "metawearboard_fwd.h"

#ifdef	__cplusplus
extern "C" {
#endif

/**
 * Retrieves the data signal representing switch state data
 * @param board     Pointer to the board to retrieve the signal from
 * @return Pointer to the switch data signal
 */
METAWEAR_API const MblMwDataSignal* mbl_mw_switch_get_state_data_signal(const MblMwMetaWearBoard *board);

#ifdef	__cplusplus
}
#endif
