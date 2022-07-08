#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// DBC file version
#define VER_AUDI104_MAJ_FMON (0U)
#define VER_AUDI104_MIN_FMON (0U)

#include <audi104-config.h>

#ifdef AUDI104_USE_DIAG_MONITORS

#include <canmonitorutil.h>
/*
This file contains the prototypes of all the functions that will be called
from each Unpack_*name* function to detect DBC related errors
It is the user responsibility to defined these functions in the
separated .c file. If it won't be done the linkage error will happen
*/

void FMon_OBD2_audi104(FrameMonitor_t* _mon, uint32_t msgid);

#endif // AUDI104_USE_DIAG_MONITORS

#ifdef __cplusplus
}
#endif
