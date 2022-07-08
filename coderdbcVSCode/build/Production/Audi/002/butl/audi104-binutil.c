#include "audi104-binutil.h"

// DBC file version
#if (VER_AUDI104_MAJ != (0U)) || (VER_AUDI104_MIN != (0U))
#error The AUDI104 binutil source file has inconsistency with core dbc lib!
#endif

#ifdef __DEF_AUDI104__

audi104_rx_t audi104_rx;

#endif // __DEF_AUDI104__

uint32_t audi104_Receive(audi104_rx_t* _m, const uint8_t* _d, uint32_t _id, uint8_t dlc_)
{
 uint32_t recid = 0;
 if (_id == 0x7E8U) {
  recid = Unpack_OBD2_Audi104(&(_m->OBD2), _d, dlc_);
 }

 return recid;
}

