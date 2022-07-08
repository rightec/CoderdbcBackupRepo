#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <dbccodeconf.h>

#include <audi104.h>

typedef struct
{
  OBD2_t OBD2;
} audi104_rx_t;

// There is no any TX mapped massage.

uint32_t audi104_Receive(audi104_rx_t* m, const uint8_t* d, uint32_t msgid, uint8_t dlc);

#ifdef __DEF_AUDI104__

extern audi104_rx_t audi104_rx;

#endif // __DEF_AUDI104__

#ifdef __cplusplus
}
#endif
