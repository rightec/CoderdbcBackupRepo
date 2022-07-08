#include <audi104-fmon.h>

#ifdef AUDI104_USE_DIAG_MONITORS

/*
Put the monitor function content here, keep in mind -
next generation will completely clear all manually added code (!)
*/

void FMon_OBD2_audi104(FrameMonitor_t* _mon, uint32_t msgid)
{
  (void)_mon;
  (void)msgid;
}

#endif // AUDI104_USE_DIAG_MONITORS
