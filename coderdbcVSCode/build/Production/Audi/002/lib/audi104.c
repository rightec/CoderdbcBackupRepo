#include "audi104.h"


// DBC file version
#if (VER_AUDI104_MAJ != (0U)) || (VER_AUDI104_MIN != (0U))
#error The AUDI104 dbc source files have different versions
#endif

#ifdef AUDI104_USE_DIAG_MONITORS
// Function prototypes to be called each time CAN frame is unpacked
// FMon function may detect RC, CRC or DLC violation
#include <audi104-fmon.h>

#endif // AUDI104_USE_DIAG_MONITORS


// This function performs extension of sign for the signals
// which have non-aligned to power of 2 bit's width.
// The types 'bitext_t' and 'ubitext_t' define maximal bit width which
// can be correctly handled. You need to select type which can contain
// n+1 bits where n is the largest signed signal width. For example if
// the most wide signed signal has a width of 31 bits you need to set
// bitext_t as int32_t and ubitext_t as uint32_t
// Defined these typedefs in @dbccodeconf.h or locally in 'dbcdrvname'-config.h
static bitext_t __ext_sig__(ubitext_t val, uint8_t bits)
{
  ubitext_t const m = 1u << (bits - 1);
  return (val ^ m) - m;
}

uint32_t Unpack_OBD2_Audi104(OBD2_t* _m, const uint8_t* _d, uint8_t dlc_)
{
  (void)dlc_;
  _m->length = (_d[0] & (0xFFU));
  _m->service = (_d[1] & (0x0FU));
  _m->response = ((_d[1] >> 4) & (0x0FU));
  _m->ParameterID_Service02 = (_d[2] & (0xFFU));
  _m->ParameterID_Service01 = (_d[2] & (0xFFU));
  _m->S1_PID_47_AbsThrottlePosB_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_47_AbsThrottlePosB_phys = (sigfloat_t)(AUDI104_S1_PID_47_AbsThrottlePosB_ro_fromS(_m->S1_PID_47_AbsThrottlePosB_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_55_ShortSecOxyTrimBank1_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_55_ShortSecOxyTrimBank1_phys = (sigfloat_t)(AUDI104_S1_PID_55_ShortSecOxyTrimBank1_ro_fromS(_m->S1_PID_55_ShortSecOxyTrimBank1_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_48_AbsThrottlePosC_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_48_AbsThrottlePosC_phys = (sigfloat_t)(AUDI104_S1_PID_48_AbsThrottlePosC_ro_fromS(_m->S1_PID_48_AbsThrottlePosC_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_49_AbsThrottlePosD_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_49_AbsThrottlePosD_phys = (sigfloat_t)(AUDI104_S1_PID_49_AbsThrottlePosD_ro_fromS(_m->S1_PID_49_AbsThrottlePosD_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_4A_AbsThrottlePosE_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_4A_AbsThrottlePosE_phys = (sigfloat_t)(AUDI104_S1_PID_4A_AbsThrottlePosE_ro_fromS(_m->S1_PID_4A_AbsThrottlePosE_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_4B_AbsThrottlePosF_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_4B_AbsThrottlePosF_phys = (sigfloat_t)(AUDI104_S1_PID_4B_AbsThrottlePosF_ro_fromS(_m->S1_PID_4B_AbsThrottlePosF_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_4C_CmdThrottleAct_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_4C_CmdThrottleAct_phys = (sigfloat_t)(AUDI104_S1_PID_4C_CmdThrottleAct_ro_fromS(_m->S1_PID_4C_CmdThrottleAct_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_4D_TimeRunMILOn = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->S1_PID_4E_TimeSinceCodeClear = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->S1_PID_4F_Max_FAER = (_d[3] & (0xFFU));
  _m->S1_PID_50_Max_AirFlowMAF_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_50_Max_AirFlowMAF_phys = AUDI104_S1_PID_50_Max_AirFlowMAF_ro_fromS(_m->S1_PID_50_Max_AirFlowMAF_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_51_FuelType = (_d[3] & (0xFFU));
  _m->S1_PID_52_EthanolFuelPct_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_52_EthanolFuelPct_phys = (sigfloat_t)(AUDI104_S1_PID_52_EthanolFuelPct_ro_fromS(_m->S1_PID_52_EthanolFuelPct_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_53_AbsEvapSysVapPres_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_53_AbsEvapSysVapPres_phys = (sigfloat_t)(AUDI104_S1_PID_53_AbsEvapSysVapPres_ro_fromS(_m->S1_PID_53_AbsEvapSysVapPres_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_54_EvapSysVapPres_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_54_EvapSysVapPres_phys = AUDI104_S1_PID_54_EvapSysVapPres_ro_fromS(_m->S1_PID_54_EvapSysVapPres_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_37_OxySensor4_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_37_OxySensor4_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_37_OxySensor4_FAER_ro_fromS(_m->S1_PID_37_OxySensor4_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_46_AmbientAirTemp_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_46_AmbientAirTemp_phys = AUDI104_S1_PID_46_AmbientAirTemp_ro_fromS(_m->S1_PID_46_AmbientAirTemp_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_45_RelThrottlePos_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_45_RelThrottlePos_phys = (sigfloat_t)(AUDI104_S1_PID_45_RelThrottlePos_ro_fromS(_m->S1_PID_45_RelThrottlePos_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_44_FuelAirCmdEquiv_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_44_FuelAirCmdEquiv_phys = (sigfloat_t)(AUDI104_S1_PID_44_FuelAirCmdEquiv_ro_fromS(_m->S1_PID_44_FuelAirCmdEquiv_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_43_AbsLoadValue_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_43_AbsLoadValue_phys = (sigfloat_t)(AUDI104_S1_PID_43_AbsLoadValue_ro_fromS(_m->S1_PID_43_AbsLoadValue_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_42_ControlModuleVolt_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_42_ControlModuleVolt_phys = (sigfloat_t)(AUDI104_S1_PID_42_ControlModuleVolt_ro_fromS(_m->S1_PID_42_ControlModuleVolt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_41_MonStatusDriveCycle = ((_d[3] & (0xFFU)) << 24) | ((_d[4] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->S1_PID_40_PIDsSupported_41_60 = ((_d[3] & (0xFFU)) << 24) | ((_d[4] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->S1_PID_3F_CatTempBank2Sens2_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_3F_CatTempBank2Sens2_phys = (sigfloat_t)(AUDI104_S1_PID_3F_CatTempBank2Sens2_ro_fromS(_m->S1_PID_3F_CatTempBank2Sens2_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_3E_CatTempBank1Sens2_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_3E_CatTempBank1Sens2_phys = (sigfloat_t)(AUDI104_S1_PID_3E_CatTempBank1Sens2_ro_fromS(_m->S1_PID_3E_CatTempBank1Sens2_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_3D_CatTempBank2Sens1_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_3D_CatTempBank2Sens1_phys = (sigfloat_t)(AUDI104_S1_PID_3D_CatTempBank2Sens1_ro_fromS(_m->S1_PID_3D_CatTempBank2Sens1_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_3C_CatTempBank1Sens1_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_3C_CatTempBank1Sens1_phys = (sigfloat_t)(AUDI104_S1_PID_3C_CatTempBank1Sens1_ro_fromS(_m->S1_PID_3C_CatTempBank1Sens1_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_3B_OxySensor8_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_3B_OxySensor8_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_3B_OxySensor8_FAER_ro_fromS(_m->S1_PID_3B_OxySensor8_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_00_PIDsSupported_01_20 = ((_d[3] & (0xFFU)) << 24) | ((_d[4] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->S1_PID_39_OxySensor6_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_39_OxySensor6_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_39_OxySensor6_FAER_ro_fromS(_m->S1_PID_39_OxySensor6_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_38_OxySensor5_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_38_OxySensor5_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_38_OxySensor5_FAER_ro_fromS(_m->S1_PID_38_OxySensor5_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_3A_OxySensor7_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_3A_OxySensor7_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_3A_OxySensor7_FAER_ro_fromS(_m->S1_PID_3A_OxySensor7_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_66_MAFSensor = (_d[3] & (0xFFU));
  _m->S2_PID_02_FreezeDTC = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->S1_PID_C0_PIDsSupported_C1_E0 = ((_d[3] & (0xFFU)) << 24) | ((_d[4] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->S1_PID_A0_PIDsSupported_A1_C0 = ((_d[3] & (0xFFU)) << 24) | ((_d[4] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->S1_PID_8E_EngFrictionPctTorq_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_8E_EngFrictionPctTorq_phys = AUDI104_S1_PID_8E_EngFrictionPctTorq_ro_fromS(_m->S1_PID_8E_EngFrictionPctTorq_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_80_PIDsSupported_81_A0 = ((_d[3] & (0xFFU)) << 24) | ((_d[4] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->S1_PID_70_BoostPresCntrl = (_d[3] & (0xFFU));
  _m->S1_PID_6F_TurboComprPres = (_d[3] & (0xFFU));
  _m->S1_PID_6E_InjPresContrSys = (_d[3] & (0xFFU));
  _m->S1_PID_6D_FuelPresContrSys = (_d[3] & (0xFFU));
  _m->S1_PID_6C_CmdThrottleActRel = (_d[3] & (0xFFU));
  _m->S1_PID_6B_ExhaustGasTemp = (_d[3] & (0xFFU));
  _m->S1_PID_6A_CmdDieselIntAir = (_d[3] & (0xFFU));
  _m->S1_PID_69_CmdEGR_EGRError = (_d[3] & (0xFFU));
  _m->S1_PID_68_IntakeAirTempSens = (_d[3] & (0xFFU));
  _m->S1_PID_67_EngineCoolantTemp = (_d[3] & (0xFFU));
  _m->S1_PID_56_LongSecOxyTrimBank1_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_56_LongSecOxyTrimBank1_phys = (sigfloat_t)(AUDI104_S1_PID_56_LongSecOxyTrimBank1_ro_fromS(_m->S1_PID_56_LongSecOxyTrimBank1_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_65_AuxInputOutput = (_d[3] & (0xFFU));
  _m->S1_PID_64_EngPctTorq_Idle_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_64_EngPctTorq_Idle_phys = AUDI104_S1_PID_64_EngPctTorq_Idle_ro_fromS(_m->S1_PID_64_EngPctTorq_Idle_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_63_EngRefTorq = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->S1_PID_62_ActualEngTorqPct_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_62_ActualEngTorqPct_phys = AUDI104_S1_PID_62_ActualEngTorqPct_ro_fromS(_m->S1_PID_62_ActualEngTorqPct_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_61_DemandEngTorqPct_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_61_DemandEngTorqPct_phys = AUDI104_S1_PID_61_DemandEngTorqPct_ro_fromS(_m->S1_PID_61_DemandEngTorqPct_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_60_PIDsSupported_61_80 = ((_d[3] & (0xFFU)) << 24) | ((_d[4] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->S1_PID_5F_EmissionReq = (_d[3] & (0xFFU));
  _m->S1_PID_5E_EngineFuelRate_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_5E_EngineFuelRate_phys = (sigfloat_t)(AUDI104_S1_PID_5E_EngineFuelRate_ro_fromS(_m->S1_PID_5E_EngineFuelRate_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_5D_FuelInjectionTiming_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_5D_FuelInjectionTiming_phys = (sigfloat_t)(AUDI104_S1_PID_5D_FuelInjectionTiming_ro_fromS(_m->S1_PID_5D_FuelInjectionTiming_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_5C_EngineOilTemp_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_5C_EngineOilTemp_phys = AUDI104_S1_PID_5C_EngineOilTemp_ro_fromS(_m->S1_PID_5C_EngineOilTemp_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_5B_HybrBatPackRemLife_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_5B_HybrBatPackRemLife_phys = (sigfloat_t)(AUDI104_S1_PID_5B_HybrBatPackRemLife_ro_fromS(_m->S1_PID_5B_HybrBatPackRemLife_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_5A_RelAccelPedalPos_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_5A_RelAccelPedalPos_phys = (sigfloat_t)(AUDI104_S1_PID_5A_RelAccelPedalPos_ro_fromS(_m->S1_PID_5A_RelAccelPedalPos_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_59_FuelRailAbsPres_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_59_FuelRailAbsPres_phys = AUDI104_S1_PID_59_FuelRailAbsPres_ro_fromS(_m->S1_PID_59_FuelRailAbsPres_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_58_LongSecOxyTrimBank2_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_58_LongSecOxyTrimBank2_phys = (sigfloat_t)(AUDI104_S1_PID_58_LongSecOxyTrimBank2_ro_fromS(_m->S1_PID_58_LongSecOxyTrimBank2_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_57_ShortSecOxyTrimBank2_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_57_ShortSecOxyTrimBank2_phys = (sigfloat_t)(AUDI104_S1_PID_57_ShortSecOxyTrimBank2_ro_fromS(_m->S1_PID_57_ShortSecOxyTrimBank2_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_22_FuelRailPres_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_22_FuelRailPres_phys = (sigfloat_t)(AUDI104_S1_PID_22_FuelRailPres_ro_fromS(_m->S1_PID_22_FuelRailPres_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_28_OxySensor5_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_28_OxySensor5_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_28_OxySensor5_FAER_ro_fromS(_m->S1_PID_28_OxySensor5_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_0D_VehicleSpeed = (_d[3] & (0xFFU));
  _m->S1_PID_0E_TimingAdvance_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_0E_TimingAdvance_phys = (sigfloat_t)(AUDI104_S1_PID_0E_TimingAdvance_ro_fromS(_m->S1_PID_0E_TimingAdvance_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_26_OxySensor3_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_26_OxySensor3_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_26_OxySensor3_FAER_ro_fromS(_m->S1_PID_26_OxySensor3_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_0F_IntakeAirTemperature_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_0F_IntakeAirTemperature_phys = AUDI104_S1_PID_0F_IntakeAirTemperature_ro_fromS(_m->S1_PID_0F_IntakeAirTemperature_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_10_MAFAirFlowRate_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_10_MAFAirFlowRate_phys = (sigfloat_t)(AUDI104_S1_PID_10_MAFAirFlowRate_ro_fromS(_m->S1_PID_10_MAFAirFlowRate_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_11_ThrottlePosition_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_11_ThrottlePosition_phys = (sigfloat_t)(AUDI104_S1_PID_11_ThrottlePosition_ro_fromS(_m->S1_PID_11_ThrottlePosition_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_12_CmdSecAirStatus = (_d[3] & (0xFFU));
  _m->S1_PID_25_OxySensor2_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_25_OxySensor2_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_25_OxySensor2_FAER_ro_fromS(_m->S1_PID_25_OxySensor2_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_14_OxySensor1_Volt_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_14_OxySensor1_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_14_OxySensor1_Volt_ro_fromS(_m->S1_PID_14_OxySensor1_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_24_OxySensor1_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_24_OxySensor1_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_24_OxySensor1_FAER_ro_fromS(_m->S1_PID_24_OxySensor1_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_23_FuelRailGaug_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_23_FuelRailGaug_phys = AUDI104_S1_PID_23_FuelRailGaug_ro_fromS(_m->S1_PID_23_FuelRailGaug_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_27_OxySensor4_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_27_OxySensor4_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_27_OxySensor4_FAER_ro_fromS(_m->S1_PID_27_OxySensor4_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_21_DistanceMILOn = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->S1_PID_20_PIDsSupported_21_40 = ((_d[3] & (0xFFU)) << 24) | ((_d[4] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->S1_PID_36_OxySensor3_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_36_OxySensor3_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_36_OxySensor3_FAER_ro_fromS(_m->S1_PID_36_OxySensor3_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_1F_TimeSinceEngStart = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->S1_PID_15_OxySensor2_Volt_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_15_OxySensor2_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_15_OxySensor2_Volt_ro_fromS(_m->S1_PID_15_OxySensor2_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_1C_OBDStandard = (_d[3] & (0xFFU));
  _m->S1_PID_1B_OxySensor8_Volt_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_1B_OxySensor8_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_1B_OxySensor8_Volt_ro_fromS(_m->S1_PID_1B_OxySensor8_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_16_OxySensor3_Volt_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_16_OxySensor3_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_16_OxySensor3_Volt_ro_fromS(_m->S1_PID_16_OxySensor3_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_1A_OxySensor7_Volt_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_1A_OxySensor7_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_1A_OxySensor7_Volt_ro_fromS(_m->S1_PID_1A_OxySensor7_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_19_OxySensor6_Volt_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_19_OxySensor6_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_19_OxySensor6_Volt_ro_fromS(_m->S1_PID_19_OxySensor6_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_17_OxySensor4_Volt_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_17_OxySensor4_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_17_OxySensor4_Volt_ro_fromS(_m->S1_PID_17_OxySensor4_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_18_OxySensor5_Volt_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_18_OxySensor5_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_18_OxySensor5_Volt_ro_fromS(_m->S1_PID_18_OxySensor5_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_29_OxySensor6_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_29_OxySensor6_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_29_OxySensor6_FAER_ro_fromS(_m->S1_PID_29_OxySensor6_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_01_MonitorStatus = ((_d[3] & (0xFFU)) << 24) | ((_d[4] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->S1_PID_02_FreezeDTC = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->S1_PID_03_FuelSystemStatus = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->S1_PID_35_OxySensor2_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_35_OxySensor2_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_35_OxySensor2_FAER_ro_fromS(_m->S1_PID_35_OxySensor2_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_04_CalcEngineLoad_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_04_CalcEngineLoad_phys = (sigfloat_t)(AUDI104_S1_PID_04_CalcEngineLoad_ro_fromS(_m->S1_PID_04_CalcEngineLoad_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_05_EngineCoolantTemp_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_05_EngineCoolantTemp_phys = AUDI104_S1_PID_05_EngineCoolantTemp_ro_fromS(_m->S1_PID_05_EngineCoolantTemp_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_06_ShortFuelTrimBank1_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_06_ShortFuelTrimBank1_phys = (sigfloat_t)(AUDI104_S1_PID_06_ShortFuelTrimBank1_ro_fromS(_m->S1_PID_06_ShortFuelTrimBank1_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_34_OxySensor1_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_34_OxySensor1_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_34_OxySensor1_FAER_ro_fromS(_m->S1_PID_34_OxySensor1_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_07_LongFuelTrimBank1_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_07_LongFuelTrimBank1_phys = (sigfloat_t)(AUDI104_S1_PID_07_LongFuelTrimBank1_ro_fromS(_m->S1_PID_07_LongFuelTrimBank1_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_33_AbsBaroPres = (_d[3] & (0xFFU));
  _m->S1_PID_08_ShortFuelTrimBank2_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_08_ShortFuelTrimBank2_phys = (sigfloat_t)(AUDI104_S1_PID_08_ShortFuelTrimBank2_ro_fromS(_m->S1_PID_08_ShortFuelTrimBank2_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_32_EvapSysVaporPres_ro = __ext_sig__(( ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU)) ), 16);
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_32_EvapSysVaporPres_phys = (sigfloat_t)(AUDI104_S1_PID_32_EvapSysVaporPres_ro_fromS(_m->S1_PID_32_EvapSysVaporPres_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_30_WarmUpsSinceCodeClear = (_d[3] & (0xFFU));
  _m->S1_PID_0C_EngineRPM_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_0C_EngineRPM_phys = (sigfloat_t)(AUDI104_S1_PID_0C_EngineRPM_ro_fromS(_m->S1_PID_0C_EngineRPM_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_0B_IntakeManiAbsPress = (_d[3] & (0xFFU));
  _m->S1_PID_2A_OxySensor7_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_2A_OxySensor7_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_2A_OxySensor7_FAER_ro_fromS(_m->S1_PID_2A_OxySensor7_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_0A_FuelPressure_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_0A_FuelPressure_phys = AUDI104_S1_PID_0A_FuelPressure_ro_fromS(_m->S1_PID_0A_FuelPressure_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_2B_OxySensor8_FAER_ro = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_2B_OxySensor8_FAER_phys = (sigfloat_t)(AUDI104_S1_PID_2B_OxySensor8_FAER_ro_fromS(_m->S1_PID_2B_OxySensor8_FAER_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_09_LongFuelTrimBank2_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_09_LongFuelTrimBank2_phys = (sigfloat_t)(AUDI104_S1_PID_09_LongFuelTrimBank2_ro_fromS(_m->S1_PID_09_LongFuelTrimBank2_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_2C_CmdEGR_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_2C_CmdEGR_phys = (sigfloat_t)(AUDI104_S1_PID_2C_CmdEGR_ro_fromS(_m->S1_PID_2C_CmdEGR_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_2D_EGRError_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_2D_EGRError_phys = (sigfloat_t)(AUDI104_S1_PID_2D_EGRError_ro_fromS(_m->S1_PID_2D_EGRError_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_2E_CmdEvapPurge_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_2E_CmdEvapPurge_phys = (sigfloat_t)(AUDI104_S1_PID_2E_CmdEvapPurge_ro_fromS(_m->S1_PID_2E_CmdEvapPurge_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_2F_FuelTankLevel_ro = (_d[3] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_2F_FuelTankLevel_phys = (sigfloat_t)(AUDI104_S1_PID_2F_FuelTankLevel_ro_fromS(_m->S1_PID_2F_FuelTankLevel_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_31_DistanceSinceCodeClear = ((_d[3] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->S1_PID_15_OxySensor2_STFT_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_15_OxySensor2_STFT_phys = (sigfloat_t)(AUDI104_S1_PID_15_OxySensor2_STFT_ro_fromS(_m->S1_PID_15_OxySensor2_STFT_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_64_EngPctTorq_EP1_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_64_EngPctTorq_EP1_phys = AUDI104_S1_PID_64_EngPctTorq_EP1_ro_fromS(_m->S1_PID_64_EngPctTorq_EP1_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_16_OxySensor3_STFT_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_16_OxySensor3_STFT_phys = (sigfloat_t)(AUDI104_S1_PID_16_OxySensor3_STFT_ro_fromS(_m->S1_PID_16_OxySensor3_STFT_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_14_OxySensor1_STFT_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_14_OxySensor1_STFT_phys = (sigfloat_t)(AUDI104_S1_PID_14_OxySensor1_STFT_ro_fromS(_m->S1_PID_14_OxySensor1_STFT_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_56_LongSecOxyTrimBank3_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_56_LongSecOxyTrimBank3_phys = (sigfloat_t)(AUDI104_S1_PID_56_LongSecOxyTrimBank3_ro_fromS(_m->S1_PID_56_LongSecOxyTrimBank3_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_18_OxySensor5_STFT_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_18_OxySensor5_STFT_phys = (sigfloat_t)(AUDI104_S1_PID_18_OxySensor5_STFT_ro_fromS(_m->S1_PID_18_OxySensor5_STFT_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_4F_Max_OxySensVol = (_d[4] & (0xFFU));
  _m->S1_PID_55_ShortSecOxyTrimBank3_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_55_ShortSecOxyTrimBank3_phys = (sigfloat_t)(AUDI104_S1_PID_55_ShortSecOxyTrimBank3_ro_fromS(_m->S1_PID_55_ShortSecOxyTrimBank3_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_57_ShortSecOxyTrimBank4_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_57_ShortSecOxyTrimBank4_phys = (sigfloat_t)(AUDI104_S1_PID_57_ShortSecOxyTrimBank4_ro_fromS(_m->S1_PID_57_ShortSecOxyTrimBank4_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_58_LongSecOxyTrimBank4_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_58_LongSecOxyTrimBank4_phys = (sigfloat_t)(AUDI104_S1_PID_58_LongSecOxyTrimBank4_ro_fromS(_m->S1_PID_58_LongSecOxyTrimBank4_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_17_OxySensor4_STFT_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_17_OxySensor4_STFT_phys = (sigfloat_t)(AUDI104_S1_PID_17_OxySensor4_STFT_ro_fromS(_m->S1_PID_17_OxySensor4_STFT_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_1B_OxySensor8_STFT_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_1B_OxySensor8_STFT_phys = (sigfloat_t)(AUDI104_S1_PID_1B_OxySensor8_STFT_ro_fromS(_m->S1_PID_1B_OxySensor8_STFT_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_1A_OxySensor7_STFT_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_1A_OxySensor7_STFT_phys = (sigfloat_t)(AUDI104_S1_PID_1A_OxySensor7_STFT_ro_fromS(_m->S1_PID_1A_OxySensor7_STFT_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_19_OxySensor6_STFT_ro = (_d[4] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_19_OxySensor6_STFT_phys = (sigfloat_t)(AUDI104_S1_PID_19_OxySensor6_STFT_ro_fromS(_m->S1_PID_19_OxySensor6_STFT_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_35_OxySensor2_Crnt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_35_OxySensor2_Crnt_phys = (sigfloat_t)(AUDI104_S1_PID_35_OxySensor2_Crnt_ro_fromS(_m->S1_PID_35_OxySensor2_Crnt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_37_OxySensor4_Crnt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_37_OxySensor4_Crnt_phys = (sigfloat_t)(AUDI104_S1_PID_37_OxySensor4_Crnt_ro_fromS(_m->S1_PID_37_OxySensor4_Crnt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_38_OxySensor5_Crnt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_38_OxySensor5_Crnt_phys = (sigfloat_t)(AUDI104_S1_PID_38_OxySensor5_Crnt_ro_fromS(_m->S1_PID_38_OxySensor5_Crnt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_34_OxySensor1_Crnt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_34_OxySensor1_Crnt_phys = (sigfloat_t)(AUDI104_S1_PID_34_OxySensor1_Crnt_ro_fromS(_m->S1_PID_34_OxySensor1_Crnt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_39_OxySensor6_Crnt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_39_OxySensor6_Crnt_phys = (sigfloat_t)(AUDI104_S1_PID_39_OxySensor6_Crnt_ro_fromS(_m->S1_PID_39_OxySensor6_Crnt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_36_OxySensor3_Crnt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_36_OxySensor3_Crnt_phys = (sigfloat_t)(AUDI104_S1_PID_36_OxySensor3_Crnt_ro_fromS(_m->S1_PID_36_OxySensor3_Crnt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_3A_OxySensor7_Crnt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_3A_OxySensor7_Crnt_phys = (sigfloat_t)(AUDI104_S1_PID_3A_OxySensor7_Crnt_ro_fromS(_m->S1_PID_3A_OxySensor7_Crnt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_3B_OxySensor8_Crnt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_3B_OxySensor8_Crnt_phys = (sigfloat_t)(AUDI104_S1_PID_3B_OxySensor8_Crnt_ro_fromS(_m->S1_PID_3B_OxySensor8_Crnt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_2B_OxySensor8_Volt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_2B_OxySensor8_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_2B_OxySensor8_Volt_ro_fromS(_m->S1_PID_2B_OxySensor8_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_2A_OxySensor7_Volt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_2A_OxySensor7_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_2A_OxySensor7_Volt_ro_fromS(_m->S1_PID_2A_OxySensor7_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_29_OxySensor6_Volt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_29_OxySensor6_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_29_OxySensor6_Volt_ro_fromS(_m->S1_PID_29_OxySensor6_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_28_OxySensor5_Volt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_28_OxySensor5_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_28_OxySensor5_Volt_ro_fromS(_m->S1_PID_28_OxySensor5_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_27_OxySensor4_Volt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_27_OxySensor4_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_27_OxySensor4_Volt_ro_fromS(_m->S1_PID_27_OxySensor4_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_26_OxySensor3_Volt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_26_OxySensor3_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_26_OxySensor3_Volt_ro_fromS(_m->S1_PID_26_OxySensor3_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_25_OxySensor2_Volt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_25_OxySensor2_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_25_OxySensor2_Volt_ro_fromS(_m->S1_PID_25_OxySensor2_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_4F_Max_OxySensCrnt = (_d[5] & (0xFFU));
  _m->S1_PID_24_OxySensor1_Volt_ro = ((_d[5] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_24_OxySensor1_Volt_phys = (sigfloat_t)(AUDI104_S1_PID_24_OxySensor1_Volt_ro_fromS(_m->S1_PID_24_OxySensor1_Volt_ro));
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_64_EngPctTorq_EP2_ro = (_d[5] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_64_EngPctTorq_EP2_phys = AUDI104_S1_PID_64_EngPctTorq_EP2_ro_fromS(_m->S1_PID_64_EngPctTorq_EP2_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_4F_Max_IntManiAbsPres_ro = (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_4F_Max_IntManiAbsPres_phys = AUDI104_S1_PID_4F_Max_IntManiAbsPres_ro_fromS(_m->S1_PID_4F_Max_IntManiAbsPres_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_64_EngPctTorq_EP3_ro = (_d[6] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_64_EngPctTorq_EP3_phys = AUDI104_S1_PID_64_EngPctTorq_EP3_ro_fromS(_m->S1_PID_64_EngPctTorq_EP3_ro);
#endif // AUDI104_USE_SIGFLOAT

  _m->S1_PID_64_EngPctTorq_EP4_ro = (_d[7] & (0xFFU));
#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_64_EngPctTorq_EP4_phys = AUDI104_S1_PID_64_EngPctTorq_EP4_ro_fromS(_m->S1_PID_64_EngPctTorq_EP4_ro);
#endif // AUDI104_USE_SIGFLOAT

#ifdef AUDI104_USE_DIAG_MONITORS
  _m->mon1.dlc_error = (dlc_ < OBD2_DLC);
  _m->mon1.last_cycle = GetSystemTick();
  _m->mon1.frame_cnt++;

  FMon_OBD2_audi104(&_m->mon1, OBD2_CANID);
#endif // AUDI104_USE_DIAG_MONITORS

  return OBD2_CANID;
}

#ifdef AUDI104_USE_CANSTRUCT

uint32_t Pack_OBD2_Audi104(OBD2_t* _m, __CoderDbcCanFrame_t__* cframe)
{
  uint8_t i; for (i = 0; (i < OBD2_DLC) && (i < 8); cframe->Data[i++] = 0);

#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_47_AbsThrottlePosB_ro = AUDI104_S1_PID_47_AbsThrottlePosB_ro_toS(_m->S1_PID_47_AbsThrottlePosB_phys);
  _m->S1_PID_55_ShortSecOxyTrimBank1_ro = AUDI104_S1_PID_55_ShortSecOxyTrimBank1_ro_toS(_m->S1_PID_55_ShortSecOxyTrimBank1_phys);
  _m->S1_PID_48_AbsThrottlePosC_ro = AUDI104_S1_PID_48_AbsThrottlePosC_ro_toS(_m->S1_PID_48_AbsThrottlePosC_phys);
  _m->S1_PID_49_AbsThrottlePosD_ro = AUDI104_S1_PID_49_AbsThrottlePosD_ro_toS(_m->S1_PID_49_AbsThrottlePosD_phys);
  _m->S1_PID_4A_AbsThrottlePosE_ro = AUDI104_S1_PID_4A_AbsThrottlePosE_ro_toS(_m->S1_PID_4A_AbsThrottlePosE_phys);
  _m->S1_PID_4B_AbsThrottlePosF_ro = AUDI104_S1_PID_4B_AbsThrottlePosF_ro_toS(_m->S1_PID_4B_AbsThrottlePosF_phys);
  _m->S1_PID_4C_CmdThrottleAct_ro = AUDI104_S1_PID_4C_CmdThrottleAct_ro_toS(_m->S1_PID_4C_CmdThrottleAct_phys);
  _m->S1_PID_50_Max_AirFlowMAF_ro = AUDI104_S1_PID_50_Max_AirFlowMAF_ro_toS(_m->S1_PID_50_Max_AirFlowMAF_phys);
  _m->S1_PID_52_EthanolFuelPct_ro = AUDI104_S1_PID_52_EthanolFuelPct_ro_toS(_m->S1_PID_52_EthanolFuelPct_phys);
  _m->S1_PID_53_AbsEvapSysVapPres_ro = AUDI104_S1_PID_53_AbsEvapSysVapPres_ro_toS(_m->S1_PID_53_AbsEvapSysVapPres_phys);
  _m->S1_PID_54_EvapSysVapPres_ro = AUDI104_S1_PID_54_EvapSysVapPres_ro_toS(_m->S1_PID_54_EvapSysVapPres_phys);
  _m->S1_PID_37_OxySensor4_FAER_ro = AUDI104_S1_PID_37_OxySensor4_FAER_ro_toS(_m->S1_PID_37_OxySensor4_FAER_phys);
  _m->S1_PID_46_AmbientAirTemp_ro = AUDI104_S1_PID_46_AmbientAirTemp_ro_toS(_m->S1_PID_46_AmbientAirTemp_phys);
  _m->S1_PID_45_RelThrottlePos_ro = AUDI104_S1_PID_45_RelThrottlePos_ro_toS(_m->S1_PID_45_RelThrottlePos_phys);
  _m->S1_PID_44_FuelAirCmdEquiv_ro = AUDI104_S1_PID_44_FuelAirCmdEquiv_ro_toS(_m->S1_PID_44_FuelAirCmdEquiv_phys);
  _m->S1_PID_43_AbsLoadValue_ro = AUDI104_S1_PID_43_AbsLoadValue_ro_toS(_m->S1_PID_43_AbsLoadValue_phys);
  _m->S1_PID_42_ControlModuleVolt_ro = AUDI104_S1_PID_42_ControlModuleVolt_ro_toS(_m->S1_PID_42_ControlModuleVolt_phys);
  _m->S1_PID_3F_CatTempBank2Sens2_ro = AUDI104_S1_PID_3F_CatTempBank2Sens2_ro_toS(_m->S1_PID_3F_CatTempBank2Sens2_phys);
  _m->S1_PID_3E_CatTempBank1Sens2_ro = AUDI104_S1_PID_3E_CatTempBank1Sens2_ro_toS(_m->S1_PID_3E_CatTempBank1Sens2_phys);
  _m->S1_PID_3D_CatTempBank2Sens1_ro = AUDI104_S1_PID_3D_CatTempBank2Sens1_ro_toS(_m->S1_PID_3D_CatTempBank2Sens1_phys);
  _m->S1_PID_3C_CatTempBank1Sens1_ro = AUDI104_S1_PID_3C_CatTempBank1Sens1_ro_toS(_m->S1_PID_3C_CatTempBank1Sens1_phys);
  _m->S1_PID_3B_OxySensor8_FAER_ro = AUDI104_S1_PID_3B_OxySensor8_FAER_ro_toS(_m->S1_PID_3B_OxySensor8_FAER_phys);
  _m->S1_PID_39_OxySensor6_FAER_ro = AUDI104_S1_PID_39_OxySensor6_FAER_ro_toS(_m->S1_PID_39_OxySensor6_FAER_phys);
  _m->S1_PID_38_OxySensor5_FAER_ro = AUDI104_S1_PID_38_OxySensor5_FAER_ro_toS(_m->S1_PID_38_OxySensor5_FAER_phys);
  _m->S1_PID_3A_OxySensor7_FAER_ro = AUDI104_S1_PID_3A_OxySensor7_FAER_ro_toS(_m->S1_PID_3A_OxySensor7_FAER_phys);
  _m->S1_PID_8E_EngFrictionPctTorq_ro = AUDI104_S1_PID_8E_EngFrictionPctTorq_ro_toS(_m->S1_PID_8E_EngFrictionPctTorq_phys);
  _m->S1_PID_56_LongSecOxyTrimBank1_ro = AUDI104_S1_PID_56_LongSecOxyTrimBank1_ro_toS(_m->S1_PID_56_LongSecOxyTrimBank1_phys);
  _m->S1_PID_64_EngPctTorq_Idle_ro = AUDI104_S1_PID_64_EngPctTorq_Idle_ro_toS(_m->S1_PID_64_EngPctTorq_Idle_phys);
  _m->S1_PID_62_ActualEngTorqPct_ro = AUDI104_S1_PID_62_ActualEngTorqPct_ro_toS(_m->S1_PID_62_ActualEngTorqPct_phys);
  _m->S1_PID_61_DemandEngTorqPct_ro = AUDI104_S1_PID_61_DemandEngTorqPct_ro_toS(_m->S1_PID_61_DemandEngTorqPct_phys);
  _m->S1_PID_5E_EngineFuelRate_ro = AUDI104_S1_PID_5E_EngineFuelRate_ro_toS(_m->S1_PID_5E_EngineFuelRate_phys);
  _m->S1_PID_5D_FuelInjectionTiming_ro = AUDI104_S1_PID_5D_FuelInjectionTiming_ro_toS(_m->S1_PID_5D_FuelInjectionTiming_phys);
  _m->S1_PID_5C_EngineOilTemp_ro = AUDI104_S1_PID_5C_EngineOilTemp_ro_toS(_m->S1_PID_5C_EngineOilTemp_phys);
  _m->S1_PID_5B_HybrBatPackRemLife_ro = AUDI104_S1_PID_5B_HybrBatPackRemLife_ro_toS(_m->S1_PID_5B_HybrBatPackRemLife_phys);
  _m->S1_PID_5A_RelAccelPedalPos_ro = AUDI104_S1_PID_5A_RelAccelPedalPos_ro_toS(_m->S1_PID_5A_RelAccelPedalPos_phys);
  _m->S1_PID_59_FuelRailAbsPres_ro = AUDI104_S1_PID_59_FuelRailAbsPres_ro_toS(_m->S1_PID_59_FuelRailAbsPres_phys);
  _m->S1_PID_58_LongSecOxyTrimBank2_ro = AUDI104_S1_PID_58_LongSecOxyTrimBank2_ro_toS(_m->S1_PID_58_LongSecOxyTrimBank2_phys);
  _m->S1_PID_57_ShortSecOxyTrimBank2_ro = AUDI104_S1_PID_57_ShortSecOxyTrimBank2_ro_toS(_m->S1_PID_57_ShortSecOxyTrimBank2_phys);
  _m->S1_PID_22_FuelRailPres_ro = AUDI104_S1_PID_22_FuelRailPres_ro_toS(_m->S1_PID_22_FuelRailPres_phys);
  _m->S1_PID_28_OxySensor5_FAER_ro = AUDI104_S1_PID_28_OxySensor5_FAER_ro_toS(_m->S1_PID_28_OxySensor5_FAER_phys);
  _m->S1_PID_0E_TimingAdvance_ro = AUDI104_S1_PID_0E_TimingAdvance_ro_toS(_m->S1_PID_0E_TimingAdvance_phys);
  _m->S1_PID_26_OxySensor3_FAER_ro = AUDI104_S1_PID_26_OxySensor3_FAER_ro_toS(_m->S1_PID_26_OxySensor3_FAER_phys);
  _m->S1_PID_0F_IntakeAirTemperature_ro = AUDI104_S1_PID_0F_IntakeAirTemperature_ro_toS(_m->S1_PID_0F_IntakeAirTemperature_phys);
  _m->S1_PID_10_MAFAirFlowRate_ro = AUDI104_S1_PID_10_MAFAirFlowRate_ro_toS(_m->S1_PID_10_MAFAirFlowRate_phys);
  _m->S1_PID_11_ThrottlePosition_ro = AUDI104_S1_PID_11_ThrottlePosition_ro_toS(_m->S1_PID_11_ThrottlePosition_phys);
  _m->S1_PID_25_OxySensor2_FAER_ro = AUDI104_S1_PID_25_OxySensor2_FAER_ro_toS(_m->S1_PID_25_OxySensor2_FAER_phys);
  _m->S1_PID_14_OxySensor1_Volt_ro = AUDI104_S1_PID_14_OxySensor1_Volt_ro_toS(_m->S1_PID_14_OxySensor1_Volt_phys);
  _m->S1_PID_24_OxySensor1_FAER_ro = AUDI104_S1_PID_24_OxySensor1_FAER_ro_toS(_m->S1_PID_24_OxySensor1_FAER_phys);
  _m->S1_PID_23_FuelRailGaug_ro = AUDI104_S1_PID_23_FuelRailGaug_ro_toS(_m->S1_PID_23_FuelRailGaug_phys);
  _m->S1_PID_27_OxySensor4_FAER_ro = AUDI104_S1_PID_27_OxySensor4_FAER_ro_toS(_m->S1_PID_27_OxySensor4_FAER_phys);
  _m->S1_PID_36_OxySensor3_FAER_ro = AUDI104_S1_PID_36_OxySensor3_FAER_ro_toS(_m->S1_PID_36_OxySensor3_FAER_phys);
  _m->S1_PID_15_OxySensor2_Volt_ro = AUDI104_S1_PID_15_OxySensor2_Volt_ro_toS(_m->S1_PID_15_OxySensor2_Volt_phys);
  _m->S1_PID_1B_OxySensor8_Volt_ro = AUDI104_S1_PID_1B_OxySensor8_Volt_ro_toS(_m->S1_PID_1B_OxySensor8_Volt_phys);
  _m->S1_PID_16_OxySensor3_Volt_ro = AUDI104_S1_PID_16_OxySensor3_Volt_ro_toS(_m->S1_PID_16_OxySensor3_Volt_phys);
  _m->S1_PID_1A_OxySensor7_Volt_ro = AUDI104_S1_PID_1A_OxySensor7_Volt_ro_toS(_m->S1_PID_1A_OxySensor7_Volt_phys);
  _m->S1_PID_19_OxySensor6_Volt_ro = AUDI104_S1_PID_19_OxySensor6_Volt_ro_toS(_m->S1_PID_19_OxySensor6_Volt_phys);
  _m->S1_PID_17_OxySensor4_Volt_ro = AUDI104_S1_PID_17_OxySensor4_Volt_ro_toS(_m->S1_PID_17_OxySensor4_Volt_phys);
  _m->S1_PID_18_OxySensor5_Volt_ro = AUDI104_S1_PID_18_OxySensor5_Volt_ro_toS(_m->S1_PID_18_OxySensor5_Volt_phys);
  _m->S1_PID_29_OxySensor6_FAER_ro = AUDI104_S1_PID_29_OxySensor6_FAER_ro_toS(_m->S1_PID_29_OxySensor6_FAER_phys);
  _m->S1_PID_35_OxySensor2_FAER_ro = AUDI104_S1_PID_35_OxySensor2_FAER_ro_toS(_m->S1_PID_35_OxySensor2_FAER_phys);
  _m->S1_PID_04_CalcEngineLoad_ro = AUDI104_S1_PID_04_CalcEngineLoad_ro_toS(_m->S1_PID_04_CalcEngineLoad_phys);
  _m->S1_PID_05_EngineCoolantTemp_ro = AUDI104_S1_PID_05_EngineCoolantTemp_ro_toS(_m->S1_PID_05_EngineCoolantTemp_phys);
  _m->S1_PID_06_ShortFuelTrimBank1_ro = AUDI104_S1_PID_06_ShortFuelTrimBank1_ro_toS(_m->S1_PID_06_ShortFuelTrimBank1_phys);
  _m->S1_PID_34_OxySensor1_FAER_ro = AUDI104_S1_PID_34_OxySensor1_FAER_ro_toS(_m->S1_PID_34_OxySensor1_FAER_phys);
  _m->S1_PID_07_LongFuelTrimBank1_ro = AUDI104_S1_PID_07_LongFuelTrimBank1_ro_toS(_m->S1_PID_07_LongFuelTrimBank1_phys);
  _m->S1_PID_08_ShortFuelTrimBank2_ro = AUDI104_S1_PID_08_ShortFuelTrimBank2_ro_toS(_m->S1_PID_08_ShortFuelTrimBank2_phys);
  _m->S1_PID_32_EvapSysVaporPres_ro = AUDI104_S1_PID_32_EvapSysVaporPres_ro_toS(_m->S1_PID_32_EvapSysVaporPres_phys);
  _m->S1_PID_0C_EngineRPM_ro = AUDI104_S1_PID_0C_EngineRPM_ro_toS(_m->S1_PID_0C_EngineRPM_phys);
  _m->S1_PID_2A_OxySensor7_FAER_ro = AUDI104_S1_PID_2A_OxySensor7_FAER_ro_toS(_m->S1_PID_2A_OxySensor7_FAER_phys);
  _m->S1_PID_0A_FuelPressure_ro = AUDI104_S1_PID_0A_FuelPressure_ro_toS(_m->S1_PID_0A_FuelPressure_phys);
  _m->S1_PID_2B_OxySensor8_FAER_ro = AUDI104_S1_PID_2B_OxySensor8_FAER_ro_toS(_m->S1_PID_2B_OxySensor8_FAER_phys);
  _m->S1_PID_09_LongFuelTrimBank2_ro = AUDI104_S1_PID_09_LongFuelTrimBank2_ro_toS(_m->S1_PID_09_LongFuelTrimBank2_phys);
  _m->S1_PID_2C_CmdEGR_ro = AUDI104_S1_PID_2C_CmdEGR_ro_toS(_m->S1_PID_2C_CmdEGR_phys);
  _m->S1_PID_2D_EGRError_ro = AUDI104_S1_PID_2D_EGRError_ro_toS(_m->S1_PID_2D_EGRError_phys);
  _m->S1_PID_2E_CmdEvapPurge_ro = AUDI104_S1_PID_2E_CmdEvapPurge_ro_toS(_m->S1_PID_2E_CmdEvapPurge_phys);
  _m->S1_PID_2F_FuelTankLevel_ro = AUDI104_S1_PID_2F_FuelTankLevel_ro_toS(_m->S1_PID_2F_FuelTankLevel_phys);
  _m->S1_PID_15_OxySensor2_STFT_ro = AUDI104_S1_PID_15_OxySensor2_STFT_ro_toS(_m->S1_PID_15_OxySensor2_STFT_phys);
  _m->S1_PID_64_EngPctTorq_EP1_ro = AUDI104_S1_PID_64_EngPctTorq_EP1_ro_toS(_m->S1_PID_64_EngPctTorq_EP1_phys);
  _m->S1_PID_16_OxySensor3_STFT_ro = AUDI104_S1_PID_16_OxySensor3_STFT_ro_toS(_m->S1_PID_16_OxySensor3_STFT_phys);
  _m->S1_PID_14_OxySensor1_STFT_ro = AUDI104_S1_PID_14_OxySensor1_STFT_ro_toS(_m->S1_PID_14_OxySensor1_STFT_phys);
  _m->S1_PID_56_LongSecOxyTrimBank3_ro = AUDI104_S1_PID_56_LongSecOxyTrimBank3_ro_toS(_m->S1_PID_56_LongSecOxyTrimBank3_phys);
  _m->S1_PID_18_OxySensor5_STFT_ro = AUDI104_S1_PID_18_OxySensor5_STFT_ro_toS(_m->S1_PID_18_OxySensor5_STFT_phys);
  _m->S1_PID_55_ShortSecOxyTrimBank3_ro = AUDI104_S1_PID_55_ShortSecOxyTrimBank3_ro_toS(_m->S1_PID_55_ShortSecOxyTrimBank3_phys);
  _m->S1_PID_57_ShortSecOxyTrimBank4_ro = AUDI104_S1_PID_57_ShortSecOxyTrimBank4_ro_toS(_m->S1_PID_57_ShortSecOxyTrimBank4_phys);
  _m->S1_PID_58_LongSecOxyTrimBank4_ro = AUDI104_S1_PID_58_LongSecOxyTrimBank4_ro_toS(_m->S1_PID_58_LongSecOxyTrimBank4_phys);
  _m->S1_PID_17_OxySensor4_STFT_ro = AUDI104_S1_PID_17_OxySensor4_STFT_ro_toS(_m->S1_PID_17_OxySensor4_STFT_phys);
  _m->S1_PID_1B_OxySensor8_STFT_ro = AUDI104_S1_PID_1B_OxySensor8_STFT_ro_toS(_m->S1_PID_1B_OxySensor8_STFT_phys);
  _m->S1_PID_1A_OxySensor7_STFT_ro = AUDI104_S1_PID_1A_OxySensor7_STFT_ro_toS(_m->S1_PID_1A_OxySensor7_STFT_phys);
  _m->S1_PID_19_OxySensor6_STFT_ro = AUDI104_S1_PID_19_OxySensor6_STFT_ro_toS(_m->S1_PID_19_OxySensor6_STFT_phys);
  _m->S1_PID_35_OxySensor2_Crnt_ro = AUDI104_S1_PID_35_OxySensor2_Crnt_ro_toS(_m->S1_PID_35_OxySensor2_Crnt_phys);
  _m->S1_PID_37_OxySensor4_Crnt_ro = AUDI104_S1_PID_37_OxySensor4_Crnt_ro_toS(_m->S1_PID_37_OxySensor4_Crnt_phys);
  _m->S1_PID_38_OxySensor5_Crnt_ro = AUDI104_S1_PID_38_OxySensor5_Crnt_ro_toS(_m->S1_PID_38_OxySensor5_Crnt_phys);
  _m->S1_PID_34_OxySensor1_Crnt_ro = AUDI104_S1_PID_34_OxySensor1_Crnt_ro_toS(_m->S1_PID_34_OxySensor1_Crnt_phys);
  _m->S1_PID_39_OxySensor6_Crnt_ro = AUDI104_S1_PID_39_OxySensor6_Crnt_ro_toS(_m->S1_PID_39_OxySensor6_Crnt_phys);
  _m->S1_PID_36_OxySensor3_Crnt_ro = AUDI104_S1_PID_36_OxySensor3_Crnt_ro_toS(_m->S1_PID_36_OxySensor3_Crnt_phys);
  _m->S1_PID_3A_OxySensor7_Crnt_ro = AUDI104_S1_PID_3A_OxySensor7_Crnt_ro_toS(_m->S1_PID_3A_OxySensor7_Crnt_phys);
  _m->S1_PID_3B_OxySensor8_Crnt_ro = AUDI104_S1_PID_3B_OxySensor8_Crnt_ro_toS(_m->S1_PID_3B_OxySensor8_Crnt_phys);
  _m->S1_PID_2B_OxySensor8_Volt_ro = AUDI104_S1_PID_2B_OxySensor8_Volt_ro_toS(_m->S1_PID_2B_OxySensor8_Volt_phys);
  _m->S1_PID_2A_OxySensor7_Volt_ro = AUDI104_S1_PID_2A_OxySensor7_Volt_ro_toS(_m->S1_PID_2A_OxySensor7_Volt_phys);
  _m->S1_PID_29_OxySensor6_Volt_ro = AUDI104_S1_PID_29_OxySensor6_Volt_ro_toS(_m->S1_PID_29_OxySensor6_Volt_phys);
  _m->S1_PID_28_OxySensor5_Volt_ro = AUDI104_S1_PID_28_OxySensor5_Volt_ro_toS(_m->S1_PID_28_OxySensor5_Volt_phys);
  _m->S1_PID_27_OxySensor4_Volt_ro = AUDI104_S1_PID_27_OxySensor4_Volt_ro_toS(_m->S1_PID_27_OxySensor4_Volt_phys);
  _m->S1_PID_26_OxySensor3_Volt_ro = AUDI104_S1_PID_26_OxySensor3_Volt_ro_toS(_m->S1_PID_26_OxySensor3_Volt_phys);
  _m->S1_PID_25_OxySensor2_Volt_ro = AUDI104_S1_PID_25_OxySensor2_Volt_ro_toS(_m->S1_PID_25_OxySensor2_Volt_phys);
  _m->S1_PID_24_OxySensor1_Volt_ro = AUDI104_S1_PID_24_OxySensor1_Volt_ro_toS(_m->S1_PID_24_OxySensor1_Volt_phys);
  _m->S1_PID_64_EngPctTorq_EP2_ro = AUDI104_S1_PID_64_EngPctTorq_EP2_ro_toS(_m->S1_PID_64_EngPctTorq_EP2_phys);
  _m->S1_PID_4F_Max_IntManiAbsPres_ro = AUDI104_S1_PID_4F_Max_IntManiAbsPres_ro_toS(_m->S1_PID_4F_Max_IntManiAbsPres_phys);
  _m->S1_PID_64_EngPctTorq_EP3_ro = AUDI104_S1_PID_64_EngPctTorq_EP3_ro_toS(_m->S1_PID_64_EngPctTorq_EP3_phys);
  _m->S1_PID_64_EngPctTorq_EP4_ro = AUDI104_S1_PID_64_EngPctTorq_EP4_ro_toS(_m->S1_PID_64_EngPctTorq_EP4_phys);
#endif // AUDI104_USE_SIGFLOAT

  cframe->Data[0] |= (_m->length & (0xFFU));
  cframe->Data[1] |= (_m->service & (0x0FU)) | ((_m->response & (0x0FU)) << 4);
  cframe->Data[2] |= (_m->ParameterID_Service02 & (0xFFU)) | (_m->ParameterID_Service01 & (0xFFU));
  cframe->Data[3] |= (_m->S1_PID_47_AbsThrottlePosB_ro & (0xFFU)) | (_m->S1_PID_55_ShortSecOxyTrimBank1_ro & (0xFFU)) | (_m->S1_PID_48_AbsThrottlePosC_ro & (0xFFU)) | (_m->S1_PID_49_AbsThrottlePosD_ro & (0xFFU)) | (_m->S1_PID_4A_AbsThrottlePosE_ro & (0xFFU)) | (_m->S1_PID_4B_AbsThrottlePosF_ro & (0xFFU)) | (_m->S1_PID_4C_CmdThrottleAct_ro & (0xFFU)) | ((_m->S1_PID_4D_TimeRunMILOn >> 8) & (0xFFU)) | ((_m->S1_PID_4E_TimeSinceCodeClear >> 8) & (0xFFU)) | (_m->S1_PID_4F_Max_FAER & (0xFFU)) | (_m->S1_PID_50_Max_AirFlowMAF_ro & (0xFFU)) | (_m->S1_PID_51_FuelType & (0xFFU)) | (_m->S1_PID_52_EthanolFuelPct_ro & (0xFFU)) | ((_m->S1_PID_53_AbsEvapSysVapPres_ro >> 8) & (0xFFU)) | ((_m->S1_PID_54_EvapSysVapPres_ro >> 8) & (0xFFU)) | ((_m->S1_PID_37_OxySensor4_FAER_ro >> 8) & (0xFFU)) | (_m->S1_PID_46_AmbientAirTemp_ro & (0xFFU)) | (_m->S1_PID_45_RelThrottlePos_ro & (0xFFU)) | ((_m->S1_PID_44_FuelAirCmdEquiv_ro >> 8) & (0xFFU)) | ((_m->S1_PID_43_AbsLoadValue_ro >> 8) & (0xFFU)) | ((_m->S1_PID_42_ControlModuleVolt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_41_MonStatusDriveCycle >> 24) & (0xFFU)) | ((_m->S1_PID_40_PIDsSupported_41_60 >> 24) & (0xFFU)) | ((_m->S1_PID_3F_CatTempBank2Sens2_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3E_CatTempBank1Sens2_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3D_CatTempBank2Sens1_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3C_CatTempBank1Sens1_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3B_OxySensor8_FAER_ro >> 8) & (0xFFU)) | ((_m->S1_PID_00_PIDsSupported_01_20 >> 24) & (0xFFU)) | ((_m->S1_PID_39_OxySensor6_FAER_ro >> 8) & (0xFFU)) | ((_m->S1_PID_38_OxySensor5_FAER_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3A_OxySensor7_FAER_ro >> 8) & (0xFFU)) | (_m->S1_PID_66_MAFSensor & (0xFFU)) | ((_m->S2_PID_02_FreezeDTC >> 8) & (0xFFU)) | ((_m->S1_PID_C0_PIDsSupported_C1_E0 >> 24) & (0xFFU)) | ((_m->S1_PID_A0_PIDsSupported_A1_C0 >> 24) & (0xFFU)) | (_m->S1_PID_8E_EngFrictionPctTorq_ro & (0xFFU)) | ((_m->S1_PID_80_PIDsSupported_81_A0 >> 24) & (0xFFU)) | (_m->S1_PID_70_BoostPresCntrl & (0xFFU)) | (_m->S1_PID_6F_TurboComprPres & (0xFFU)) | (_m->S1_PID_6E_InjPresContrSys & (0xFFU)) | (_m->S1_PID_6D_FuelPresContrSys & (0xFFU)) | (_m->S1_PID_6C_CmdThrottleActRel & (0xFFU)) | (_m->S1_PID_6B_ExhaustGasTemp & (0xFFU)) | (_m->S1_PID_6A_CmdDieselIntAir & (0xFFU)) | (_m->S1_PID_69_CmdEGR_EGRError & (0xFFU)) | (_m->S1_PID_68_IntakeAirTempSens & (0xFFU)) | (_m->S1_PID_67_EngineCoolantTemp & (0xFFU)) | (_m->S1_PID_56_LongSecOxyTrimBank1_ro & (0xFFU)) | (_m->S1_PID_65_AuxInputOutput & (0xFFU)) | (_m->S1_PID_64_EngPctTorq_Idle_ro & (0xFFU)) | ((_m->S1_PID_63_EngRefTorq >> 8) & (0xFFU)) | (_m->S1_PID_62_ActualEngTorqPct_ro & (0xFFU)) | (_m->S1_PID_61_DemandEngTorqPct_ro & (0xFFU)) | ((_m->S1_PID_60_PIDsSupported_61_80 >> 24) & (0xFFU)) | (_m->S1_PID_5F_EmissionReq & (0xFFU)) | ((_m->S1_PID_5E_EngineFuelRate_ro >> 8) & (0xFFU)) | ((_m->S1_PID_5D_FuelInjectionTiming_ro >> 8) & (0xFFU)) | (_m->S1_PID_5C_EngineOilTemp_ro & (0xFFU)) | (_m->S1_PID_5B_HybrBatPackRemLife_ro & (0xFFU)) | (_m->S1_PID_5A_RelAccelPedalPos_ro & (0xFFU)) | ((_m->S1_PID_59_FuelRailAbsPres_ro >> 8) & (0xFFU)) | (_m->S1_PID_58_LongSecOxyTrimBank2_ro & (0xFFU)) | (_m->S1_PID_57_ShortSecOxyTrimBank2_ro & (0xFFU)) | ((_m->S1_PID_22_FuelRailPres_ro >> 8) & (0xFFU)) | ((_m->S1_PID_28_OxySensor5_FAER_ro >> 8) & (0xFFU)) | (_m->S1_PID_0D_VehicleSpeed & (0xFFU)) | (_m->S1_PID_0E_TimingAdvance_ro & (0xFFU)) | ((_m->S1_PID_26_OxySensor3_FAER_ro >> 8) & (0xFFU)) | (_m->S1_PID_0F_IntakeAirTemperature_ro & (0xFFU)) | ((_m->S1_PID_10_MAFAirFlowRate_ro >> 8) & (0xFFU)) | (_m->S1_PID_11_ThrottlePosition_ro & (0xFFU)) | (_m->S1_PID_12_CmdSecAirStatus & (0xFFU)) | ((_m->S1_PID_25_OxySensor2_FAER_ro >> 8) & (0xFFU)) | (_m->S1_PID_14_OxySensor1_Volt_ro & (0xFFU)) | ((_m->S1_PID_24_OxySensor1_FAER_ro >> 8) & (0xFFU)) | ((_m->S1_PID_23_FuelRailGaug_ro >> 8) & (0xFFU)) | ((_m->S1_PID_27_OxySensor4_FAER_ro >> 8) & (0xFFU)) | ((_m->S1_PID_21_DistanceMILOn >> 8) & (0xFFU)) | ((_m->S1_PID_20_PIDsSupported_21_40 >> 24) & (0xFFU)) | ((_m->S1_PID_36_OxySensor3_FAER_ro >> 8) & (0xFFU)) | ((_m->S1_PID_1F_TimeSinceEngStart >> 8) & (0xFFU)) | 
  cframe->Data[4] |= (_m->S1_PID_4D_TimeRunMILOn & (0xFFU)) | (_m->S1_PID_4E_TimeSinceCodeClear & (0xFFU)) | (_m->S1_PID_53_AbsEvapSysVapPres_ro & (0xFFU)) | (_m->S1_PID_54_EvapSysVapPres_ro & (0xFFU)) | (_m->S1_PID_37_OxySensor4_FAER_ro & (0xFFU)) | (_m->S1_PID_44_FuelAirCmdEquiv_ro & (0xFFU)) | (_m->S1_PID_43_AbsLoadValue_ro & (0xFFU)) | (_m->S1_PID_42_ControlModuleVolt_ro & (0xFFU)) | ((_m->S1_PID_41_MonStatusDriveCycle >> 16) & (0xFFU)) | ((_m->S1_PID_40_PIDsSupported_41_60 >> 16) & (0xFFU)) | (_m->S1_PID_3F_CatTempBank2Sens2_ro & (0xFFU)) | (_m->S1_PID_3E_CatTempBank1Sens2_ro & (0xFFU)) | (_m->S1_PID_3D_CatTempBank2Sens1_ro & (0xFFU)) | (_m->S1_PID_3C_CatTempBank1Sens1_ro & (0xFFU)) | (_m->S1_PID_3B_OxySensor8_FAER_ro & (0xFFU)) | ((_m->S1_PID_00_PIDsSupported_01_20 >> 16) & (0xFFU)) | (_m->S1_PID_39_OxySensor6_FAER_ro & (0xFFU)) | (_m->S1_PID_38_OxySensor5_FAER_ro & (0xFFU)) | (_m->S1_PID_3A_OxySensor7_FAER_ro & (0xFFU)) | (_m->S2_PID_02_FreezeDTC & (0xFFU)) | ((_m->S1_PID_C0_PIDsSupported_C1_E0 >> 16) & (0xFFU)) | ((_m->S1_PID_A0_PIDsSupported_A1_C0 >> 16) & (0xFFU)) | ((_m->S1_PID_80_PIDsSupported_81_A0 >> 16) & (0xFFU)) | (_m->S1_PID_63_EngRefTorq & (0xFFU)) | ((_m->S1_PID_60_PIDsSupported_61_80 >> 16) & (0xFFU)) | (_m->S1_PID_5E_EngineFuelRate_ro & (0xFFU)) | (_m->S1_PID_5D_FuelInjectionTiming_ro & (0xFFU)) | (_m->S1_PID_59_FuelRailAbsPres_ro & (0xFFU)) | (_m->S1_PID_22_FuelRailPres_ro & (0xFFU)) | (_m->S1_PID_28_OxySensor5_FAER_ro & (0xFFU)) | (_m->S1_PID_26_OxySensor3_FAER_ro & (0xFFU)) | (_m->S1_PID_10_MAFAirFlowRate_ro & (0xFFU)) | (_m->S1_PID_25_OxySensor2_FAER_ro & (0xFFU)) | (_m->S1_PID_24_OxySensor1_FAER_ro & (0xFFU)) | (_m->S1_PID_23_FuelRailGaug_ro & (0xFFU)) | (_m->S1_PID_27_OxySensor4_FAER_ro & (0xFFU)) | (_m->S1_PID_21_DistanceMILOn & (0xFFU)) | ((_m->S1_PID_20_PIDsSupported_21_40 >> 16) & (0xFFU)) | (_m->S1_PID_36_OxySensor3_FAER_ro & (0xFFU)) | (_m->S1_PID_1F_TimeSinceEngStart & (0xFFU)) | (_m->S1_PID_29_OxySensor6_FAER_ro & (0xFFU)) | ((_m->S1_PID_01_MonitorStatus >> 16) & (0xFFU)) | (_m->S1_PID_02_FreezeDTC & (0xFFU)) | (_m->S1_PID_03_FuelSystemStatus & (0xFFU)) | (_m->S1_PID_35_OxySensor2_FAER_ro & (0xFFU)) | (_m->S1_PID_34_OxySensor1_FAER_ro & (0xFFU)) | (_m->S1_PID_32_EvapSysVaporPres_ro & (0xFFU)) | (_m->S1_PID_0C_EngineRPM_ro & (0xFFU)) | (_m->S1_PID_2A_OxySensor7_FAER_ro & (0xFFU)) | (_m->S1_PID_2B_OxySensor8_FAER_ro & (0xFFU)) | (_m->S1_PID_31_DistanceSinceCodeClear & (0xFFU)) | (_m->S1_PID_15_OxySensor2_STFT_ro & (0xFFU)) | (_m->S1_PID_64_EngPctTorq_EP1_ro & (0xFFU)) | (_m->S1_PID_16_OxySensor3_STFT_ro & (0xFFU)) | (_m->S1_PID_14_OxySensor1_STFT_ro & (0xFFU)) | (_m->S1_PID_56_LongSecOxyTrimBank3_ro & (0xFFU)) | (_m->S1_PID_18_OxySensor5_STFT_ro & (0xFFU)) | (_m->S1_PID_4F_Max_OxySensVol & (0xFFU)) | (_m->S1_PID_55_ShortSecOxyTrimBank3_ro & (0xFFU)) | (_m->S1_PID_57_ShortSecOxyTrimBank4_ro & (0xFFU)) | (_m->S1_PID_58_LongSecOxyTrimBank4_ro & (0xFFU)) | (_m->S1_PID_17_OxySensor4_STFT_ro & (0xFFU)) | (_m->S1_PID_1B_OxySensor8_STFT_ro & (0xFFU)) | (_m->S1_PID_1A_OxySensor7_STFT_ro & (0xFFU)) | (_m->S1_PID_19_OxySensor6_STFT_ro & (0xFFU));
  cframe->Data[5] |= ((_m->S1_PID_41_MonStatusDriveCycle >> 8) & (0xFFU)) | ((_m->S1_PID_40_PIDsSupported_41_60 >> 8) & (0xFFU)) | ((_m->S1_PID_00_PIDsSupported_01_20 >> 8) & (0xFFU)) | ((_m->S1_PID_C0_PIDsSupported_C1_E0 >> 8) & (0xFFU)) | ((_m->S1_PID_A0_PIDsSupported_A1_C0 >> 8) & (0xFFU)) | ((_m->S1_PID_80_PIDsSupported_81_A0 >> 8) & (0xFFU)) | ((_m->S1_PID_60_PIDsSupported_61_80 >> 8) & (0xFFU)) | ((_m->S1_PID_20_PIDsSupported_21_40 >> 8) & (0xFFU)) | ((_m->S1_PID_01_MonitorStatus >> 8) & (0xFFU)) | ((_m->S1_PID_35_OxySensor2_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_37_OxySensor4_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_38_OxySensor5_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_34_OxySensor1_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_39_OxySensor6_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_36_OxySensor3_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3A_OxySensor7_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3B_OxySensor8_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_2B_OxySensor8_Volt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_2A_OxySensor7_Volt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_29_OxySensor6_Volt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_28_OxySensor5_Volt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_27_OxySensor4_Volt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_26_OxySensor3_Volt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_25_OxySensor2_Volt_ro >> 8) & (0xFFU)) | (_m->S1_PID_4F_Max_OxySensCrnt & (0xFFU)) | ((_m->S1_PID_24_OxySensor1_Volt_ro >> 8) & (0xFFU)) | (_m->S1_PID_64_EngPctTorq_EP2_ro & (0xFFU));
  cframe->Data[6] |= (_m->S1_PID_41_MonStatusDriveCycle & (0xFFU)) | (_m->S1_PID_40_PIDsSupported_41_60 & (0xFFU)) | (_m->S1_PID_00_PIDsSupported_01_20 & (0xFFU)) | (_m->S1_PID_C0_PIDsSupported_C1_E0 & (0xFFU)) | (_m->S1_PID_A0_PIDsSupported_A1_C0 & (0xFFU)) | (_m->S1_PID_80_PIDsSupported_81_A0 & (0xFFU)) | (_m->S1_PID_60_PIDsSupported_61_80 & (0xFFU)) | (_m->S1_PID_20_PIDsSupported_21_40 & (0xFFU)) | (_m->S1_PID_01_MonitorStatus & (0xFFU)) | (_m->S1_PID_35_OxySensor2_Crnt_ro & (0xFFU)) | (_m->S1_PID_37_OxySensor4_Crnt_ro & (0xFFU)) | (_m->S1_PID_38_OxySensor5_Crnt_ro & (0xFFU)) | (_m->S1_PID_34_OxySensor1_Crnt_ro & (0xFFU)) | (_m->S1_PID_39_OxySensor6_Crnt_ro & (0xFFU)) | (_m->S1_PID_36_OxySensor3_Crnt_ro & (0xFFU)) | (_m->S1_PID_3A_OxySensor7_Crnt_ro & (0xFFU)) | (_m->S1_PID_3B_OxySensor8_Crnt_ro & (0xFFU)) | (_m->S1_PID_2B_OxySensor8_Volt_ro & (0xFFU)) | (_m->S1_PID_2A_OxySensor7_Volt_ro & (0xFFU)) | (_m->S1_PID_29_OxySensor6_Volt_ro & (0xFFU)) | (_m->S1_PID_28_OxySensor5_Volt_ro & (0xFFU)) | (_m->S1_PID_27_OxySensor4_Volt_ro & (0xFFU)) | (_m->S1_PID_26_OxySensor3_Volt_ro & (0xFFU)) | (_m->S1_PID_25_OxySensor2_Volt_ro & (0xFFU)) | (_m->S1_PID_24_OxySensor1_Volt_ro & (0xFFU)) | (_m->S1_PID_4F_Max_IntManiAbsPres_ro & (0xFFU)) | (_m->S1_PID_64_EngPctTorq_EP3_ro & (0xFFU));
  cframe->Data[7] |= (_m->S1_PID_64_EngPctTorq_EP4_ro & (0xFFU));

  cframe->MsgId = OBD2_CANID;
  cframe->DLC = OBD2_DLC;
  cframe->IDE = OBD2_IDE;
  return OBD2_CANID;
}

#else

uint32_t Pack_OBD2_Audi104(OBD2_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; (i < OBD2_DLC) && (i < 8); _d[i++] = 0);

#ifdef AUDI104_USE_SIGFLOAT
  _m->S1_PID_47_AbsThrottlePosB_ro = AUDI104_S1_PID_47_AbsThrottlePosB_ro_toS(_m->S1_PID_47_AbsThrottlePosB_phys);
  _m->S1_PID_55_ShortSecOxyTrimBank1_ro = AUDI104_S1_PID_55_ShortSecOxyTrimBank1_ro_toS(_m->S1_PID_55_ShortSecOxyTrimBank1_phys);
  _m->S1_PID_48_AbsThrottlePosC_ro = AUDI104_S1_PID_48_AbsThrottlePosC_ro_toS(_m->S1_PID_48_AbsThrottlePosC_phys);
  _m->S1_PID_49_AbsThrottlePosD_ro = AUDI104_S1_PID_49_AbsThrottlePosD_ro_toS(_m->S1_PID_49_AbsThrottlePosD_phys);
  _m->S1_PID_4A_AbsThrottlePosE_ro = AUDI104_S1_PID_4A_AbsThrottlePosE_ro_toS(_m->S1_PID_4A_AbsThrottlePosE_phys);
  _m->S1_PID_4B_AbsThrottlePosF_ro = AUDI104_S1_PID_4B_AbsThrottlePosF_ro_toS(_m->S1_PID_4B_AbsThrottlePosF_phys);
  _m->S1_PID_4C_CmdThrottleAct_ro = AUDI104_S1_PID_4C_CmdThrottleAct_ro_toS(_m->S1_PID_4C_CmdThrottleAct_phys);
  _m->S1_PID_50_Max_AirFlowMAF_ro = AUDI104_S1_PID_50_Max_AirFlowMAF_ro_toS(_m->S1_PID_50_Max_AirFlowMAF_phys);
  _m->S1_PID_52_EthanolFuelPct_ro = AUDI104_S1_PID_52_EthanolFuelPct_ro_toS(_m->S1_PID_52_EthanolFuelPct_phys);
  _m->S1_PID_53_AbsEvapSysVapPres_ro = AUDI104_S1_PID_53_AbsEvapSysVapPres_ro_toS(_m->S1_PID_53_AbsEvapSysVapPres_phys);
  _m->S1_PID_54_EvapSysVapPres_ro = AUDI104_S1_PID_54_EvapSysVapPres_ro_toS(_m->S1_PID_54_EvapSysVapPres_phys);
  _m->S1_PID_37_OxySensor4_FAER_ro = AUDI104_S1_PID_37_OxySensor4_FAER_ro_toS(_m->S1_PID_37_OxySensor4_FAER_phys);
  _m->S1_PID_46_AmbientAirTemp_ro = AUDI104_S1_PID_46_AmbientAirTemp_ro_toS(_m->S1_PID_46_AmbientAirTemp_phys);
  _m->S1_PID_45_RelThrottlePos_ro = AUDI104_S1_PID_45_RelThrottlePos_ro_toS(_m->S1_PID_45_RelThrottlePos_phys);
  _m->S1_PID_44_FuelAirCmdEquiv_ro = AUDI104_S1_PID_44_FuelAirCmdEquiv_ro_toS(_m->S1_PID_44_FuelAirCmdEquiv_phys);
  _m->S1_PID_43_AbsLoadValue_ro = AUDI104_S1_PID_43_AbsLoadValue_ro_toS(_m->S1_PID_43_AbsLoadValue_phys);
  _m->S1_PID_42_ControlModuleVolt_ro = AUDI104_S1_PID_42_ControlModuleVolt_ro_toS(_m->S1_PID_42_ControlModuleVolt_phys);
  _m->S1_PID_3F_CatTempBank2Sens2_ro = AUDI104_S1_PID_3F_CatTempBank2Sens2_ro_toS(_m->S1_PID_3F_CatTempBank2Sens2_phys);
  _m->S1_PID_3E_CatTempBank1Sens2_ro = AUDI104_S1_PID_3E_CatTempBank1Sens2_ro_toS(_m->S1_PID_3E_CatTempBank1Sens2_phys);
  _m->S1_PID_3D_CatTempBank2Sens1_ro = AUDI104_S1_PID_3D_CatTempBank2Sens1_ro_toS(_m->S1_PID_3D_CatTempBank2Sens1_phys);
  _m->S1_PID_3C_CatTempBank1Sens1_ro = AUDI104_S1_PID_3C_CatTempBank1Sens1_ro_toS(_m->S1_PID_3C_CatTempBank1Sens1_phys);
  _m->S1_PID_3B_OxySensor8_FAER_ro = AUDI104_S1_PID_3B_OxySensor8_FAER_ro_toS(_m->S1_PID_3B_OxySensor8_FAER_phys);
  _m->S1_PID_39_OxySensor6_FAER_ro = AUDI104_S1_PID_39_OxySensor6_FAER_ro_toS(_m->S1_PID_39_OxySensor6_FAER_phys);
  _m->S1_PID_38_OxySensor5_FAER_ro = AUDI104_S1_PID_38_OxySensor5_FAER_ro_toS(_m->S1_PID_38_OxySensor5_FAER_phys);
  _m->S1_PID_3A_OxySensor7_FAER_ro = AUDI104_S1_PID_3A_OxySensor7_FAER_ro_toS(_m->S1_PID_3A_OxySensor7_FAER_phys);
  _m->S1_PID_8E_EngFrictionPctTorq_ro = AUDI104_S1_PID_8E_EngFrictionPctTorq_ro_toS(_m->S1_PID_8E_EngFrictionPctTorq_phys);
  _m->S1_PID_56_LongSecOxyTrimBank1_ro = AUDI104_S1_PID_56_LongSecOxyTrimBank1_ro_toS(_m->S1_PID_56_LongSecOxyTrimBank1_phys);
  _m->S1_PID_64_EngPctTorq_Idle_ro = AUDI104_S1_PID_64_EngPctTorq_Idle_ro_toS(_m->S1_PID_64_EngPctTorq_Idle_phys);
  _m->S1_PID_62_ActualEngTorqPct_ro = AUDI104_S1_PID_62_ActualEngTorqPct_ro_toS(_m->S1_PID_62_ActualEngTorqPct_phys);
  _m->S1_PID_61_DemandEngTorqPct_ro = AUDI104_S1_PID_61_DemandEngTorqPct_ro_toS(_m->S1_PID_61_DemandEngTorqPct_phys);
  _m->S1_PID_5E_EngineFuelRate_ro = AUDI104_S1_PID_5E_EngineFuelRate_ro_toS(_m->S1_PID_5E_EngineFuelRate_phys);
  _m->S1_PID_5D_FuelInjectionTiming_ro = AUDI104_S1_PID_5D_FuelInjectionTiming_ro_toS(_m->S1_PID_5D_FuelInjectionTiming_phys);
  _m->S1_PID_5C_EngineOilTemp_ro = AUDI104_S1_PID_5C_EngineOilTemp_ro_toS(_m->S1_PID_5C_EngineOilTemp_phys);
  _m->S1_PID_5B_HybrBatPackRemLife_ro = AUDI104_S1_PID_5B_HybrBatPackRemLife_ro_toS(_m->S1_PID_5B_HybrBatPackRemLife_phys);
  _m->S1_PID_5A_RelAccelPedalPos_ro = AUDI104_S1_PID_5A_RelAccelPedalPos_ro_toS(_m->S1_PID_5A_RelAccelPedalPos_phys);
  _m->S1_PID_59_FuelRailAbsPres_ro = AUDI104_S1_PID_59_FuelRailAbsPres_ro_toS(_m->S1_PID_59_FuelRailAbsPres_phys);
  _m->S1_PID_58_LongSecOxyTrimBank2_ro = AUDI104_S1_PID_58_LongSecOxyTrimBank2_ro_toS(_m->S1_PID_58_LongSecOxyTrimBank2_phys);
  _m->S1_PID_57_ShortSecOxyTrimBank2_ro = AUDI104_S1_PID_57_ShortSecOxyTrimBank2_ro_toS(_m->S1_PID_57_ShortSecOxyTrimBank2_phys);
  _m->S1_PID_22_FuelRailPres_ro = AUDI104_S1_PID_22_FuelRailPres_ro_toS(_m->S1_PID_22_FuelRailPres_phys);
  _m->S1_PID_28_OxySensor5_FAER_ro = AUDI104_S1_PID_28_OxySensor5_FAER_ro_toS(_m->S1_PID_28_OxySensor5_FAER_phys);
  _m->S1_PID_0E_TimingAdvance_ro = AUDI104_S1_PID_0E_TimingAdvance_ro_toS(_m->S1_PID_0E_TimingAdvance_phys);
  _m->S1_PID_26_OxySensor3_FAER_ro = AUDI104_S1_PID_26_OxySensor3_FAER_ro_toS(_m->S1_PID_26_OxySensor3_FAER_phys);
  _m->S1_PID_0F_IntakeAirTemperature_ro = AUDI104_S1_PID_0F_IntakeAirTemperature_ro_toS(_m->S1_PID_0F_IntakeAirTemperature_phys);
  _m->S1_PID_10_MAFAirFlowRate_ro = AUDI104_S1_PID_10_MAFAirFlowRate_ro_toS(_m->S1_PID_10_MAFAirFlowRate_phys);
  _m->S1_PID_11_ThrottlePosition_ro = AUDI104_S1_PID_11_ThrottlePosition_ro_toS(_m->S1_PID_11_ThrottlePosition_phys);
  _m->S1_PID_25_OxySensor2_FAER_ro = AUDI104_S1_PID_25_OxySensor2_FAER_ro_toS(_m->S1_PID_25_OxySensor2_FAER_phys);
  _m->S1_PID_14_OxySensor1_Volt_ro = AUDI104_S1_PID_14_OxySensor1_Volt_ro_toS(_m->S1_PID_14_OxySensor1_Volt_phys);
  _m->S1_PID_24_OxySensor1_FAER_ro = AUDI104_S1_PID_24_OxySensor1_FAER_ro_toS(_m->S1_PID_24_OxySensor1_FAER_phys);
  _m->S1_PID_23_FuelRailGaug_ro = AUDI104_S1_PID_23_FuelRailGaug_ro_toS(_m->S1_PID_23_FuelRailGaug_phys);
  _m->S1_PID_27_OxySensor4_FAER_ro = AUDI104_S1_PID_27_OxySensor4_FAER_ro_toS(_m->S1_PID_27_OxySensor4_FAER_phys);
  _m->S1_PID_36_OxySensor3_FAER_ro = AUDI104_S1_PID_36_OxySensor3_FAER_ro_toS(_m->S1_PID_36_OxySensor3_FAER_phys);
  _m->S1_PID_15_OxySensor2_Volt_ro = AUDI104_S1_PID_15_OxySensor2_Volt_ro_toS(_m->S1_PID_15_OxySensor2_Volt_phys);
  _m->S1_PID_1B_OxySensor8_Volt_ro = AUDI104_S1_PID_1B_OxySensor8_Volt_ro_toS(_m->S1_PID_1B_OxySensor8_Volt_phys);
  _m->S1_PID_16_OxySensor3_Volt_ro = AUDI104_S1_PID_16_OxySensor3_Volt_ro_toS(_m->S1_PID_16_OxySensor3_Volt_phys);
  _m->S1_PID_1A_OxySensor7_Volt_ro = AUDI104_S1_PID_1A_OxySensor7_Volt_ro_toS(_m->S1_PID_1A_OxySensor7_Volt_phys);
  _m->S1_PID_19_OxySensor6_Volt_ro = AUDI104_S1_PID_19_OxySensor6_Volt_ro_toS(_m->S1_PID_19_OxySensor6_Volt_phys);
  _m->S1_PID_17_OxySensor4_Volt_ro = AUDI104_S1_PID_17_OxySensor4_Volt_ro_toS(_m->S1_PID_17_OxySensor4_Volt_phys);
  _m->S1_PID_18_OxySensor5_Volt_ro = AUDI104_S1_PID_18_OxySensor5_Volt_ro_toS(_m->S1_PID_18_OxySensor5_Volt_phys);
  _m->S1_PID_29_OxySensor6_FAER_ro = AUDI104_S1_PID_29_OxySensor6_FAER_ro_toS(_m->S1_PID_29_OxySensor6_FAER_phys);
  _m->S1_PID_35_OxySensor2_FAER_ro = AUDI104_S1_PID_35_OxySensor2_FAER_ro_toS(_m->S1_PID_35_OxySensor2_FAER_phys);
  _m->S1_PID_04_CalcEngineLoad_ro = AUDI104_S1_PID_04_CalcEngineLoad_ro_toS(_m->S1_PID_04_CalcEngineLoad_phys);
  _m->S1_PID_05_EngineCoolantTemp_ro = AUDI104_S1_PID_05_EngineCoolantTemp_ro_toS(_m->S1_PID_05_EngineCoolantTemp_phys);
  _m->S1_PID_06_ShortFuelTrimBank1_ro = AUDI104_S1_PID_06_ShortFuelTrimBank1_ro_toS(_m->S1_PID_06_ShortFuelTrimBank1_phys);
  _m->S1_PID_34_OxySensor1_FAER_ro = AUDI104_S1_PID_34_OxySensor1_FAER_ro_toS(_m->S1_PID_34_OxySensor1_FAER_phys);
  _m->S1_PID_07_LongFuelTrimBank1_ro = AUDI104_S1_PID_07_LongFuelTrimBank1_ro_toS(_m->S1_PID_07_LongFuelTrimBank1_phys);
  _m->S1_PID_08_ShortFuelTrimBank2_ro = AUDI104_S1_PID_08_ShortFuelTrimBank2_ro_toS(_m->S1_PID_08_ShortFuelTrimBank2_phys);
  _m->S1_PID_32_EvapSysVaporPres_ro = AUDI104_S1_PID_32_EvapSysVaporPres_ro_toS(_m->S1_PID_32_EvapSysVaporPres_phys);
  _m->S1_PID_0C_EngineRPM_ro = AUDI104_S1_PID_0C_EngineRPM_ro_toS(_m->S1_PID_0C_EngineRPM_phys);
  _m->S1_PID_2A_OxySensor7_FAER_ro = AUDI104_S1_PID_2A_OxySensor7_FAER_ro_toS(_m->S1_PID_2A_OxySensor7_FAER_phys);
  _m->S1_PID_0A_FuelPressure_ro = AUDI104_S1_PID_0A_FuelPressure_ro_toS(_m->S1_PID_0A_FuelPressure_phys);
  _m->S1_PID_2B_OxySensor8_FAER_ro = AUDI104_S1_PID_2B_OxySensor8_FAER_ro_toS(_m->S1_PID_2B_OxySensor8_FAER_phys);
  _m->S1_PID_09_LongFuelTrimBank2_ro = AUDI104_S1_PID_09_LongFuelTrimBank2_ro_toS(_m->S1_PID_09_LongFuelTrimBank2_phys);
  _m->S1_PID_2C_CmdEGR_ro = AUDI104_S1_PID_2C_CmdEGR_ro_toS(_m->S1_PID_2C_CmdEGR_phys);
  _m->S1_PID_2D_EGRError_ro = AUDI104_S1_PID_2D_EGRError_ro_toS(_m->S1_PID_2D_EGRError_phys);
  _m->S1_PID_2E_CmdEvapPurge_ro = AUDI104_S1_PID_2E_CmdEvapPurge_ro_toS(_m->S1_PID_2E_CmdEvapPurge_phys);
  _m->S1_PID_2F_FuelTankLevel_ro = AUDI104_S1_PID_2F_FuelTankLevel_ro_toS(_m->S1_PID_2F_FuelTankLevel_phys);
  _m->S1_PID_15_OxySensor2_STFT_ro = AUDI104_S1_PID_15_OxySensor2_STFT_ro_toS(_m->S1_PID_15_OxySensor2_STFT_phys);
  _m->S1_PID_64_EngPctTorq_EP1_ro = AUDI104_S1_PID_64_EngPctTorq_EP1_ro_toS(_m->S1_PID_64_EngPctTorq_EP1_phys);
  _m->S1_PID_16_OxySensor3_STFT_ro = AUDI104_S1_PID_16_OxySensor3_STFT_ro_toS(_m->S1_PID_16_OxySensor3_STFT_phys);
  _m->S1_PID_14_OxySensor1_STFT_ro = AUDI104_S1_PID_14_OxySensor1_STFT_ro_toS(_m->S1_PID_14_OxySensor1_STFT_phys);
  _m->S1_PID_56_LongSecOxyTrimBank3_ro = AUDI104_S1_PID_56_LongSecOxyTrimBank3_ro_toS(_m->S1_PID_56_LongSecOxyTrimBank3_phys);
  _m->S1_PID_18_OxySensor5_STFT_ro = AUDI104_S1_PID_18_OxySensor5_STFT_ro_toS(_m->S1_PID_18_OxySensor5_STFT_phys);
  _m->S1_PID_55_ShortSecOxyTrimBank3_ro = AUDI104_S1_PID_55_ShortSecOxyTrimBank3_ro_toS(_m->S1_PID_55_ShortSecOxyTrimBank3_phys);
  _m->S1_PID_57_ShortSecOxyTrimBank4_ro = AUDI104_S1_PID_57_ShortSecOxyTrimBank4_ro_toS(_m->S1_PID_57_ShortSecOxyTrimBank4_phys);
  _m->S1_PID_58_LongSecOxyTrimBank4_ro = AUDI104_S1_PID_58_LongSecOxyTrimBank4_ro_toS(_m->S1_PID_58_LongSecOxyTrimBank4_phys);
  _m->S1_PID_17_OxySensor4_STFT_ro = AUDI104_S1_PID_17_OxySensor4_STFT_ro_toS(_m->S1_PID_17_OxySensor4_STFT_phys);
  _m->S1_PID_1B_OxySensor8_STFT_ro = AUDI104_S1_PID_1B_OxySensor8_STFT_ro_toS(_m->S1_PID_1B_OxySensor8_STFT_phys);
  _m->S1_PID_1A_OxySensor7_STFT_ro = AUDI104_S1_PID_1A_OxySensor7_STFT_ro_toS(_m->S1_PID_1A_OxySensor7_STFT_phys);
  _m->S1_PID_19_OxySensor6_STFT_ro = AUDI104_S1_PID_19_OxySensor6_STFT_ro_toS(_m->S1_PID_19_OxySensor6_STFT_phys);
  _m->S1_PID_35_OxySensor2_Crnt_ro = AUDI104_S1_PID_35_OxySensor2_Crnt_ro_toS(_m->S1_PID_35_OxySensor2_Crnt_phys);
  _m->S1_PID_37_OxySensor4_Crnt_ro = AUDI104_S1_PID_37_OxySensor4_Crnt_ro_toS(_m->S1_PID_37_OxySensor4_Crnt_phys);
  _m->S1_PID_38_OxySensor5_Crnt_ro = AUDI104_S1_PID_38_OxySensor5_Crnt_ro_toS(_m->S1_PID_38_OxySensor5_Crnt_phys);
  _m->S1_PID_34_OxySensor1_Crnt_ro = AUDI104_S1_PID_34_OxySensor1_Crnt_ro_toS(_m->S1_PID_34_OxySensor1_Crnt_phys);
  _m->S1_PID_39_OxySensor6_Crnt_ro = AUDI104_S1_PID_39_OxySensor6_Crnt_ro_toS(_m->S1_PID_39_OxySensor6_Crnt_phys);
  _m->S1_PID_36_OxySensor3_Crnt_ro = AUDI104_S1_PID_36_OxySensor3_Crnt_ro_toS(_m->S1_PID_36_OxySensor3_Crnt_phys);
  _m->S1_PID_3A_OxySensor7_Crnt_ro = AUDI104_S1_PID_3A_OxySensor7_Crnt_ro_toS(_m->S1_PID_3A_OxySensor7_Crnt_phys);
  _m->S1_PID_3B_OxySensor8_Crnt_ro = AUDI104_S1_PID_3B_OxySensor8_Crnt_ro_toS(_m->S1_PID_3B_OxySensor8_Crnt_phys);
  _m->S1_PID_2B_OxySensor8_Volt_ro = AUDI104_S1_PID_2B_OxySensor8_Volt_ro_toS(_m->S1_PID_2B_OxySensor8_Volt_phys);
  _m->S1_PID_2A_OxySensor7_Volt_ro = AUDI104_S1_PID_2A_OxySensor7_Volt_ro_toS(_m->S1_PID_2A_OxySensor7_Volt_phys);
  _m->S1_PID_29_OxySensor6_Volt_ro = AUDI104_S1_PID_29_OxySensor6_Volt_ro_toS(_m->S1_PID_29_OxySensor6_Volt_phys);
  _m->S1_PID_28_OxySensor5_Volt_ro = AUDI104_S1_PID_28_OxySensor5_Volt_ro_toS(_m->S1_PID_28_OxySensor5_Volt_phys);
  _m->S1_PID_27_OxySensor4_Volt_ro = AUDI104_S1_PID_27_OxySensor4_Volt_ro_toS(_m->S1_PID_27_OxySensor4_Volt_phys);
  _m->S1_PID_26_OxySensor3_Volt_ro = AUDI104_S1_PID_26_OxySensor3_Volt_ro_toS(_m->S1_PID_26_OxySensor3_Volt_phys);
  _m->S1_PID_25_OxySensor2_Volt_ro = AUDI104_S1_PID_25_OxySensor2_Volt_ro_toS(_m->S1_PID_25_OxySensor2_Volt_phys);
  _m->S1_PID_24_OxySensor1_Volt_ro = AUDI104_S1_PID_24_OxySensor1_Volt_ro_toS(_m->S1_PID_24_OxySensor1_Volt_phys);
  _m->S1_PID_64_EngPctTorq_EP2_ro = AUDI104_S1_PID_64_EngPctTorq_EP2_ro_toS(_m->S1_PID_64_EngPctTorq_EP2_phys);
  _m->S1_PID_4F_Max_IntManiAbsPres_ro = AUDI104_S1_PID_4F_Max_IntManiAbsPres_ro_toS(_m->S1_PID_4F_Max_IntManiAbsPres_phys);
  _m->S1_PID_64_EngPctTorq_EP3_ro = AUDI104_S1_PID_64_EngPctTorq_EP3_ro_toS(_m->S1_PID_64_EngPctTorq_EP3_phys);
  _m->S1_PID_64_EngPctTorq_EP4_ro = AUDI104_S1_PID_64_EngPctTorq_EP4_ro_toS(_m->S1_PID_64_EngPctTorq_EP4_phys);
#endif // AUDI104_USE_SIGFLOAT

  _d[0] |= (_m->length & (0xFFU));
  _d[1] |= (_m->service & (0x0FU)) | ((_m->response & (0x0FU)) << 4);
  _d[2] |= (_m->ParameterID_Service02 & (0xFFU)) | (_m->ParameterID_Service01 & (0xFFU));
  _d[3] |= (_m->S1_PID_47_AbsThrottlePosB_ro & (0xFFU)) | (_m->S1_PID_55_ShortSecOxyTrimBank1_ro & (0xFFU)) | (_m->S1_PID_48_AbsThrottlePosC_ro & (0xFFU)) | (_m->S1_PID_49_AbsThrottlePosD_ro & (0xFFU)) | (_m->S1_PID_4A_AbsThrottlePosE_ro & (0xFFU)) | (_m->S1_PID_4B_AbsThrottlePosF_ro & (0xFFU)) | (_m->S1_PID_4C_CmdThrottleAct_ro & (0xFFU)) | ((_m->S1_PID_4D_TimeRunMILOn >> 8) & (0xFFU)) | ((_m->S1_PID_4E_TimeSinceCodeClear >> 8) & (0xFFU)) | (_m->S1_PID_4F_Max_FAER & (0xFFU)) | (_m->S1_PID_50_Max_AirFlowMAF_ro & (0xFFU)) | (_m->S1_PID_51_FuelType & (0xFFU)) | (_m->S1_PID_52_EthanolFuelPct_ro & (0xFFU)) | ((_m->S1_PID_53_AbsEvapSysVapPres_ro >> 8) & (0xFFU)) | ((_m->S1_PID_54_EvapSysVapPres_ro >> 8) & (0xFFU)) | ((_m->S1_PID_37_OxySensor4_FAER_ro >> 8) & (0xFFU)) | (_m->S1_PID_46_AmbientAirTemp_ro & (0xFFU)) | (_m->S1_PID_45_RelThrottlePos_ro & (0xFFU)) | ((_m->S1_PID_44_FuelAirCmdEquiv_ro >> 8) & (0xFFU)) | ((_m->S1_PID_43_AbsLoadValue_ro >> 8) & (0xFFU)) | ((_m->S1_PID_42_ControlModuleVolt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_41_MonStatusDriveCycle >> 24) & (0xFFU)) | ((_m->S1_PID_40_PIDsSupported_41_60 >> 24) & (0xFFU)) | ((_m->S1_PID_3F_CatTempBank2Sens2_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3E_CatTempBank1Sens2_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3D_CatTempBank2Sens1_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3C_CatTempBank1Sens1_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3B_OxySensor8_FAER_ro >> 8) & (0xFFU)) | ((_m->S1_PID_00_PIDsSupported_01_20 >> 24) & (0xFFU)) | ((_m->S1_PID_39_OxySensor6_FAER_ro >> 8) & (0xFFU)) | ((_m->S1_PID_38_OxySensor5_FAER_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3A_OxySensor7_FAER_ro >> 8) & (0xFFU)) | (_m->S1_PID_66_MAFSensor & (0xFFU)) | ((_m->S2_PID_02_FreezeDTC >> 8) & (0xFFU)) | ((_m->S1_PID_C0_PIDsSupported_C1_E0 >> 24) & (0xFFU)) | ((_m->S1_PID_A0_PIDsSupported_A1_C0 >> 24) & (0xFFU)) | (_m->S1_PID_8E_EngFrictionPctTorq_ro & (0xFFU)) | ((_m->S1_PID_80_PIDsSupported_81_A0 >> 24) & (0xFFU)) | (_m->S1_PID_70_BoostPresCntrl & (0xFFU)) | (_m->S1_PID_6F_TurboComprPres & (0xFFU)) | (_m->S1_PID_6E_InjPresContrSys & (0xFFU)) | (_m->S1_PID_6D_FuelPresContrSys & (0xFFU)) | (_m->S1_PID_6C_CmdThrottleActRel & (0xFFU)) | (_m->S1_PID_6B_ExhaustGasTemp & (0xFFU)) | (_m->S1_PID_6A_CmdDieselIntAir & (0xFFU)) | (_m->S1_PID_69_CmdEGR_EGRError & (0xFFU)) | (_m->S1_PID_68_IntakeAirTempSens & (0xFFU)) | (_m->S1_PID_67_EngineCoolantTemp & (0xFFU)) | (_m->S1_PID_56_LongSecOxyTrimBank1_ro & (0xFFU)) | (_m->S1_PID_65_AuxInputOutput & (0xFFU)) | (_m->S1_PID_64_EngPctTorq_Idle_ro & (0xFFU)) | ((_m->S1_PID_63_EngRefTorq >> 8) & (0xFFU)) | (_m->S1_PID_62_ActualEngTorqPct_ro & (0xFFU)) | (_m->S1_PID_61_DemandEngTorqPct_ro & (0xFFU)) | ((_m->S1_PID_60_PIDsSupported_61_80 >> 24) & (0xFFU)) | (_m->S1_PID_5F_EmissionReq & (0xFFU)) | ((_m->S1_PID_5E_EngineFuelRate_ro >> 8) & (0xFFU)) | ((_m->S1_PID_5D_FuelInjectionTiming_ro >> 8) & (0xFFU)) | (_m->S1_PID_5C_EngineOilTemp_ro & (0xFFU)) | (_m->S1_PID_5B_HybrBatPackRemLife_ro & (0xFFU)) | (_m->S1_PID_5A_RelAccelPedalPos_ro & (0xFFU)) | ((_m->S1_PID_59_FuelRailAbsPres_ro >> 8) & (0xFFU)) | (_m->S1_PID_58_LongSecOxyTrimBank2_ro & (0xFFU)) | (_m->S1_PID_57_ShortSecOxyTrimBank2_ro & (0xFFU)) | ((_m->S1_PID_22_FuelRailPres_ro >> 8) & (0xFFU)) | ((_m->S1_PID_28_OxySensor5_FAER_ro >> 8) & (0xFFU)) | (_m->S1_PID_0D_VehicleSpeed & (0xFFU)) | (_m->S1_PID_0E_TimingAdvance_ro & (0xFFU)) | ((_m->S1_PID_26_OxySensor3_FAER_ro >> 8) & (0xFFU)) | (_m->S1_PID_0F_IntakeAirTemperature_ro & (0xFFU)) | ((_m->S1_PID_10_MAFAirFlowRate_ro >> 8) & (0xFFU)) | (_m->S1_PID_11_ThrottlePosition_ro & (0xFFU)) | (_m->S1_PID_12_CmdSecAirStatus & (0xFFU)) | ((_m->S1_PID_25_OxySensor2_FAER_ro >> 8) & (0xFFU)) | (_m->S1_PID_14_OxySensor1_Volt_ro & (0xFFU)) | ((_m->S1_PID_24_OxySensor1_FAER_ro >> 8) & (0xFFU)) | ((_m->S1_PID_23_FuelRailGaug_ro >> 8) & (0xFFU)) | ((_m->S1_PID_27_OxySensor4_FAER_ro >> 8) & (0xFFU)) | ((_m->S1_PID_21_DistanceMILOn >> 8) & (0xFFU)) | ((_m->S1_PID_20_PIDsSupported_21_40 >> 24) & (0xFFU)) | ((_m->S1_PID_36_OxySensor3_FAER_ro >> 8) & (0xFFU)) | ((_m->S1_PID_1F_TimeSinceEngStart >> 8) & (0xFFU)) | (_m->S1_PI
  _d[4] |= (_m->S1_PID_4D_TimeRunMILOn & (0xFFU)) | (_m->S1_PID_4E_TimeSinceCodeClear & (0xFFU)) | (_m->S1_PID_53_AbsEvapSysVapPres_ro & (0xFFU)) | (_m->S1_PID_54_EvapSysVapPres_ro & (0xFFU)) | (_m->S1_PID_37_OxySensor4_FAER_ro & (0xFFU)) | (_m->S1_PID_44_FuelAirCmdEquiv_ro & (0xFFU)) | (_m->S1_PID_43_AbsLoadValue_ro & (0xFFU)) | (_m->S1_PID_42_ControlModuleVolt_ro & (0xFFU)) | ((_m->S1_PID_41_MonStatusDriveCycle >> 16) & (0xFFU)) | ((_m->S1_PID_40_PIDsSupported_41_60 >> 16) & (0xFFU)) | (_m->S1_PID_3F_CatTempBank2Sens2_ro & (0xFFU)) | (_m->S1_PID_3E_CatTempBank1Sens2_ro & (0xFFU)) | (_m->S1_PID_3D_CatTempBank2Sens1_ro & (0xFFU)) | (_m->S1_PID_3C_CatTempBank1Sens1_ro & (0xFFU)) | (_m->S1_PID_3B_OxySensor8_FAER_ro & (0xFFU)) | ((_m->S1_PID_00_PIDsSupported_01_20 >> 16) & (0xFFU)) | (_m->S1_PID_39_OxySensor6_FAER_ro & (0xFFU)) | (_m->S1_PID_38_OxySensor5_FAER_ro & (0xFFU)) | (_m->S1_PID_3A_OxySensor7_FAER_ro & (0xFFU)) | (_m->S2_PID_02_FreezeDTC & (0xFFU)) | ((_m->S1_PID_C0_PIDsSupported_C1_E0 >> 16) & (0xFFU)) | ((_m->S1_PID_A0_PIDsSupported_A1_C0 >> 16) & (0xFFU)) | ((_m->S1_PID_80_PIDsSupported_81_A0 >> 16) & (0xFFU)) | (_m->S1_PID_63_EngRefTorq & (0xFFU)) | ((_m->S1_PID_60_PIDsSupported_61_80 >> 16) & (0xFFU)) | (_m->S1_PID_5E_EngineFuelRate_ro & (0xFFU)) | (_m->S1_PID_5D_FuelInjectionTiming_ro & (0xFFU)) | (_m->S1_PID_59_FuelRailAbsPres_ro & (0xFFU)) | (_m->S1_PID_22_FuelRailPres_ro & (0xFFU)) | (_m->S1_PID_28_OxySensor5_FAER_ro & (0xFFU)) | (_m->S1_PID_26_OxySensor3_FAER_ro & (0xFFU)) | (_m->S1_PID_10_MAFAirFlowRate_ro & (0xFFU)) | (_m->S1_PID_25_OxySensor2_FAER_ro & (0xFFU)) | (_m->S1_PID_24_OxySensor1_FAER_ro & (0xFFU)) | (_m->S1_PID_23_FuelRailGaug_ro & (0xFFU)) | (_m->S1_PID_27_OxySensor4_FAER_ro & (0xFFU)) | (_m->S1_PID_21_DistanceMILOn & (0xFFU)) | ((_m->S1_PID_20_PIDsSupported_21_40 >> 16) & (0xFFU)) | (_m->S1_PID_36_OxySensor3_FAER_ro & (0xFFU)) | (_m->S1_PID_1F_TimeSinceEngStart & (0xFFU)) | (_m->S1_PID_29_OxySensor6_FAER_ro & (0xFFU)) | ((_m->S1_PID_01_MonitorStatus >> 16) & (0xFFU)) | (_m->S1_PID_02_FreezeDTC & (0xFFU)) | (_m->S1_PID_03_FuelSystemStatus & (0xFFU)) | (_m->S1_PID_35_OxySensor2_FAER_ro & (0xFFU)) | (_m->S1_PID_34_OxySensor1_FAER_ro & (0xFFU)) | (_m->S1_PID_32_EvapSysVaporPres_ro & (0xFFU)) | (_m->S1_PID_0C_EngineRPM_ro & (0xFFU)) | (_m->S1_PID_2A_OxySensor7_FAER_ro & (0xFFU)) | (_m->S1_PID_2B_OxySensor8_FAER_ro & (0xFFU)) | (_m->S1_PID_31_DistanceSinceCodeClear & (0xFFU)) | (_m->S1_PID_15_OxySensor2_STFT_ro & (0xFFU)) | (_m->S1_PID_64_EngPctTorq_EP1_ro & (0xFFU)) | (_m->S1_PID_16_OxySensor3_STFT_ro & (0xFFU)) | (_m->S1_PID_14_OxySensor1_STFT_ro & (0xFFU)) | (_m->S1_PID_56_LongSecOxyTrimBank3_ro & (0xFFU)) | (_m->S1_PID_18_OxySensor5_STFT_ro & (0xFFU)) | (_m->S1_PID_4F_Max_OxySensVol & (0xFFU)) | (_m->S1_PID_55_ShortSecOxyTrimBank3_ro & (0xFFU)) | (_m->S1_PID_57_ShortSecOxyTrimBank4_ro & (0xFFU)) | (_m->S1_PID_58_LongSecOxyTrimBank4_ro & (0xFFU)) | (_m->S1_PID_17_OxySensor4_STFT_ro & (0xFFU)) | (_m->S1_PID_1B_OxySensor8_STFT_ro & (0xFFU)) | (_m->S1_PID_1A_OxySensor7_STFT_ro & (0xFFU)) | (_m->S1_PID_19_OxySensor6_STFT_ro & (0xFFU));
  _d[5] |= ((_m->S1_PID_41_MonStatusDriveCycle >> 8) & (0xFFU)) | ((_m->S1_PID_40_PIDsSupported_41_60 >> 8) & (0xFFU)) | ((_m->S1_PID_00_PIDsSupported_01_20 >> 8) & (0xFFU)) | ((_m->S1_PID_C0_PIDsSupported_C1_E0 >> 8) & (0xFFU)) | ((_m->S1_PID_A0_PIDsSupported_A1_C0 >> 8) & (0xFFU)) | ((_m->S1_PID_80_PIDsSupported_81_A0 >> 8) & (0xFFU)) | ((_m->S1_PID_60_PIDsSupported_61_80 >> 8) & (0xFFU)) | ((_m->S1_PID_20_PIDsSupported_21_40 >> 8) & (0xFFU)) | ((_m->S1_PID_01_MonitorStatus >> 8) & (0xFFU)) | ((_m->S1_PID_35_OxySensor2_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_37_OxySensor4_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_38_OxySensor5_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_34_OxySensor1_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_39_OxySensor6_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_36_OxySensor3_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3A_OxySensor7_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_3B_OxySensor8_Crnt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_2B_OxySensor8_Volt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_2A_OxySensor7_Volt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_29_OxySensor6_Volt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_28_OxySensor5_Volt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_27_OxySensor4_Volt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_26_OxySensor3_Volt_ro >> 8) & (0xFFU)) | ((_m->S1_PID_25_OxySensor2_Volt_ro >> 8) & (0xFFU)) | (_m->S1_PID_4F_Max_OxySensCrnt & (0xFFU)) | ((_m->S1_PID_24_OxySensor1_Volt_ro >> 8) & (0xFFU)) | (_m->S1_PID_64_EngPctTorq_EP2_ro & (0xFFU));
  _d[6] |= (_m->S1_PID_41_MonStatusDriveCycle & (0xFFU)) | (_m->S1_PID_40_PIDsSupported_41_60 & (0xFFU)) | (_m->S1_PID_00_PIDsSupported_01_20 & (0xFFU)) | (_m->S1_PID_C0_PIDsSupported_C1_E0 & (0xFFU)) | (_m->S1_PID_A0_PIDsSupported_A1_C0 & (0xFFU)) | (_m->S1_PID_80_PIDsSupported_81_A0 & (0xFFU)) | (_m->S1_PID_60_PIDsSupported_61_80 & (0xFFU)) | (_m->S1_PID_20_PIDsSupported_21_40 & (0xFFU)) | (_m->S1_PID_01_MonitorStatus & (0xFFU)) | (_m->S1_PID_35_OxySensor2_Crnt_ro & (0xFFU)) | (_m->S1_PID_37_OxySensor4_Crnt_ro & (0xFFU)) | (_m->S1_PID_38_OxySensor5_Crnt_ro & (0xFFU)) | (_m->S1_PID_34_OxySensor1_Crnt_ro & (0xFFU)) | (_m->S1_PID_39_OxySensor6_Crnt_ro & (0xFFU)) | (_m->S1_PID_36_OxySensor3_Crnt_ro & (0xFFU)) | (_m->S1_PID_3A_OxySensor7_Crnt_ro & (0xFFU)) | (_m->S1_PID_3B_OxySensor8_Crnt_ro & (0xFFU)) | (_m->S1_PID_2B_OxySensor8_Volt_ro & (0xFFU)) | (_m->S1_PID_2A_OxySensor7_Volt_ro & (0xFFU)) | (_m->S1_PID_29_OxySensor6_Volt_ro & (0xFFU)) | (_m->S1_PID_28_OxySensor5_Volt_ro & (0xFFU)) | (_m->S1_PID_27_OxySensor4_Volt_ro & (0xFFU)) | (_m->S1_PID_26_OxySensor3_Volt_ro & (0xFFU)) | (_m->S1_PID_25_OxySensor2_Volt_ro & (0xFFU)) | (_m->S1_PID_24_OxySensor1_Volt_ro & (0xFFU)) | (_m->S1_PID_4F_Max_IntManiAbsPres_ro & (0xFFU)) | (_m->S1_PID_64_EngPctTorq_EP3_ro & (0xFFU));
  _d[7] |= (_m->S1_PID_64_EngPctTorq_EP4_ro & (0xFFU));

  *_len = OBD2_DLC;
  *_ide = OBD2_IDE;
  return OBD2_CANID;
}

#endif // AUDI104_USE_CANSTRUCT

