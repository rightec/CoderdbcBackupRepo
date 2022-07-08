#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

// DBC file version
#define VER_AUDI104_MAJ (0U)
#define VER_AUDI104_MIN (0U)

// include current dbc-driver compilation config
#include <audi104-config.h>

#ifdef AUDI104_USE_DIAG_MONITORS
// This file must define:
// base monitor struct
// function signature for HASH calculation: (@GetFrameHash)
// function signature for getting system tick value: (@GetSystemTick)
#include <canmonitorutil.h>

#endif // AUDI104_USE_DIAG_MONITORS


// OBD2 DBC developed by canmatrix & CSS Electronics - for questions contact us at www.csselectronics.com
// def @OBD2 CAN Message (2024 0x7e8)
#define OBD2_IDE (0U)
#define OBD2_DLC (8U)
#define OBD2_CANID (0x7e8)

// Value tables for @service signal

#ifndef service_OBD2_Permanent_DTCs_Cleared_DTCs_
#define service_OBD2_Permanent_DTCs_Cleared_DTCs_ (10)
#endif

#ifndef service_OBD2_Request_vehicle_information_
#define service_OBD2_Request_vehicle_information_ (9)
#endif

#ifndef service_OBD2_Control_onboard_system_
#define service_OBD2_Control_onboard_system_ (8)
#endif

#ifndef service_OBD2_Show_pending_DTCs_
#define service_OBD2_Show_pending_DTCs_ (7)
#endif

#ifndef service_OBD2_Other_system_monitoring_
#define service_OBD2_Other_system_monitoring_ (6)
#endif

#ifndef service_OBD2_Oxygen_sensor_monitoring_
#define service_OBD2_Oxygen_sensor_monitoring_ (5)
#endif

#ifndef service_OBD2_Clear_DTCs_and_stored_values
#define service_OBD2_Clear_DTCs_and_stored_values (4)
#endif

#ifndef service_OBD2_Show_stored_DTCs_
#define service_OBD2_Show_stored_DTCs_ (3)
#endif

#ifndef service_OBD2_Show_freeze_frame_data_
#define service_OBD2_Show_freeze_frame_data_ (2)
#endif

#ifndef service_OBD2_Show_current_data_
#define service_OBD2_Show_current_data_ (1)
#endif


// Value tables for @ParameterID_Service02 signal

#ifndef ParameterID_Service02_OBD2_S2_PID_02_FreezeDTC
#define ParameterID_Service02_OBD2_S2_PID_02_FreezeDTC (2)
#endif


// Value tables for @ParameterID_Service01 signal

#ifndef ParameterID_Service01_OBD2_S1_PID_00_PIDsSupported_01_20
#define ParameterID_Service01_OBD2_S1_PID_00_PIDsSupported_01_20 (0)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_01_MonitorStatus
#define ParameterID_Service01_OBD2_S1_PID_01_MonitorStatus (1)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_02_FreezeDTC
#define ParameterID_Service01_OBD2_S1_PID_02_FreezeDTC (2)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_03_FuelSystemStatus
#define ParameterID_Service01_OBD2_S1_PID_03_FuelSystemStatus (3)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_04_CalcEngineLoad
#define ParameterID_Service01_OBD2_S1_PID_04_CalcEngineLoad (4)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_05_EngineCoolantTemp
#define ParameterID_Service01_OBD2_S1_PID_05_EngineCoolantTemp (5)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_06_ShortFuelTrimBank1
#define ParameterID_Service01_OBD2_S1_PID_06_ShortFuelTrimBank1 (6)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_07_LongFuelTrimBank1
#define ParameterID_Service01_OBD2_S1_PID_07_LongFuelTrimBank1 (7)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_08_ShortFuelTrimBank2
#define ParameterID_Service01_OBD2_S1_PID_08_ShortFuelTrimBank2 (8)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_09_LongFuelTrimBank2
#define ParameterID_Service01_OBD2_S1_PID_09_LongFuelTrimBank2 (9)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_0A_FuelPressure
#define ParameterID_Service01_OBD2_S1_PID_0A_FuelPressure (10)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_0B_IntakeManiAbsPress
#define ParameterID_Service01_OBD2_S1_PID_0B_IntakeManiAbsPress (11)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_0C_EngineRPM
#define ParameterID_Service01_OBD2_S1_PID_0C_EngineRPM (12)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_0D_VehicleSpeed
#define ParameterID_Service01_OBD2_S1_PID_0D_VehicleSpeed (13)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_0E_TimingAdvance
#define ParameterID_Service01_OBD2_S1_PID_0E_TimingAdvance (14)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_0F_IntakeAirTemperature
#define ParameterID_Service01_OBD2_S1_PID_0F_IntakeAirTemperature (15)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_10_MAFAirFlowRate
#define ParameterID_Service01_OBD2_S1_PID_10_MAFAirFlowRate (16)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_11_ThrottlePosition
#define ParameterID_Service01_OBD2_S1_PID_11_ThrottlePosition (17)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_12_CmdSecAirStatus
#define ParameterID_Service01_OBD2_S1_PID_12_CmdSecAirStatus (18)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_14_OxySensor1
#define ParameterID_Service01_OBD2_S1_PID_14_OxySensor1 (20)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_15_OxySensor2
#define ParameterID_Service01_OBD2_S1_PID_15_OxySensor2 (21)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_16_OxySensor3
#define ParameterID_Service01_OBD2_S1_PID_16_OxySensor3 (22)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_17_OxySensor4
#define ParameterID_Service01_OBD2_S1_PID_17_OxySensor4 (23)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_18_OxySensor5
#define ParameterID_Service01_OBD2_S1_PID_18_OxySensor5 (24)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_19_OxySensor6
#define ParameterID_Service01_OBD2_S1_PID_19_OxySensor6 (25)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_1A_OxySensor7
#define ParameterID_Service01_OBD2_S1_PID_1A_OxySensor7 (26)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_1B_OxySensor8
#define ParameterID_Service01_OBD2_S1_PID_1B_OxySensor8 (27)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_1C_OBDStandard
#define ParameterID_Service01_OBD2_S1_PID_1C_OBDStandard (28)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_1F_TimeSinceEngStart
#define ParameterID_Service01_OBD2_S1_PID_1F_TimeSinceEngStart (31)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_20_PIDsSupported_21_40
#define ParameterID_Service01_OBD2_S1_PID_20_PIDsSupported_21_40 (32)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_21_DistanceMILOn
#define ParameterID_Service01_OBD2_S1_PID_21_DistanceMILOn (33)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_22_FuelRailPres
#define ParameterID_Service01_OBD2_S1_PID_22_FuelRailPres (34)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_23_FuelRailGaug
#define ParameterID_Service01_OBD2_S1_PID_23_FuelRailGaug (35)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_24_OxySensor1
#define ParameterID_Service01_OBD2_S1_PID_24_OxySensor1 (36)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_25_OxySensor2
#define ParameterID_Service01_OBD2_S1_PID_25_OxySensor2 (37)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_26_OxySensor3
#define ParameterID_Service01_OBD2_S1_PID_26_OxySensor3 (38)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_27_OxySensor4
#define ParameterID_Service01_OBD2_S1_PID_27_OxySensor4 (39)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_28_OxySensor5
#define ParameterID_Service01_OBD2_S1_PID_28_OxySensor5 (40)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_29_OxySensor6
#define ParameterID_Service01_OBD2_S1_PID_29_OxySensor6 (41)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_2A_OxySensor7
#define ParameterID_Service01_OBD2_S1_PID_2A_OxySensor7 (42)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_2B_OxySensor8
#define ParameterID_Service01_OBD2_S1_PID_2B_OxySensor8 (43)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_2C_CmdEGR
#define ParameterID_Service01_OBD2_S1_PID_2C_CmdEGR (44)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_2D_EGRError
#define ParameterID_Service01_OBD2_S1_PID_2D_EGRError (45)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_2E_CmdEvapPurge
#define ParameterID_Service01_OBD2_S1_PID_2E_CmdEvapPurge (46)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_2F_FuelTankLevel
#define ParameterID_Service01_OBD2_S1_PID_2F_FuelTankLevel (47)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_30_WarmUpsSinceCodeClear
#define ParameterID_Service01_OBD2_S1_PID_30_WarmUpsSinceCodeClear (48)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_31_DistanceSinceCodeClear
#define ParameterID_Service01_OBD2_S1_PID_31_DistanceSinceCodeClear (49)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_32_EvapSysVaporPres
#define ParameterID_Service01_OBD2_S1_PID_32_EvapSysVaporPres (50)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_33_AbsBaroPres
#define ParameterID_Service01_OBD2_S1_PID_33_AbsBaroPres (51)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_34_OxySensor1
#define ParameterID_Service01_OBD2_S1_PID_34_OxySensor1 (52)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_35_OxySensor2
#define ParameterID_Service01_OBD2_S1_PID_35_OxySensor2 (53)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_36_OxySensor3
#define ParameterID_Service01_OBD2_S1_PID_36_OxySensor3 (54)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_37_OxySensor4
#define ParameterID_Service01_OBD2_S1_PID_37_OxySensor4 (55)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_38_OxySensor5
#define ParameterID_Service01_OBD2_S1_PID_38_OxySensor5 (56)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_39_OxySensor6
#define ParameterID_Service01_OBD2_S1_PID_39_OxySensor6 (57)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_3A_OxySensor7
#define ParameterID_Service01_OBD2_S1_PID_3A_OxySensor7 (58)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_3B_OxySensor8
#define ParameterID_Service01_OBD2_S1_PID_3B_OxySensor8 (59)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_3C_CatTempBank1Sens1
#define ParameterID_Service01_OBD2_S1_PID_3C_CatTempBank1Sens1 (60)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_3D_CatTempBank2Sens1
#define ParameterID_Service01_OBD2_S1_PID_3D_CatTempBank2Sens1 (61)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_3E_CatTempBank1Sens2
#define ParameterID_Service01_OBD2_S1_PID_3E_CatTempBank1Sens2 (62)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_3F_CatTempBank2Sens2
#define ParameterID_Service01_OBD2_S1_PID_3F_CatTempBank2Sens2 (63)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_40_PIDsSupported_41_60
#define ParameterID_Service01_OBD2_S1_PID_40_PIDsSupported_41_60 (64)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_41_MonStatusDriveCycle
#define ParameterID_Service01_OBD2_S1_PID_41_MonStatusDriveCycle (65)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_42_ControlModuleVolt
#define ParameterID_Service01_OBD2_S1_PID_42_ControlModuleVolt (66)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_43_AbsLoadValue
#define ParameterID_Service01_OBD2_S1_PID_43_AbsLoadValue (67)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_44_FuelAirCmdEquiv
#define ParameterID_Service01_OBD2_S1_PID_44_FuelAirCmdEquiv (68)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_45_RelThrottlePos
#define ParameterID_Service01_OBD2_S1_PID_45_RelThrottlePos (69)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_46_AmbientAirTemp
#define ParameterID_Service01_OBD2_S1_PID_46_AmbientAirTemp (70)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_47_AbsThrottlePosB
#define ParameterID_Service01_OBD2_S1_PID_47_AbsThrottlePosB (71)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_48_AbsThrottlePosC
#define ParameterID_Service01_OBD2_S1_PID_48_AbsThrottlePosC (72)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_49_AbsThrottlePosD
#define ParameterID_Service01_OBD2_S1_PID_49_AbsThrottlePosD (73)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_4A_AbsThrottlePosE
#define ParameterID_Service01_OBD2_S1_PID_4A_AbsThrottlePosE (74)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_4B_AbsThrottlePosF
#define ParameterID_Service01_OBD2_S1_PID_4B_AbsThrottlePosF (75)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_4C_CmdThrottleAct
#define ParameterID_Service01_OBD2_S1_PID_4C_CmdThrottleAct (76)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_4D_TimeRunMILOn
#define ParameterID_Service01_OBD2_S1_PID_4D_TimeRunMILOn (77)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_4E_TimeSinceCodeClear
#define ParameterID_Service01_OBD2_S1_PID_4E_TimeSinceCodeClear (78)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_4F_MaxMultiple
#define ParameterID_Service01_OBD2_S1_PID_4F_MaxMultiple (79)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_50_Max_AirFlowMAF
#define ParameterID_Service01_OBD2_S1_PID_50_Max_AirFlowMAF (80)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_51_FuelType
#define ParameterID_Service01_OBD2_S1_PID_51_FuelType (81)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_52_EthanolFuelPct
#define ParameterID_Service01_OBD2_S1_PID_52_EthanolFuelPct (82)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_53_AbsEvapSysVapPres
#define ParameterID_Service01_OBD2_S1_PID_53_AbsEvapSysVapPres (83)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_54_EvapSysVapPres
#define ParameterID_Service01_OBD2_S1_PID_54_EvapSysVapPres (84)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_55_ShortSecOxyTrimBankX
#define ParameterID_Service01_OBD2_S1_PID_55_ShortSecOxyTrimBankX (85)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_56_LongSecOxyTrimBankX
#define ParameterID_Service01_OBD2_S1_PID_56_LongSecOxyTrimBankX (86)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_57_ShortSecOxyTrimBankX
#define ParameterID_Service01_OBD2_S1_PID_57_ShortSecOxyTrimBankX (87)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_58_LongSecOxyTrimBankX
#define ParameterID_Service01_OBD2_S1_PID_58_LongSecOxyTrimBankX (88)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_59_FuelRailAbsPres
#define ParameterID_Service01_OBD2_S1_PID_59_FuelRailAbsPres (89)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_5A_RelAccelPedalPos
#define ParameterID_Service01_OBD2_S1_PID_5A_RelAccelPedalPos (90)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_5B_HybrBatPackRemLife
#define ParameterID_Service01_OBD2_S1_PID_5B_HybrBatPackRemLife (91)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_5C_EngineOilTemp
#define ParameterID_Service01_OBD2_S1_PID_5C_EngineOilTemp (92)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_5D_FuelInjectionTiming
#define ParameterID_Service01_OBD2_S1_PID_5D_FuelInjectionTiming (93)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_5E_EngineFuelRate
#define ParameterID_Service01_OBD2_S1_PID_5E_EngineFuelRate (94)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_5F_EmissionReq
#define ParameterID_Service01_OBD2_S1_PID_5F_EmissionReq (95)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_60_PIDsSupported_61_80
#define ParameterID_Service01_OBD2_S1_PID_60_PIDsSupported_61_80 (96)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_61_DemandEngTorqPct
#define ParameterID_Service01_OBD2_S1_PID_61_DemandEngTorqPct (97)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_62_ActualEngTorqPct
#define ParameterID_Service01_OBD2_S1_PID_62_ActualEngTorqPct (98)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_63_EngRefTorq
#define ParameterID_Service01_OBD2_S1_PID_63_EngRefTorq (99)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_64_EngPctTorq
#define ParameterID_Service01_OBD2_S1_PID_64_EngPctTorq (100)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_65_AuxInputOutput
#define ParameterID_Service01_OBD2_S1_PID_65_AuxInputOutput (101)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_66_MAFSensor
#define ParameterID_Service01_OBD2_S1_PID_66_MAFSensor (102)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_67_EngineCoolantTemp
#define ParameterID_Service01_OBD2_S1_PID_67_EngineCoolantTemp (103)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_68_IntakeAirTempSens
#define ParameterID_Service01_OBD2_S1_PID_68_IntakeAirTempSens (104)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_69_CmdEGR_EGRError
#define ParameterID_Service01_OBD2_S1_PID_69_CmdEGR_EGRError (105)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_6A_CmdDieselIntAir
#define ParameterID_Service01_OBD2_S1_PID_6A_CmdDieselIntAir (106)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_6B_ExhaustGasTemp
#define ParameterID_Service01_OBD2_S1_PID_6B_ExhaustGasTemp (107)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_6C_CmdThrottleActRel
#define ParameterID_Service01_OBD2_S1_PID_6C_CmdThrottleActRel (108)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_6D_FuelPresContrSys
#define ParameterID_Service01_OBD2_S1_PID_6D_FuelPresContrSys (109)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_6E_InjPresContrSys
#define ParameterID_Service01_OBD2_S1_PID_6E_InjPresContrSys (110)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_6F_TurboComprPres
#define ParameterID_Service01_OBD2_S1_PID_6F_TurboComprPres (111)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_70_BoostPresCntrl
#define ParameterID_Service01_OBD2_S1_PID_70_BoostPresCntrl (112)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_80_PIDsSupported_81_A0
#define ParameterID_Service01_OBD2_S1_PID_80_PIDsSupported_81_A0 (128)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_8E_EngFrictionPctTorq
#define ParameterID_Service01_OBD2_S1_PID_8E_EngFrictionPctTorq (142)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_A0_PIDsSupported_A1_C0
#define ParameterID_Service01_OBD2_S1_PID_A0_PIDsSupported_A1_C0 (160)
#endif

#ifndef ParameterID_Service01_OBD2_S1_PID_C0_PIDsSupported_C1_E0
#define ParameterID_Service01_OBD2_S1_PID_C0_PIDsSupported_C1_E0 (192)
#endif

// signal: @S1_PID_47_AbsThrottlePosB_ro
#define AUDI104_S1_PID_47_AbsThrottlePosB_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_47_AbsThrottlePosB_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_47_AbsThrottlePosB_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_55_ShortSecOxyTrimBank1_ro
#define AUDI104_S1_PID_55_ShortSecOxyTrimBank1_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_55_ShortSecOxyTrimBank1_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_55_ShortSecOxyTrimBank1_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_48_AbsThrottlePosC_ro
#define AUDI104_S1_PID_48_AbsThrottlePosC_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_48_AbsThrottlePosC_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_48_AbsThrottlePosC_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_49_AbsThrottlePosD_ro
#define AUDI104_S1_PID_49_AbsThrottlePosD_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_49_AbsThrottlePosD_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_49_AbsThrottlePosD_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_4A_AbsThrottlePosE_ro
#define AUDI104_S1_PID_4A_AbsThrottlePosE_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_4A_AbsThrottlePosE_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_4A_AbsThrottlePosE_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_4B_AbsThrottlePosF_ro
#define AUDI104_S1_PID_4B_AbsThrottlePosF_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_4B_AbsThrottlePosF_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_4B_AbsThrottlePosF_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_4C_CmdThrottleAct_ro
#define AUDI104_S1_PID_4C_CmdThrottleAct_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_4C_CmdThrottleAct_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_4C_CmdThrottleAct_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_50_Max_AirFlowMAF_ro
#define AUDI104_S1_PID_50_Max_AirFlowMAF_ro_CovFactor (10)
#define AUDI104_S1_PID_50_Max_AirFlowMAF_ro_toS(x) ( (uint8_t) ((x) / (10)) )
#define AUDI104_S1_PID_50_Max_AirFlowMAF_ro_fromS(x) ( ((x) * (10)) )

// Value tables for @S1_PID_51_FuelType signal

#ifndef S1_PID_51_FuelType_OBD2_Not_available
#define S1_PID_51_FuelType_OBD2_Not_available (0)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Gasoline
#define S1_PID_51_FuelType_OBD2_Gasoline (1)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Methanol
#define S1_PID_51_FuelType_OBD2_Methanol (2)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Ethanol
#define S1_PID_51_FuelType_OBD2_Ethanol (3)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Diesel
#define S1_PID_51_FuelType_OBD2_Diesel (4)
#endif

#ifndef S1_PID_51_FuelType_OBD2_LPG
#define S1_PID_51_FuelType_OBD2_LPG (5)
#endif

#ifndef S1_PID_51_FuelType_OBD2_CNG
#define S1_PID_51_FuelType_OBD2_CNG (6)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Propane
#define S1_PID_51_FuelType_OBD2_Propane (7)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Electric
#define S1_PID_51_FuelType_OBD2_Electric (8)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Bifuel_running_Gasoline
#define S1_PID_51_FuelType_OBD2_Bifuel_running_Gasoline (9)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Bifuel_running_Methanol
#define S1_PID_51_FuelType_OBD2_Bifuel_running_Methanol (10)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Bifuel_running_Ethanol
#define S1_PID_51_FuelType_OBD2_Bifuel_running_Ethanol (11)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Bifuel_running_LPG
#define S1_PID_51_FuelType_OBD2_Bifuel_running_LPG (12)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Bifuel_running_CNG
#define S1_PID_51_FuelType_OBD2_Bifuel_running_CNG (13)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Bifuel_running_Propane
#define S1_PID_51_FuelType_OBD2_Bifuel_running_Propane (14)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Bifuel_running_Electricity
#define S1_PID_51_FuelType_OBD2_Bifuel_running_Electricity (15)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Bifuel_electriccomb_eng
#define S1_PID_51_FuelType_OBD2_Bifuel_electriccomb_eng (16)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Hybrid_gasoline
#define S1_PID_51_FuelType_OBD2_Hybrid_gasoline (17)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Hybrid_Ethanol
#define S1_PID_51_FuelType_OBD2_Hybrid_Ethanol (18)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Hybrid_Diesel
#define S1_PID_51_FuelType_OBD2_Hybrid_Diesel (19)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Hybrid_Electric
#define S1_PID_51_FuelType_OBD2_Hybrid_Electric (20)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Hybrid_running_electriccomb
#define S1_PID_51_FuelType_OBD2_Hybrid_running_electriccomb (21)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Hybrid_Regenerative
#define S1_PID_51_FuelType_OBD2_Hybrid_Regenerative (22)
#endif

#ifndef S1_PID_51_FuelType_OBD2_Bifuel_running_diesel
#define S1_PID_51_FuelType_OBD2_Bifuel_running_diesel (23)
#endif

// signal: @S1_PID_52_EthanolFuelPct_ro
#define AUDI104_S1_PID_52_EthanolFuelPct_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_52_EthanolFuelPct_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_52_EthanolFuelPct_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_53_AbsEvapSysVapPres_ro
#define AUDI104_S1_PID_53_AbsEvapSysVapPres_ro_CovFactor (0.005000)
#define AUDI104_S1_PID_53_AbsEvapSysVapPres_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.005000)) )
#define AUDI104_S1_PID_53_AbsEvapSysVapPres_ro_fromS(x) ( (((x) * (0.005000)) + (0.000000)) )
// signal: @S1_PID_54_EvapSysVapPres_ro
#define AUDI104_S1_PID_54_EvapSysVapPres_ro_CovFactor (1)
#define AUDI104_S1_PID_54_EvapSysVapPres_ro_toS(x) ( (uint16_t) ((x) - (-32767)) )
#define AUDI104_S1_PID_54_EvapSysVapPres_ro_fromS(x) ( ((x) + (-32767)) )
// signal: @S1_PID_37_OxySensor4_FAER_ro
#define AUDI104_S1_PID_37_OxySensor4_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_37_OxySensor4_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_37_OxySensor4_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_46_AmbientAirTemp_ro
#define AUDI104_S1_PID_46_AmbientAirTemp_ro_CovFactor (1)
#define AUDI104_S1_PID_46_AmbientAirTemp_ro_toS(x) ( (uint8_t) ((x) - (-40)) )
#define AUDI104_S1_PID_46_AmbientAirTemp_ro_fromS(x) ( ((x) + (-40)) )
// signal: @S1_PID_45_RelThrottlePos_ro
#define AUDI104_S1_PID_45_RelThrottlePos_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_45_RelThrottlePos_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_45_RelThrottlePos_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_44_FuelAirCmdEquiv_ro
#define AUDI104_S1_PID_44_FuelAirCmdEquiv_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_44_FuelAirCmdEquiv_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_44_FuelAirCmdEquiv_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_43_AbsLoadValue_ro
#define AUDI104_S1_PID_43_AbsLoadValue_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_43_AbsLoadValue_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_43_AbsLoadValue_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_42_ControlModuleVolt_ro
#define AUDI104_S1_PID_42_ControlModuleVolt_ro_CovFactor (0.001000)
#define AUDI104_S1_PID_42_ControlModuleVolt_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.001000)) )
#define AUDI104_S1_PID_42_ControlModuleVolt_ro_fromS(x) ( (((x) * (0.001000)) + (0.000000)) )
// signal: @S1_PID_3F_CatTempBank2Sens2_ro
#define AUDI104_S1_PID_3F_CatTempBank2Sens2_ro_CovFactor (0.100000)
#define AUDI104_S1_PID_3F_CatTempBank2Sens2_ro_toS(x) ( (uint16_t) (((x) - (-40.000000)) / (0.100000)) )
#define AUDI104_S1_PID_3F_CatTempBank2Sens2_ro_fromS(x) ( (((x) * (0.100000)) + (-40.000000)) )
// signal: @S1_PID_3E_CatTempBank1Sens2_ro
#define AUDI104_S1_PID_3E_CatTempBank1Sens2_ro_CovFactor (0.100000)
#define AUDI104_S1_PID_3E_CatTempBank1Sens2_ro_toS(x) ( (uint16_t) (((x) - (-40.000000)) / (0.100000)) )
#define AUDI104_S1_PID_3E_CatTempBank1Sens2_ro_fromS(x) ( (((x) * (0.100000)) + (-40.000000)) )
// signal: @S1_PID_3D_CatTempBank2Sens1_ro
#define AUDI104_S1_PID_3D_CatTempBank2Sens1_ro_CovFactor (0.100000)
#define AUDI104_S1_PID_3D_CatTempBank2Sens1_ro_toS(x) ( (uint16_t) (((x) - (-40.000000)) / (0.100000)) )
#define AUDI104_S1_PID_3D_CatTempBank2Sens1_ro_fromS(x) ( (((x) * (0.100000)) + (-40.000000)) )
// signal: @S1_PID_3C_CatTempBank1Sens1_ro
#define AUDI104_S1_PID_3C_CatTempBank1Sens1_ro_CovFactor (0.100000)
#define AUDI104_S1_PID_3C_CatTempBank1Sens1_ro_toS(x) ( (uint16_t) (((x) - (-40.000000)) / (0.100000)) )
#define AUDI104_S1_PID_3C_CatTempBank1Sens1_ro_fromS(x) ( (((x) * (0.100000)) + (-40.000000)) )
// signal: @S1_PID_3B_OxySensor8_FAER_ro
#define AUDI104_S1_PID_3B_OxySensor8_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_3B_OxySensor8_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_3B_OxySensor8_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_39_OxySensor6_FAER_ro
#define AUDI104_S1_PID_39_OxySensor6_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_39_OxySensor6_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_39_OxySensor6_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_38_OxySensor5_FAER_ro
#define AUDI104_S1_PID_38_OxySensor5_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_38_OxySensor5_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_38_OxySensor5_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_3A_OxySensor7_FAER_ro
#define AUDI104_S1_PID_3A_OxySensor7_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_3A_OxySensor7_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_3A_OxySensor7_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_8E_EngFrictionPctTorq_ro
#define AUDI104_S1_PID_8E_EngFrictionPctTorq_ro_CovFactor (1)
#define AUDI104_S1_PID_8E_EngFrictionPctTorq_ro_toS(x) ( (uint8_t) ((x) - (-125)) )
#define AUDI104_S1_PID_8E_EngFrictionPctTorq_ro_fromS(x) ( ((x) + (-125)) )
// signal: @S1_PID_56_LongSecOxyTrimBank1_ro
#define AUDI104_S1_PID_56_LongSecOxyTrimBank1_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_56_LongSecOxyTrimBank1_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_56_LongSecOxyTrimBank1_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_64_EngPctTorq_Idle_ro
#define AUDI104_S1_PID_64_EngPctTorq_Idle_ro_CovFactor (1)
#define AUDI104_S1_PID_64_EngPctTorq_Idle_ro_toS(x) ( (uint8_t) ((x) - (-125)) )
#define AUDI104_S1_PID_64_EngPctTorq_Idle_ro_fromS(x) ( ((x) + (-125)) )
// signal: @S1_PID_62_ActualEngTorqPct_ro
#define AUDI104_S1_PID_62_ActualEngTorqPct_ro_CovFactor (1)
#define AUDI104_S1_PID_62_ActualEngTorqPct_ro_toS(x) ( (uint8_t) ((x) - (-125)) )
#define AUDI104_S1_PID_62_ActualEngTorqPct_ro_fromS(x) ( ((x) + (-125)) )
// signal: @S1_PID_61_DemandEngTorqPct_ro
#define AUDI104_S1_PID_61_DemandEngTorqPct_ro_CovFactor (1)
#define AUDI104_S1_PID_61_DemandEngTorqPct_ro_toS(x) ( (uint8_t) ((x) - (-125)) )
#define AUDI104_S1_PID_61_DemandEngTorqPct_ro_fromS(x) ( ((x) + (-125)) )
// signal: @S1_PID_5E_EngineFuelRate_ro
#define AUDI104_S1_PID_5E_EngineFuelRate_ro_CovFactor (0.050000)
#define AUDI104_S1_PID_5E_EngineFuelRate_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.050000)) )
#define AUDI104_S1_PID_5E_EngineFuelRate_ro_fromS(x) ( (((x) * (0.050000)) + (0.000000)) )
// signal: @S1_PID_5D_FuelInjectionTiming_ro
#define AUDI104_S1_PID_5D_FuelInjectionTiming_ro_CovFactor (0.007812)
#define AUDI104_S1_PID_5D_FuelInjectionTiming_ro_toS(x) ( (uint16_t) (((x) - (-210.000000)) / (0.007812)) )
#define AUDI104_S1_PID_5D_FuelInjectionTiming_ro_fromS(x) ( (((x) * (0.007812)) + (-210.000000)) )
// signal: @S1_PID_5C_EngineOilTemp_ro
#define AUDI104_S1_PID_5C_EngineOilTemp_ro_CovFactor (1)
#define AUDI104_S1_PID_5C_EngineOilTemp_ro_toS(x) ( (uint8_t) ((x) - (-40)) )
#define AUDI104_S1_PID_5C_EngineOilTemp_ro_fromS(x) ( ((x) + (-40)) )
// signal: @S1_PID_5B_HybrBatPackRemLife_ro
#define AUDI104_S1_PID_5B_HybrBatPackRemLife_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_5B_HybrBatPackRemLife_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_5B_HybrBatPackRemLife_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_5A_RelAccelPedalPos_ro
#define AUDI104_S1_PID_5A_RelAccelPedalPos_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_5A_RelAccelPedalPos_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_5A_RelAccelPedalPos_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_59_FuelRailAbsPres_ro
#define AUDI104_S1_PID_59_FuelRailAbsPres_ro_CovFactor (10)
#define AUDI104_S1_PID_59_FuelRailAbsPres_ro_toS(x) ( (uint16_t) ((x) / (10)) )
#define AUDI104_S1_PID_59_FuelRailAbsPres_ro_fromS(x) ( ((x) * (10)) )
// signal: @S1_PID_58_LongSecOxyTrimBank2_ro
#define AUDI104_S1_PID_58_LongSecOxyTrimBank2_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_58_LongSecOxyTrimBank2_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_58_LongSecOxyTrimBank2_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_57_ShortSecOxyTrimBank2_ro
#define AUDI104_S1_PID_57_ShortSecOxyTrimBank2_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_57_ShortSecOxyTrimBank2_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_57_ShortSecOxyTrimBank2_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_22_FuelRailPres_ro
#define AUDI104_S1_PID_22_FuelRailPres_ro_CovFactor (0.079000)
#define AUDI104_S1_PID_22_FuelRailPres_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.079000)) )
#define AUDI104_S1_PID_22_FuelRailPres_ro_fromS(x) ( (((x) * (0.079000)) + (0.000000)) )
// signal: @S1_PID_28_OxySensor5_FAER_ro
#define AUDI104_S1_PID_28_OxySensor5_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_28_OxySensor5_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_28_OxySensor5_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_0E_TimingAdvance_ro
#define AUDI104_S1_PID_0E_TimingAdvance_ro_CovFactor (0.500000)
#define AUDI104_S1_PID_0E_TimingAdvance_ro_toS(x) ( (uint8_t) (((x) - (-64.000000)) / (0.500000)) )
#define AUDI104_S1_PID_0E_TimingAdvance_ro_fromS(x) ( (((x) * (0.500000)) + (-64.000000)) )
// signal: @S1_PID_26_OxySensor3_FAER_ro
#define AUDI104_S1_PID_26_OxySensor3_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_26_OxySensor3_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_26_OxySensor3_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_0F_IntakeAirTemperature_ro
#define AUDI104_S1_PID_0F_IntakeAirTemperature_ro_CovFactor (1)
#define AUDI104_S1_PID_0F_IntakeAirTemperature_ro_toS(x) ( (uint8_t) ((x) - (-40)) )
#define AUDI104_S1_PID_0F_IntakeAirTemperature_ro_fromS(x) ( ((x) + (-40)) )
// signal: @S1_PID_10_MAFAirFlowRate_ro
#define AUDI104_S1_PID_10_MAFAirFlowRate_ro_CovFactor (0.010000)
#define AUDI104_S1_PID_10_MAFAirFlowRate_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.010000)) )
#define AUDI104_S1_PID_10_MAFAirFlowRate_ro_fromS(x) ( (((x) * (0.010000)) + (0.000000)) )
// signal: @S1_PID_11_ThrottlePosition_ro
#define AUDI104_S1_PID_11_ThrottlePosition_ro_CovFactor (0.392160)
#define AUDI104_S1_PID_11_ThrottlePosition_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392160)) )
#define AUDI104_S1_PID_11_ThrottlePosition_ro_fromS(x) ( (((x) * (0.392160)) + (0.000000)) )

// Value tables for @S1_PID_12_CmdSecAirStatus signal

#ifndef S1_PID_12_CmdSecAirStatus_OBD2_Upstream
#define S1_PID_12_CmdSecAirStatus_OBD2_Upstream (1)
#endif

#ifndef S1_PID_12_CmdSecAirStatus_OBD2_Downstream_catalytic_conv
#define S1_PID_12_CmdSecAirStatus_OBD2_Downstream_catalytic_conv (2)
#endif

#ifndef S1_PID_12_CmdSecAirStatus_OBD2_From_outside_atmosphereoff
#define S1_PID_12_CmdSecAirStatus_OBD2_From_outside_atmosphereoff (4)
#endif

#ifndef S1_PID_12_CmdSecAirStatus_OBD2_Pump_cmd_on_for_diagn
#define S1_PID_12_CmdSecAirStatus_OBD2_Pump_cmd_on_for_diagn (8)
#endif

// signal: @S1_PID_25_OxySensor2_FAER_ro
#define AUDI104_S1_PID_25_OxySensor2_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_25_OxySensor2_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_25_OxySensor2_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_14_OxySensor1_Volt_ro
#define AUDI104_S1_PID_14_OxySensor1_Volt_ro_CovFactor (0.005000)
#define AUDI104_S1_PID_14_OxySensor1_Volt_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.005000)) )
#define AUDI104_S1_PID_14_OxySensor1_Volt_ro_fromS(x) ( (((x) * (0.005000)) + (0.000000)) )
// signal: @S1_PID_24_OxySensor1_FAER_ro
#define AUDI104_S1_PID_24_OxySensor1_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_24_OxySensor1_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_24_OxySensor1_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_23_FuelRailGaug_ro
#define AUDI104_S1_PID_23_FuelRailGaug_ro_CovFactor (10)
#define AUDI104_S1_PID_23_FuelRailGaug_ro_toS(x) ( (uint16_t) ((x) / (10)) )
#define AUDI104_S1_PID_23_FuelRailGaug_ro_fromS(x) ( ((x) * (10)) )
// signal: @S1_PID_27_OxySensor4_FAER_ro
#define AUDI104_S1_PID_27_OxySensor4_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_27_OxySensor4_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_27_OxySensor4_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_36_OxySensor3_FAER_ro
#define AUDI104_S1_PID_36_OxySensor3_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_36_OxySensor3_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_36_OxySensor3_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_15_OxySensor2_Volt_ro
#define AUDI104_S1_PID_15_OxySensor2_Volt_ro_CovFactor (0.005000)
#define AUDI104_S1_PID_15_OxySensor2_Volt_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.005000)) )
#define AUDI104_S1_PID_15_OxySensor2_Volt_ro_fromS(x) ( (((x) * (0.005000)) + (0.000000)) )

// Value tables for @S1_PID_1C_OBDStandard signal

#ifndef S1_PID_1C_OBDStandard_OBD2_OBDII_as_defined_by_the_CARB
#define S1_PID_1C_OBDStandard_OBD2_OBDII_as_defined_by_the_CARB (1)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_OBD_as_defined_by_the_EPA
#define S1_PID_1C_OBDStandard_OBD2_OBD_as_defined_by_the_EPA (2)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_OBD_and_OBDII
#define S1_PID_1C_OBDStandard_OBD2_OBD_and_OBDII (3)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_OBDI
#define S1_PID_1C_OBDStandard_OBD2_OBDI (4)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_Not_OBD_compliant
#define S1_PID_1C_OBDStandard_OBD2_Not_OBD_compliant (5)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_EOBD_Europe
#define S1_PID_1C_OBDStandard_OBD2_EOBD_Europe (6)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_EOBD_and_OBDII
#define S1_PID_1C_OBDStandard_OBD2_EOBD_and_OBDII (7)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_EOBD_and_OBD
#define S1_PID_1C_OBDStandard_OBD2_EOBD_and_OBD (8)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_EOBD_OBD_and_OBD_II
#define S1_PID_1C_OBDStandard_OBD2_EOBD_OBD_and_OBD_II (9)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_JOBD_Japan
#define S1_PID_1C_OBDStandard_OBD2_JOBD_Japan (10)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_JOBD_and_OBD_II
#define S1_PID_1C_OBDStandard_OBD2_JOBD_and_OBD_II (11)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_JOBD_and_EOBD
#define S1_PID_1C_OBDStandard_OBD2_JOBD_and_EOBD (12)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_JOBD_EOBD_and_OBD_II
#define S1_PID_1C_OBDStandard_OBD2_JOBD_EOBD_and_OBD_II (13)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_Reserved
#define S1_PID_1C_OBDStandard_OBD2_Reserved (14)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_Reserved
#define S1_PID_1C_OBDStandard_OBD2_Reserved (15)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_Reserved
#define S1_PID_1C_OBDStandard_OBD2_Reserved (16)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_Eng_Manu_Diag_EMD
#define S1_PID_1C_OBDStandard_OBD2_Eng_Manu_Diag_EMD (17)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_EMD_Enhanced_EMD
#define S1_PID_1C_OBDStandard_OBD2_EMD_Enhanced_EMD (18)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_HD_OBDC
#define S1_PID_1C_OBDStandard_OBD2_HD_OBDC (19)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_HD_OBD
#define S1_PID_1C_OBDStandard_OBD2_HD_OBD (20)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_WWH_OBD
#define S1_PID_1C_OBDStandard_OBD2_WWH_OBD (21)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_Reserved
#define S1_PID_1C_OBDStandard_OBD2_Reserved (22)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_HD_EOBDI
#define S1_PID_1C_OBDStandard_OBD2_HD_EOBDI (23)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_HD_EOBDI_N
#define S1_PID_1C_OBDStandard_OBD2_HD_EOBDI_N (24)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_HD_EOBDII
#define S1_PID_1C_OBDStandard_OBD2_HD_EOBDII (25)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_HD_EOBDII_N
#define S1_PID_1C_OBDStandard_OBD2_HD_EOBDII_N (26)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_Reserved
#define S1_PID_1C_OBDStandard_OBD2_Reserved (27)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_OBDBr1
#define S1_PID_1C_OBDStandard_OBD2_OBDBr1 (28)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_OBDBr2
#define S1_PID_1C_OBDStandard_OBD2_OBDBr2 (29)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_KOBD
#define S1_PID_1C_OBDStandard_OBD2_KOBD (30)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_IOBD_I
#define S1_PID_1C_OBDStandard_OBD2_IOBD_I (31)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_IOBD_II
#define S1_PID_1C_OBDStandard_OBD2_IOBD_II (32)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_HD_EOBDIV
#define S1_PID_1C_OBDStandard_OBD2_HD_EOBDIV (33)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_Reserved
#define S1_PID_1C_OBDStandard_OBD2_Reserved (34)
#endif

#ifndef S1_PID_1C_OBDStandard_OBD2_Reserved
#define S1_PID_1C_OBDStandard_OBD2_Reserved (35)
#endif

// signal: @S1_PID_1B_OxySensor8_Volt_ro
#define AUDI104_S1_PID_1B_OxySensor8_Volt_ro_CovFactor (0.005000)
#define AUDI104_S1_PID_1B_OxySensor8_Volt_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.005000)) )
#define AUDI104_S1_PID_1B_OxySensor8_Volt_ro_fromS(x) ( (((x) * (0.005000)) + (0.000000)) )
// signal: @S1_PID_16_OxySensor3_Volt_ro
#define AUDI104_S1_PID_16_OxySensor3_Volt_ro_CovFactor (0.005000)
#define AUDI104_S1_PID_16_OxySensor3_Volt_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.005000)) )
#define AUDI104_S1_PID_16_OxySensor3_Volt_ro_fromS(x) ( (((x) * (0.005000)) + (0.000000)) )
// signal: @S1_PID_1A_OxySensor7_Volt_ro
#define AUDI104_S1_PID_1A_OxySensor7_Volt_ro_CovFactor (0.005000)
#define AUDI104_S1_PID_1A_OxySensor7_Volt_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.005000)) )
#define AUDI104_S1_PID_1A_OxySensor7_Volt_ro_fromS(x) ( (((x) * (0.005000)) + (0.000000)) )
// signal: @S1_PID_19_OxySensor6_Volt_ro
#define AUDI104_S1_PID_19_OxySensor6_Volt_ro_CovFactor (0.005000)
#define AUDI104_S1_PID_19_OxySensor6_Volt_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.005000)) )
#define AUDI104_S1_PID_19_OxySensor6_Volt_ro_fromS(x) ( (((x) * (0.005000)) + (0.000000)) )
// signal: @S1_PID_17_OxySensor4_Volt_ro
#define AUDI104_S1_PID_17_OxySensor4_Volt_ro_CovFactor (0.005000)
#define AUDI104_S1_PID_17_OxySensor4_Volt_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.005000)) )
#define AUDI104_S1_PID_17_OxySensor4_Volt_ro_fromS(x) ( (((x) * (0.005000)) + (0.000000)) )
// signal: @S1_PID_18_OxySensor5_Volt_ro
#define AUDI104_S1_PID_18_OxySensor5_Volt_ro_CovFactor (0.005000)
#define AUDI104_S1_PID_18_OxySensor5_Volt_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.005000)) )
#define AUDI104_S1_PID_18_OxySensor5_Volt_ro_fromS(x) ( (((x) * (0.005000)) + (0.000000)) )
// signal: @S1_PID_29_OxySensor6_FAER_ro
#define AUDI104_S1_PID_29_OxySensor6_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_29_OxySensor6_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_29_OxySensor6_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )

// Value tables for @S1_PID_03_FuelSystemStatus signal

#ifndef S1_PID_03_FuelSystemStatus_OBD2_Open_loop_insuff_eng_temp
#define S1_PID_03_FuelSystemStatus_OBD2_Open_loop_insuff_eng_temp (1)
#endif

#ifndef S1_PID_03_FuelSystemStatus_OBD2_Closed_loop_oxy_sens
#define S1_PID_03_FuelSystemStatus_OBD2_Closed_loop_oxy_sens (2)
#endif

#ifndef S1_PID_03_FuelSystemStatus_OBD2_Open_loop_eng_load_fuel_cut
#define S1_PID_03_FuelSystemStatus_OBD2_Open_loop_eng_load_fuel_cut (4)
#endif

#ifndef S1_PID_03_FuelSystemStatus_OBD2_Open_loop_system_failure
#define S1_PID_03_FuelSystemStatus_OBD2_Open_loop_system_failure (8)
#endif

#ifndef S1_PID_03_FuelSystemStatus_OBD2_Closed_loop_feedback_issue
#define S1_PID_03_FuelSystemStatus_OBD2_Closed_loop_feedback_issue (16)
#endif

// signal: @S1_PID_35_OxySensor2_FAER_ro
#define AUDI104_S1_PID_35_OxySensor2_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_35_OxySensor2_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_35_OxySensor2_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_04_CalcEngineLoad_ro
#define AUDI104_S1_PID_04_CalcEngineLoad_ro_CovFactor (0.392160)
#define AUDI104_S1_PID_04_CalcEngineLoad_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392160)) )
#define AUDI104_S1_PID_04_CalcEngineLoad_ro_fromS(x) ( (((x) * (0.392160)) + (0.000000)) )
// signal: @S1_PID_05_EngineCoolantTemp_ro
#define AUDI104_S1_PID_05_EngineCoolantTemp_ro_CovFactor (1)
#define AUDI104_S1_PID_05_EngineCoolantTemp_ro_toS(x) ( (uint8_t) ((x) - (-40)) )
#define AUDI104_S1_PID_05_EngineCoolantTemp_ro_fromS(x) ( ((x) + (-40)) )
// signal: @S1_PID_06_ShortFuelTrimBank1_ro
#define AUDI104_S1_PID_06_ShortFuelTrimBank1_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_06_ShortFuelTrimBank1_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_06_ShortFuelTrimBank1_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_34_OxySensor1_FAER_ro
#define AUDI104_S1_PID_34_OxySensor1_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_34_OxySensor1_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_34_OxySensor1_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_07_LongFuelTrimBank1_ro
#define AUDI104_S1_PID_07_LongFuelTrimBank1_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_07_LongFuelTrimBank1_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_07_LongFuelTrimBank1_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_08_ShortFuelTrimBank2_ro
#define AUDI104_S1_PID_08_ShortFuelTrimBank2_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_08_ShortFuelTrimBank2_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_08_ShortFuelTrimBank2_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_32_EvapSysVaporPres_ro
#define AUDI104_S1_PID_32_EvapSysVaporPres_ro_CovFactor (0.250000)
#define AUDI104_S1_PID_32_EvapSysVaporPres_ro_toS(x) ( (int16_t) (((x) - (0.000000)) / (0.250000)) )
#define AUDI104_S1_PID_32_EvapSysVaporPres_ro_fromS(x) ( (((x) * (0.250000)) + (0.000000)) )
// signal: @S1_PID_0C_EngineRPM_ro
#define AUDI104_S1_PID_0C_EngineRPM_ro_CovFactor (0.250000)
#define AUDI104_S1_PID_0C_EngineRPM_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.250000)) )
#define AUDI104_S1_PID_0C_EngineRPM_ro_fromS(x) ( (((x) * (0.250000)) + (0.000000)) )
// signal: @S1_PID_2A_OxySensor7_FAER_ro
#define AUDI104_S1_PID_2A_OxySensor7_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_2A_OxySensor7_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_2A_OxySensor7_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_0A_FuelPressure_ro
#define AUDI104_S1_PID_0A_FuelPressure_ro_CovFactor (3)
#define AUDI104_S1_PID_0A_FuelPressure_ro_toS(x) ( (uint8_t) ((x) / (3)) )
#define AUDI104_S1_PID_0A_FuelPressure_ro_fromS(x) ( ((x) * (3)) )
// signal: @S1_PID_2B_OxySensor8_FAER_ro
#define AUDI104_S1_PID_2B_OxySensor8_FAER_ro_CovFactor (0.000031)
#define AUDI104_S1_PID_2B_OxySensor8_FAER_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000031)) )
#define AUDI104_S1_PID_2B_OxySensor8_FAER_ro_fromS(x) ( (((x) * (0.000031)) + (0.000000)) )
// signal: @S1_PID_09_LongFuelTrimBank2_ro
#define AUDI104_S1_PID_09_LongFuelTrimBank2_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_09_LongFuelTrimBank2_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_09_LongFuelTrimBank2_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_2C_CmdEGR_ro
#define AUDI104_S1_PID_2C_CmdEGR_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_2C_CmdEGR_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_2C_CmdEGR_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_2D_EGRError_ro
#define AUDI104_S1_PID_2D_EGRError_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_2D_EGRError_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_2D_EGRError_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_2E_CmdEvapPurge_ro
#define AUDI104_S1_PID_2E_CmdEvapPurge_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_2E_CmdEvapPurge_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_2E_CmdEvapPurge_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_2F_FuelTankLevel_ro
#define AUDI104_S1_PID_2F_FuelTankLevel_ro_CovFactor (0.392157)
#define AUDI104_S1_PID_2F_FuelTankLevel_ro_toS(x) ( (uint8_t) (((x) - (0.000000)) / (0.392157)) )
#define AUDI104_S1_PID_2F_FuelTankLevel_ro_fromS(x) ( (((x) * (0.392157)) + (0.000000)) )
// signal: @S1_PID_15_OxySensor2_STFT_ro
#define AUDI104_S1_PID_15_OxySensor2_STFT_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_15_OxySensor2_STFT_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_15_OxySensor2_STFT_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_64_EngPctTorq_EP1_ro
#define AUDI104_S1_PID_64_EngPctTorq_EP1_ro_CovFactor (1)
#define AUDI104_S1_PID_64_EngPctTorq_EP1_ro_toS(x) ( (uint8_t) ((x) - (-125)) )
#define AUDI104_S1_PID_64_EngPctTorq_EP1_ro_fromS(x) ( ((x) + (-125)) )
// signal: @S1_PID_16_OxySensor3_STFT_ro
#define AUDI104_S1_PID_16_OxySensor3_STFT_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_16_OxySensor3_STFT_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_16_OxySensor3_STFT_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_14_OxySensor1_STFT_ro
#define AUDI104_S1_PID_14_OxySensor1_STFT_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_14_OxySensor1_STFT_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_14_OxySensor1_STFT_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_56_LongSecOxyTrimBank3_ro
#define AUDI104_S1_PID_56_LongSecOxyTrimBank3_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_56_LongSecOxyTrimBank3_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_56_LongSecOxyTrimBank3_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_18_OxySensor5_STFT_ro
#define AUDI104_S1_PID_18_OxySensor5_STFT_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_18_OxySensor5_STFT_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_18_OxySensor5_STFT_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_55_ShortSecOxyTrimBank3_ro
#define AUDI104_S1_PID_55_ShortSecOxyTrimBank3_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_55_ShortSecOxyTrimBank3_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_55_ShortSecOxyTrimBank3_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_57_ShortSecOxyTrimBank4_ro
#define AUDI104_S1_PID_57_ShortSecOxyTrimBank4_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_57_ShortSecOxyTrimBank4_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_57_ShortSecOxyTrimBank4_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_58_LongSecOxyTrimBank4_ro
#define AUDI104_S1_PID_58_LongSecOxyTrimBank4_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_58_LongSecOxyTrimBank4_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_58_LongSecOxyTrimBank4_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_17_OxySensor4_STFT_ro
#define AUDI104_S1_PID_17_OxySensor4_STFT_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_17_OxySensor4_STFT_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_17_OxySensor4_STFT_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_1B_OxySensor8_STFT_ro
#define AUDI104_S1_PID_1B_OxySensor8_STFT_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_1B_OxySensor8_STFT_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_1B_OxySensor8_STFT_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_1A_OxySensor7_STFT_ro
#define AUDI104_S1_PID_1A_OxySensor7_STFT_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_1A_OxySensor7_STFT_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_1A_OxySensor7_STFT_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_19_OxySensor6_STFT_ro
#define AUDI104_S1_PID_19_OxySensor6_STFT_ro_CovFactor (0.781250)
#define AUDI104_S1_PID_19_OxySensor6_STFT_ro_toS(x) ( (uint8_t) (((x) - (-100.000000)) / (0.781250)) )
#define AUDI104_S1_PID_19_OxySensor6_STFT_ro_fromS(x) ( (((x) * (0.781250)) + (-100.000000)) )
// signal: @S1_PID_35_OxySensor2_Crnt_ro
#define AUDI104_S1_PID_35_OxySensor2_Crnt_ro_CovFactor (0.003906)
#define AUDI104_S1_PID_35_OxySensor2_Crnt_ro_toS(x) ( (uint16_t) (((x) - (-128.000000)) / (0.003906)) )
#define AUDI104_S1_PID_35_OxySensor2_Crnt_ro_fromS(x) ( (((x) * (0.003906)) + (-128.000000)) )
// signal: @S1_PID_37_OxySensor4_Crnt_ro
#define AUDI104_S1_PID_37_OxySensor4_Crnt_ro_CovFactor (0.003906)
#define AUDI104_S1_PID_37_OxySensor4_Crnt_ro_toS(x) ( (uint16_t) (((x) - (-128.000000)) / (0.003906)) )
#define AUDI104_S1_PID_37_OxySensor4_Crnt_ro_fromS(x) ( (((x) * (0.003906)) + (-128.000000)) )
// signal: @S1_PID_38_OxySensor5_Crnt_ro
#define AUDI104_S1_PID_38_OxySensor5_Crnt_ro_CovFactor (0.003906)
#define AUDI104_S1_PID_38_OxySensor5_Crnt_ro_toS(x) ( (uint16_t) (((x) - (-128.000000)) / (0.003906)) )
#define AUDI104_S1_PID_38_OxySensor5_Crnt_ro_fromS(x) ( (((x) * (0.003906)) + (-128.000000)) )
// signal: @S1_PID_34_OxySensor1_Crnt_ro
#define AUDI104_S1_PID_34_OxySensor1_Crnt_ro_CovFactor (0.003906)
#define AUDI104_S1_PID_34_OxySensor1_Crnt_ro_toS(x) ( (uint16_t) (((x) - (-128.000000)) / (0.003906)) )
#define AUDI104_S1_PID_34_OxySensor1_Crnt_ro_fromS(x) ( (((x) * (0.003906)) + (-128.000000)) )
// signal: @S1_PID_39_OxySensor6_Crnt_ro
#define AUDI104_S1_PID_39_OxySensor6_Crnt_ro_CovFactor (0.003906)
#define AUDI104_S1_PID_39_OxySensor6_Crnt_ro_toS(x) ( (uint16_t) (((x) - (-128.000000)) / (0.003906)) )
#define AUDI104_S1_PID_39_OxySensor6_Crnt_ro_fromS(x) ( (((x) * (0.003906)) + (-128.000000)) )
// signal: @S1_PID_36_OxySensor3_Crnt_ro
#define AUDI104_S1_PID_36_OxySensor3_Crnt_ro_CovFactor (0.003906)
#define AUDI104_S1_PID_36_OxySensor3_Crnt_ro_toS(x) ( (uint16_t) (((x) - (-128.000000)) / (0.003906)) )
#define AUDI104_S1_PID_36_OxySensor3_Crnt_ro_fromS(x) ( (((x) * (0.003906)) + (-128.000000)) )
// signal: @S1_PID_3A_OxySensor7_Crnt_ro
#define AUDI104_S1_PID_3A_OxySensor7_Crnt_ro_CovFactor (0.003906)
#define AUDI104_S1_PID_3A_OxySensor7_Crnt_ro_toS(x) ( (uint16_t) (((x) - (-128.000000)) / (0.003906)) )
#define AUDI104_S1_PID_3A_OxySensor7_Crnt_ro_fromS(x) ( (((x) * (0.003906)) + (-128.000000)) )
// signal: @S1_PID_3B_OxySensor8_Crnt_ro
#define AUDI104_S1_PID_3B_OxySensor8_Crnt_ro_CovFactor (0.003906)
#define AUDI104_S1_PID_3B_OxySensor8_Crnt_ro_toS(x) ( (uint16_t) (((x) - (-128.000000)) / (0.003906)) )
#define AUDI104_S1_PID_3B_OxySensor8_Crnt_ro_fromS(x) ( (((x) * (0.003906)) + (-128.000000)) )
// signal: @S1_PID_2B_OxySensor8_Volt_ro
#define AUDI104_S1_PID_2B_OxySensor8_Volt_ro_CovFactor (0.000122)
#define AUDI104_S1_PID_2B_OxySensor8_Volt_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000122)) )
#define AUDI104_S1_PID_2B_OxySensor8_Volt_ro_fromS(x) ( (((x) * (0.000122)) + (0.000000)) )
// signal: @S1_PID_2A_OxySensor7_Volt_ro
#define AUDI104_S1_PID_2A_OxySensor7_Volt_ro_CovFactor (0.000122)
#define AUDI104_S1_PID_2A_OxySensor7_Volt_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000122)) )
#define AUDI104_S1_PID_2A_OxySensor7_Volt_ro_fromS(x) ( (((x) * (0.000122)) + (0.000000)) )
// signal: @S1_PID_29_OxySensor6_Volt_ro
#define AUDI104_S1_PID_29_OxySensor6_Volt_ro_CovFactor (0.000122)
#define AUDI104_S1_PID_29_OxySensor6_Volt_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000122)) )
#define AUDI104_S1_PID_29_OxySensor6_Volt_ro_fromS(x) ( (((x) * (0.000122)) + (0.000000)) )
// signal: @S1_PID_28_OxySensor5_Volt_ro
#define AUDI104_S1_PID_28_OxySensor5_Volt_ro_CovFactor (0.000122)
#define AUDI104_S1_PID_28_OxySensor5_Volt_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000122)) )
#define AUDI104_S1_PID_28_OxySensor5_Volt_ro_fromS(x) ( (((x) * (0.000122)) + (0.000000)) )
// signal: @S1_PID_27_OxySensor4_Volt_ro
#define AUDI104_S1_PID_27_OxySensor4_Volt_ro_CovFactor (0.000122)
#define AUDI104_S1_PID_27_OxySensor4_Volt_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000122)) )
#define AUDI104_S1_PID_27_OxySensor4_Volt_ro_fromS(x) ( (((x) * (0.000122)) + (0.000000)) )
// signal: @S1_PID_26_OxySensor3_Volt_ro
#define AUDI104_S1_PID_26_OxySensor3_Volt_ro_CovFactor (0.000122)
#define AUDI104_S1_PID_26_OxySensor3_Volt_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000122)) )
#define AUDI104_S1_PID_26_OxySensor3_Volt_ro_fromS(x) ( (((x) * (0.000122)) + (0.000000)) )
// signal: @S1_PID_25_OxySensor2_Volt_ro
#define AUDI104_S1_PID_25_OxySensor2_Volt_ro_CovFactor (0.000122)
#define AUDI104_S1_PID_25_OxySensor2_Volt_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000122)) )
#define AUDI104_S1_PID_25_OxySensor2_Volt_ro_fromS(x) ( (((x) * (0.000122)) + (0.000000)) )
// signal: @S1_PID_24_OxySensor1_Volt_ro
#define AUDI104_S1_PID_24_OxySensor1_Volt_ro_CovFactor (0.000122)
#define AUDI104_S1_PID_24_OxySensor1_Volt_ro_toS(x) ( (uint16_t) (((x) - (0.000000)) / (0.000122)) )
#define AUDI104_S1_PID_24_OxySensor1_Volt_ro_fromS(x) ( (((x) * (0.000122)) + (0.000000)) )
// signal: @S1_PID_64_EngPctTorq_EP2_ro
#define AUDI104_S1_PID_64_EngPctTorq_EP2_ro_CovFactor (1)
#define AUDI104_S1_PID_64_EngPctTorq_EP2_ro_toS(x) ( (uint8_t) ((x) - (-125)) )
#define AUDI104_S1_PID_64_EngPctTorq_EP2_ro_fromS(x) ( ((x) + (-125)) )
// signal: @S1_PID_4F_Max_IntManiAbsPres_ro
#define AUDI104_S1_PID_4F_Max_IntManiAbsPres_ro_CovFactor (10)
#define AUDI104_S1_PID_4F_Max_IntManiAbsPres_ro_toS(x) ( (uint8_t) ((x) / (10)) )
#define AUDI104_S1_PID_4F_Max_IntManiAbsPres_ro_fromS(x) ( ((x) * (10)) )
// signal: @S1_PID_64_EngPctTorq_EP3_ro
#define AUDI104_S1_PID_64_EngPctTorq_EP3_ro_CovFactor (1)
#define AUDI104_S1_PID_64_EngPctTorq_EP3_ro_toS(x) ( (uint8_t) ((x) - (-125)) )
#define AUDI104_S1_PID_64_EngPctTorq_EP3_ro_fromS(x) ( ((x) + (-125)) )
// signal: @S1_PID_64_EngPctTorq_EP4_ro
#define AUDI104_S1_PID_64_EngPctTorq_EP4_ro_CovFactor (1)
#define AUDI104_S1_PID_64_EngPctTorq_EP4_ro_toS(x) ( (uint8_t) ((x) - (-125)) )
#define AUDI104_S1_PID_64_EngPctTorq_EP4_ro_fromS(x) ( ((x) + (-125)) )

typedef struct
{
#ifdef AUDI104_USE_BITS_SIGNAL

  uint8_t length;                                  //      Bits= 8

  //  10 : "Permanent DTCs (Cleared DTCs) "
  //  9 : "Request vehicle information "
  //  8 : "Control on-board system "
  //  7 : "Show pending DTCs "
  //  6 : "Other system monitoring "
  //  5 : "Oxygen sensor monitoring "
  //  4 : "Clear DTCs and stored values"
  //  3 : "Show stored DTCs "
  //  2 : "Show freeze frame data "
  //  1 : "Show current data "
  // MULTIPLEX master signal
  uint8_t service : 4;                             //      Bits= 4

  uint8_t response : 4;                            //      Bits= 4

  //  2 : "S2_PID_02_FreezeDTC"
  // multiplex variable
  uint8_t ParameterID_Service02;                   //      Bits= 8

  //  0 : "S1_PID_00_PIDsSupported_01_20"
  //  1 : "S1_PID_01_MonitorStatus"
  //  2 : "S1_PID_02_FreezeDTC"
  //  3 : "S1_PID_03_FuelSystemStatus"
  //  4 : "S1_PID_04_CalcEngineLoad"
  //  5 : "S1_PID_05_EngineCoolantTemp"
  //  6 : "S1_PID_06_ShortFuelTrimBank1"
  //  7 : "S1_PID_07_LongFuelTrimBank1"
  //  8 : "S1_PID_08_ShortFuelTrimBank2"
  //  9 : "S1_PID_09_LongFuelTrimBank2"
  //  10 : "S1_PID_0A_FuelPressure"
  //  11 : "S1_PID_0B_IntakeManiAbsPress"
  //  12 : "S1_PID_0C_EngineRPM"
  //  13 : "S1_PID_0D_VehicleSpeed"
  //  14 : "S1_PID_0E_TimingAdvance"
  //  15 : "S1_PID_0F_IntakeAirTemperature"
  //  16 : "S1_PID_10_MAFAirFlowRate"
  //  17 : "S1_PID_11_ThrottlePosition"
  //  18 : "S1_PID_12_CmdSecAirStatus"
  //  20 : "S1_PID_14_OxySensor1"
  //  21 : "S1_PID_15_OxySensor2"
  //  22 : "S1_PID_16_OxySensor3"
  //  23 : "S1_PID_17_OxySensor4"
  //  24 : "S1_PID_18_OxySensor5"
  //  25 : "S1_PID_19_OxySensor6"
  //  26 : "S1_PID_1A_OxySensor7"
  //  27 : "S1_PID_1B_OxySensor8"
  //  28 : "S1_PID_1C_OBDStandard"
  //  31 : "S1_PID_1F_TimeSinceEngStart"
  //  32 : "S1_PID_20_PIDsSupported_21_40"
  //  33 : "S1_PID_21_DistanceMILOn"
  //  34 : "S1_PID_22_FuelRailPres"
  //  35 : "S1_PID_23_FuelRailGaug"
  //  36 : "S1_PID_24_OxySensor1"
  //  37 : "S1_PID_25_OxySensor2"
  //  38 : "S1_PID_26_OxySensor3"
  //  39 : "S1_PID_27_OxySensor4"
  //  40 : "S1_PID_28_OxySensor5"
  //  41 : "S1_PID_29_OxySensor6"
  //  42 : "S1_PID_2A_OxySensor7"
  //  43 : "S1_PID_2B_OxySensor8"
  //  44 : "S1_PID_2C_CmdEGR"
  //  45 : "S1_PID_2D_EGRError"
  //  46 : "S1_PID_2E_CmdEvapPurge"
  //  47 : "S1_PID_2F_FuelTankLevel"
  //  48 : "S1_PID_30_WarmUpsSinceCodeClear"
  //  49 : "S1_PID_31_DistanceSinceCodeClear"
  //  50 : "S1_PID_32_EvapSysVaporPres"
  //  51 : "S1_PID_33_AbsBaroPres"
  //  52 : "S1_PID_34_OxySensor1"
  //  53 : "S1_PID_35_OxySensor2"
  //  54 : "S1_PID_36_OxySensor3"
  //  55 : "S1_PID_37_OxySensor4"
  //  56 : "S1_PID_38_OxySensor5"
  //  57 : "S1_PID_39_OxySensor6"
  //  58 : "S1_PID_3A_OxySensor7"
  //  59 : "S1_PID_3B_OxySensor8"
  //  60 : "S1_PID_3C_CatTempBank1Sens1"
  //  61 : "S1_PID_3D_CatTempBank2Sens1"
  //  62 : "S1_PID_3E_CatTempBank1Sens2"
  //  63 : "S1_PID_3F_CatTempBank2Sens2"
  //  64 : "S1_PID_40_PIDsSupported_41_60"
  //  65 : "S1_PID_41_MonStatusDriveCycle"
  //  66 : "S1_PID_42_ControlModuleVolt"
  //  67 : "S1_PID_43_AbsLoadValue"
  //  68 : "S1_PID_44_FuelAirCmdEquiv"
  //  69 : "S1_PID_45_RelThrottlePos"
  //  70 : "S1_PID_46_AmbientAirTemp"
  //  71 : "S1_PID_47_AbsThrottlePosB"
  //  72 : "S1_PID_48_AbsThrottlePosC"
  //  73 : "S1_PID_49_AbsThrottlePosD"
  //  74 : "S1_PID_4A_AbsThrottlePosE"
  //  75 : "S1_PID_4B_AbsThrottlePosF"
  //  76 : "S1_PID_4C_CmdThrottleAct"
  //  77 : "S1_PID_4D_TimeRunMILOn"
  //  78 : "S1_PID_4E_TimeSinceCodeClear"
  //  79 : "S1_PID_4F_MaxMultiple"
  //  80 : "S1_PID_50_Max_AirFlowMAF"
  //  81 : "S1_PID_51_FuelType"
  //  82 : "S1_PID_52_EthanolFuelPct"
  //  83 : "S1_PID_53_AbsEvapSysVapPres"
  //  84 : "S1_PID_54_EvapSysVapPres"
  //  85 : "S1_PID_55_ShortSecOxyTrimBankX"
  //  86 : "S1_PID_56_LongSecOxyTrimBankX"
  //  87 : "S1_PID_57_ShortSecOxyTrimBankX"
  //  88 : "S1_PID_58_LongSecOxyTrimBankX"
  //  89 : "S1_PID_59_FuelRailAbsPres"
  //  90 : "S1_PID_5A_RelAccelPedalPos"
  //  91 : "S1_PID_5B_HybrBatPackRemLife"
  //  92 : "S1_PID_5C_EngineOilTemp"
  //  93 : "S1_PID_5D_FuelInjectionTiming"
  //  94 : "S1_PID_5E_EngineFuelRate"
  //  95 : "S1_PID_5F_EmissionReq"
  //  96 : "S1_PID_60_PIDsSupported_61_80"
  //  97 : "S1_PID_61_DemandEngTorqPct"
  //  98 : "S1_PID_62_ActualEngTorqPct"
  //  99 : "S1_PID_63_EngRefTorq"
  //  100 : "S1_PID_64_EngPctTorq"
  //  101 : "S1_PID_65_AuxInputOutput"
  //  102 : "S1_PID_66_MAFSensor"
  //  103 : "S1_PID_67_EngineCoolantTemp"
  //  104 : "S1_PID_68_IntakeAirTempSens"
  //  105 : "S1_PID_69_CmdEGR_EGRError"
  //  106 : "S1_PID_6A_CmdDieselIntAir"
  //  107 : "S1_PID_6B_ExhaustGasTemp"
  //  108 : "S1_PID_6C_CmdThrottleActRel"
  //  109 : "S1_PID_6D_FuelPresContrSys"
  //  110 : "S1_PID_6E_InjPresContrSys"
  //  111 : "S1_PID_6F_TurboComprPres"
  //  112 : "S1_PID_70_BoostPresCntrl"
  //  128 : "S1_PID_80_PIDsSupported_81_A0"
  //  142 : "S1_PID_8E_EngFrictionPctTorq"
  //  160 : "S1_PID_A0_PIDsSupported_A1_C0"
  //  192 : "S1_PID_C0_PIDsSupported_C1_E0"
  // multiplex variable
  uint8_t ParameterID_Service01;                   //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_47_AbsThrottlePosB_ro;            //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_47_AbsThrottlePosB_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_55_ShortSecOxyTrimBank1_ro;       //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_55_ShortSecOxyTrimBank1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_48_AbsThrottlePosC_ro;            //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_48_AbsThrottlePosC_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_49_AbsThrottlePosD_ro;            //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_49_AbsThrottlePosD_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_4A_AbsThrottlePosE_ro;            //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_4A_AbsThrottlePosE_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_4B_AbsThrottlePosF_ro;            //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_4B_AbsThrottlePosF_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_4C_CmdThrottleAct_ro;             //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_4C_CmdThrottleAct_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_4D_TimeRunMILOn;                 //      Bits=16 Unit:'minutes'

  // multiplex variable
  uint16_t S1_PID_4E_TimeSinceCodeClear;           //      Bits=16 Unit:'minutes'

  // multiplex variable
  uint8_t S1_PID_4F_Max_FAER;                      //      Bits= 8 Unit:'ratio'

  // multiplex variable
  uint8_t S1_PID_50_Max_AirFlowMAF_ro;             //      Bits= 8 Factor= 10              Unit:'g/s'

#ifdef AUDI104_USE_SIGFLOAT
  uint16_t S1_PID_50_Max_AirFlowMAF_phys;
#endif // AUDI104_USE_SIGFLOAT

  //  0 : "Not available"
  //  1 : "Gasoline"
  //  2 : "Methanol"
  //  3 : "Ethanol"
  //  4 : "Diesel"
  //  5 : "LPG"
  //  6 : "CNG"
  //  7 : "Propane"
  //  8 : "Electric"
  //  9 : "Bifuel running Gasoline"
  //  10 : "Bifuel running Methanol"
  //  11 : "Bifuel running Ethanol"
  //  12 : "Bifuel running LPG"
  //  13 : "Bifuel running CNG"
  //  14 : "Bifuel running Propane"
  //  15 : "Bifuel running Electricity"
  //  16 : "Bifuel electric/comb. eng."
  //  17 : "Hybrid gasoline"
  //  18 : "Hybrid Ethanol"
  //  19 : "Hybrid Diesel"
  //  20 : "Hybrid Electric"
  //  21 : "Hybrid running electric/comb."
  //  22 : "Hybrid Regenerative"
  //  23 : "Bifuel running diesel"
  // multiplex variable
  uint8_t S1_PID_51_FuelType;                      //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_52_EthanolFuelPct_ro;             //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_52_EthanolFuelPct_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_53_AbsEvapSysVapPres_ro;         //      Bits=16 Factor= 0.005000        Unit:'kPa'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_53_AbsEvapSysVapPres_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_54_EvapSysVapPres_ro;            //      Bits=16 Offset= -32767             Unit:'Pa'

#ifdef AUDI104_USE_SIGFLOAT
  int32_t S1_PID_54_EvapSysVapPres_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_37_OxySensor4_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_37_OxySensor4_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_46_AmbientAirTemp_ro;             //      Bits= 8 Offset= -40                Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_46_AmbientAirTemp_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_45_RelThrottlePos_ro;             //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_45_RelThrottlePos_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_44_FuelAirCmdEquiv_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_44_FuelAirCmdEquiv_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_43_AbsLoadValue_ro;              //      Bits=16 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_43_AbsLoadValue_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_42_ControlModuleVolt_ro;         //      Bits=16 Factor= 0.001000        Unit:'V'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_42_ControlModuleVolt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint32_t S1_PID_41_MonStatusDriveCycle;          //      Bits=32

  // PIDs supported [41 - 60] - Bit encoded [A7..D0] == [PID $41..PID $60]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_40_PIDsSupported_41_60;          //      Bits=32

  // multiplex variable
  uint16_t S1_PID_3F_CatTempBank2Sens2_ro;         //      Bits=16 Offset= -40.000000         Factor= 0.100000        Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3F_CatTempBank2Sens2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3E_CatTempBank1Sens2_ro;         //      Bits=16 Offset= -40.000000         Factor= 0.100000        Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3E_CatTempBank1Sens2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3D_CatTempBank2Sens1_ro;         //      Bits=16 Offset= -40.000000         Factor= 0.100000        Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3D_CatTempBank2Sens1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3C_CatTempBank1Sens1_ro;         //      Bits=16 Offset= -40.000000         Factor= 0.100000        Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3C_CatTempBank1Sens1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3B_OxySensor8_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3B_OxySensor8_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // PIDs supported [01 - 20] - Bit encoded [A7..D0] == [PID $01..PID $20]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_00_PIDsSupported_01_20;          //      Bits=32

  // multiplex variable
  uint16_t S1_PID_39_OxySensor6_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_39_OxySensor6_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_38_OxySensor5_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_38_OxySensor5_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3A_OxySensor7_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3A_OxySensor7_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_66_MAFSensor;                     //      Bits= 8

  // multiplex variable
  uint16_t S2_PID_02_FreezeDTC;                    //      Bits=16

  // PIDs supported [C1 - E0] - Bit encoded [A7..D0] == [PID $C1..PID $E0]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_C0_PIDsSupported_C1_E0;          //      Bits=32

  // PIDs supported [A1 - C0] - Bit encoded [A7..D0] == [PID $A1..PID $C0]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_A0_PIDsSupported_A1_C0;          //      Bits=32

  // multiplex variable
  uint8_t S1_PID_8E_EngFrictionPctTorq_ro;         //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_8E_EngFrictionPctTorq_phys;
#endif // AUDI104_USE_SIGFLOAT

  // PIDs supported [81 - A0] - Bit encoded [A7..D0] == [PID $81..PID $A0]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_80_PIDsSupported_81_A0;          //      Bits=32

  // multiplex variable
  uint8_t S1_PID_70_BoostPresCntrl;                //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_6F_TurboComprPres;                //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_6E_InjPresContrSys;               //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_6D_FuelPresContrSys;              //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_6C_CmdThrottleActRel;             //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_6B_ExhaustGasTemp;                //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_6A_CmdDieselIntAir;               //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_69_CmdEGR_EGRError;               //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_68_IntakeAirTempSens;             //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_67_EngineCoolantTemp;             //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_56_LongSecOxyTrimBank1_ro;        //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_56_LongSecOxyTrimBank1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_65_AuxInputOutput;                //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_64_EngPctTorq_Idle_ro;            //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_64_EngPctTorq_Idle_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_63_EngRefTorq;                   //      Bits=16 Unit:'Nm'

  // multiplex variable
  uint8_t S1_PID_62_ActualEngTorqPct_ro;           //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_62_ActualEngTorqPct_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_61_DemandEngTorqPct_ro;           //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_61_DemandEngTorqPct_phys;
#endif // AUDI104_USE_SIGFLOAT

  // PIDs supported [61 - 80] - Bit encoded [A7..D0] == [PID $61..PID $80]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_60_PIDsSupported_61_80;          //      Bits=32

  // multiplex variable
  uint8_t S1_PID_5F_EmissionReq;                   //      Bits= 8

  // multiplex variable
  uint16_t S1_PID_5E_EngineFuelRate_ro;            //      Bits=16 Factor= 0.050000        Unit:'L/h'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_5E_EngineFuelRate_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_5D_FuelInjectionTiming_ro;       //      Bits=16 Offset= -210.000000        Factor= 0.007812        Unit:'deg'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_5D_FuelInjectionTiming_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_5C_EngineOilTemp_ro;              //      Bits= 8 Offset= -40                Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_5C_EngineOilTemp_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_5B_HybrBatPackRemLife_ro;         //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_5B_HybrBatPackRemLife_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_5A_RelAccelPedalPos_ro;           //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_5A_RelAccelPedalPos_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_59_FuelRailAbsPres_ro;           //      Bits=16 Factor= 10              Unit:'kPa'

#ifdef AUDI104_USE_SIGFLOAT
  uint32_t S1_PID_59_FuelRailAbsPres_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_58_LongSecOxyTrimBank2_ro;        //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_58_LongSecOxyTrimBank2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_57_ShortSecOxyTrimBank2_ro;       //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_57_ShortSecOxyTrimBank2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_22_FuelRailPres_ro;              //      Bits=16 Factor= 0.079000        Unit:'kPa'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_22_FuelRailPres_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_28_OxySensor5_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_28_OxySensor5_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_0D_VehicleSpeed;                  //      Bits= 8 Unit:'km/h'

  // multiplex variable
  uint8_t S1_PID_0E_TimingAdvance_ro;              //      Bits= 8 Offset= -64.000000         Factor= 0.500000        Unit:'deg before TDC'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_0E_TimingAdvance_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_26_OxySensor3_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_26_OxySensor3_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_0F_IntakeAirTemperature_ro;       //      Bits= 8 Offset= -40                Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_0F_IntakeAirTemperature_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_10_MAFAirFlowRate_ro;            //      Bits=16 Factor= 0.010000        Unit:'grams/sec'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_10_MAFAirFlowRate_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_11_ThrottlePosition_ro;           //      Bits= 8 Factor= 0.392160        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_11_ThrottlePosition_phys;
#endif // AUDI104_USE_SIGFLOAT

  //  1 : "Upstream"
  //  2 : "Downstream catalytic conv"
  //  4 : "From outside atmosphere/off"
  //  8 : "Pump cmd on for diagn."
  // multiplex variable
  uint8_t S1_PID_12_CmdSecAirStatus;               //      Bits= 8

  // multiplex variable
  uint16_t S1_PID_25_OxySensor2_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_25_OxySensor2_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_14_OxySensor1_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_14_OxySensor1_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_24_OxySensor1_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_24_OxySensor1_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_23_FuelRailGaug_ro;              //      Bits=16 Factor= 10              Unit:'kPa'

#ifdef AUDI104_USE_SIGFLOAT
  uint32_t S1_PID_23_FuelRailGaug_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_27_OxySensor4_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_27_OxySensor4_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_21_DistanceMILOn;                //      Bits=16 Unit:'km'

  // PIDs supported [21 - 40] - Bit encoded [A7..D0] == [PID $21..PID $40]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_20_PIDsSupported_21_40;          //      Bits=32

  // multiplex variable
  uint16_t S1_PID_36_OxySensor3_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_36_OxySensor3_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_1F_TimeSinceEngStart;            //      Bits=16 Unit:'seconds'

  // multiplex variable
  uint8_t S1_PID_15_OxySensor2_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_15_OxySensor2_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  //  1 : "OBD-II as defined by the CARB"
  //  2 : "OBD as defined by the EPA"
  //  3 : "OBD and OBD-II"
  //  4 : "OBD-I"
  //  5 : "Not OBD compliant"
  //  6 : "EOBD (Europe)"
  //  7 : "EOBD and OBD-II"
  //  8 : "EOBD and OBD"
  //  9 : "EOBD, OBD and OBD II"
  //  10 : "JOBD (Japan)"
  //  11 : "JOBD and OBD II"
  //  12 : "JOBD and EOBD"
  //  13 : "JOBD, EOBD, and OBD II"
  //  14 : "Reserved"
  //  15 : "Reserved"
  //  16 : "Reserved"
  //  17 : "Eng. Manu. Diag. (EMD)"
  //  18 : "EMD Enhanced (EMD+)"
  //  19 : "HD OBD-C"
  //  20 : "HD OBD"
  //  21 : "WWH OBD"
  //  22 : "Reserved"
  //  23 : "HD EOBD-I"
  //  24 : "HD EOBD-I N"
  //  25 : "HD EOBD-II"
  //  26 : "HD EOBD-II N"
  //  27 : "Reserved"
  //  28 : "OBDBr-1"
  //  29 : "OBDBr-2"
  //  30 : "KOBD"
  //  31 : "IOBD I"
  //  32 : "IOBD II"
  //  33 : "HD EOBD-IV"
  //  34 : "Reserved"
  //  35 : "Reserved"
  // multiplex variable
  uint8_t S1_PID_1C_OBDStandard;                   //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_1B_OxySensor8_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_1B_OxySensor8_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_16_OxySensor3_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_16_OxySensor3_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_1A_OxySensor7_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_1A_OxySensor7_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_19_OxySensor6_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_19_OxySensor6_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_17_OxySensor4_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_17_OxySensor4_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_18_OxySensor5_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_18_OxySensor5_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_29_OxySensor6_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_29_OxySensor6_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // Monitor status since DTCs cleared (includes malfunction indicator lamp (MIL) status and number of DTCs) 
  // multiplex variable
  uint32_t S1_PID_01_MonitorStatus;                //      Bits=32

  // multiplex variable
  uint16_t S1_PID_02_FreezeDTC;                    //      Bits=16

  //  1 : "Open loop (insuff. eng. temp.)"
  //  2 : "Closed loop (oxy sens)"
  //  4 : "Open loop (eng. load, fuel cut)"
  //  8 : "Open loop (system failure)"
  //  16 : "Closed loop (feedback issue)"
  // multiplex variable
  uint16_t S1_PID_03_FuelSystemStatus;             //      Bits=16

  // multiplex variable
  uint16_t S1_PID_35_OxySensor2_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_35_OxySensor2_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_04_CalcEngineLoad_ro;             //      Bits= 8 Factor= 0.392160        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_04_CalcEngineLoad_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_05_EngineCoolantTemp_ro;          //      Bits= 8 Offset= -40                Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_05_EngineCoolantTemp_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_06_ShortFuelTrimBank1_ro;         //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_06_ShortFuelTrimBank1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_34_OxySensor1_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_34_OxySensor1_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_07_LongFuelTrimBank1_ro;          //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_07_LongFuelTrimBank1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_33_AbsBaroPres;                   //      Bits= 8 Unit:'kPa'

  // multiplex variable
  uint8_t S1_PID_08_ShortFuelTrimBank2_ro;         //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_08_ShortFuelTrimBank2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  int16_t S1_PID_32_EvapSysVaporPres_ro;           //  [-] Bits=16 Factor= 0.250000        Unit:'Pa'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_32_EvapSysVaporPres_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_30_WarmUpsSinceCodeClear;         //      Bits= 8 Unit:'count'

  // multiplex variable
  uint16_t S1_PID_0C_EngineRPM_ro;                 //      Bits=16 Factor= 0.250000        Unit:'rpm'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_0C_EngineRPM_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_0B_IntakeManiAbsPress;            //      Bits= 8 Unit:'kPa'

  // multiplex variable
  uint16_t S1_PID_2A_OxySensor7_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2A_OxySensor7_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_0A_FuelPressure_ro;               //      Bits= 8 Factor= 3               Unit:'kPa'

#ifdef AUDI104_USE_SIGFLOAT
  uint16_t S1_PID_0A_FuelPressure_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_2B_OxySensor8_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2B_OxySensor8_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_09_LongFuelTrimBank2_ro;          //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_09_LongFuelTrimBank2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_2C_CmdEGR_ro;                     //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2C_CmdEGR_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_2D_EGRError_ro;                   //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2D_EGRError_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_2E_CmdEvapPurge_ro;               //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2E_CmdEvapPurge_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_2F_FuelTankLevel_ro;              //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2F_FuelTankLevel_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_31_DistanceSinceCodeClear;       //      Bits=16 Unit:'km'

  // multiplex variable
  uint8_t S1_PID_15_OxySensor2_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_15_OxySensor2_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_64_EngPctTorq_EP1_ro;             //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_64_EngPctTorq_EP1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_16_OxySensor3_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_16_OxySensor3_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_14_OxySensor1_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_14_OxySensor1_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_56_LongSecOxyTrimBank3_ro;        //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_56_LongSecOxyTrimBank3_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_18_OxySensor5_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_18_OxySensor5_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_4F_Max_OxySensVol;                //      Bits= 8 Unit:'V'

  // multiplex variable
  uint8_t S1_PID_55_ShortSecOxyTrimBank3_ro;       //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_55_ShortSecOxyTrimBank3_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_57_ShortSecOxyTrimBank4_ro;       //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_57_ShortSecOxyTrimBank4_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_58_LongSecOxyTrimBank4_ro;        //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_58_LongSecOxyTrimBank4_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_17_OxySensor4_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_17_OxySensor4_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_1B_OxySensor8_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_1B_OxySensor8_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_1A_OxySensor7_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_1A_OxySensor7_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_19_OxySensor6_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_19_OxySensor6_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_35_OxySensor2_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_35_OxySensor2_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_37_OxySensor4_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_37_OxySensor4_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_38_OxySensor5_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_38_OxySensor5_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_34_OxySensor1_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_34_OxySensor1_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_39_OxySensor6_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_39_OxySensor6_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_36_OxySensor3_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_36_OxySensor3_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3A_OxySensor7_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3A_OxySensor7_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3B_OxySensor8_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3B_OxySensor8_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_2B_OxySensor8_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2B_OxySensor8_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_2A_OxySensor7_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2A_OxySensor7_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_29_OxySensor6_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_29_OxySensor6_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_28_OxySensor5_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_28_OxySensor5_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_27_OxySensor4_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_27_OxySensor4_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_26_OxySensor3_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_26_OxySensor3_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_25_OxySensor2_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_25_OxySensor2_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_4F_Max_OxySensCrnt;               //      Bits= 8 Unit:'mA'

  // multiplex variable
  uint16_t S1_PID_24_OxySensor1_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_24_OxySensor1_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_64_EngPctTorq_EP2_ro;             //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_64_EngPctTorq_EP2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_4F_Max_IntManiAbsPres_ro;         //      Bits= 8 Factor= 10              Unit:'kPa'

#ifdef AUDI104_USE_SIGFLOAT
  uint16_t S1_PID_4F_Max_IntManiAbsPres_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_64_EngPctTorq_EP3_ro;             //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_64_EngPctTorq_EP3_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_64_EngPctTorq_EP4_ro;             //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_64_EngPctTorq_EP4_phys;
#endif // AUDI104_USE_SIGFLOAT

#else

  uint8_t length;                                  //      Bits= 8

  //  10 : "Permanent DTCs (Cleared DTCs) "
  //  9 : "Request vehicle information "
  //  8 : "Control on-board system "
  //  7 : "Show pending DTCs "
  //  6 : "Other system monitoring "
  //  5 : "Oxygen sensor monitoring "
  //  4 : "Clear DTCs and stored values"
  //  3 : "Show stored DTCs "
  //  2 : "Show freeze frame data "
  //  1 : "Show current data "
  // MULTIPLEX master signal
  uint8_t service;                                 //      Bits= 4

  uint8_t response;                                //      Bits= 4

  //  2 : "S2_PID_02_FreezeDTC"
  // multiplex variable
  uint8_t ParameterID_Service02;                   //      Bits= 8

  //  0 : "S1_PID_00_PIDsSupported_01_20"
  //  1 : "S1_PID_01_MonitorStatus"
  //  2 : "S1_PID_02_FreezeDTC"
  //  3 : "S1_PID_03_FuelSystemStatus"
  //  4 : "S1_PID_04_CalcEngineLoad"
  //  5 : "S1_PID_05_EngineCoolantTemp"
  //  6 : "S1_PID_06_ShortFuelTrimBank1"
  //  7 : "S1_PID_07_LongFuelTrimBank1"
  //  8 : "S1_PID_08_ShortFuelTrimBank2"
  //  9 : "S1_PID_09_LongFuelTrimBank2"
  //  10 : "S1_PID_0A_FuelPressure"
  //  11 : "S1_PID_0B_IntakeManiAbsPress"
  //  12 : "S1_PID_0C_EngineRPM"
  //  13 : "S1_PID_0D_VehicleSpeed"
  //  14 : "S1_PID_0E_TimingAdvance"
  //  15 : "S1_PID_0F_IntakeAirTemperature"
  //  16 : "S1_PID_10_MAFAirFlowRate"
  //  17 : "S1_PID_11_ThrottlePosition"
  //  18 : "S1_PID_12_CmdSecAirStatus"
  //  20 : "S1_PID_14_OxySensor1"
  //  21 : "S1_PID_15_OxySensor2"
  //  22 : "S1_PID_16_OxySensor3"
  //  23 : "S1_PID_17_OxySensor4"
  //  24 : "S1_PID_18_OxySensor5"
  //  25 : "S1_PID_19_OxySensor6"
  //  26 : "S1_PID_1A_OxySensor7"
  //  27 : "S1_PID_1B_OxySensor8"
  //  28 : "S1_PID_1C_OBDStandard"
  //  31 : "S1_PID_1F_TimeSinceEngStart"
  //  32 : "S1_PID_20_PIDsSupported_21_40"
  //  33 : "S1_PID_21_DistanceMILOn"
  //  34 : "S1_PID_22_FuelRailPres"
  //  35 : "S1_PID_23_FuelRailGaug"
  //  36 : "S1_PID_24_OxySensor1"
  //  37 : "S1_PID_25_OxySensor2"
  //  38 : "S1_PID_26_OxySensor3"
  //  39 : "S1_PID_27_OxySensor4"
  //  40 : "S1_PID_28_OxySensor5"
  //  41 : "S1_PID_29_OxySensor6"
  //  42 : "S1_PID_2A_OxySensor7"
  //  43 : "S1_PID_2B_OxySensor8"
  //  44 : "S1_PID_2C_CmdEGR"
  //  45 : "S1_PID_2D_EGRError"
  //  46 : "S1_PID_2E_CmdEvapPurge"
  //  47 : "S1_PID_2F_FuelTankLevel"
  //  48 : "S1_PID_30_WarmUpsSinceCodeClear"
  //  49 : "S1_PID_31_DistanceSinceCodeClear"
  //  50 : "S1_PID_32_EvapSysVaporPres"
  //  51 : "S1_PID_33_AbsBaroPres"
  //  52 : "S1_PID_34_OxySensor1"
  //  53 : "S1_PID_35_OxySensor2"
  //  54 : "S1_PID_36_OxySensor3"
  //  55 : "S1_PID_37_OxySensor4"
  //  56 : "S1_PID_38_OxySensor5"
  //  57 : "S1_PID_39_OxySensor6"
  //  58 : "S1_PID_3A_OxySensor7"
  //  59 : "S1_PID_3B_OxySensor8"
  //  60 : "S1_PID_3C_CatTempBank1Sens1"
  //  61 : "S1_PID_3D_CatTempBank2Sens1"
  //  62 : "S1_PID_3E_CatTempBank1Sens2"
  //  63 : "S1_PID_3F_CatTempBank2Sens2"
  //  64 : "S1_PID_40_PIDsSupported_41_60"
  //  65 : "S1_PID_41_MonStatusDriveCycle"
  //  66 : "S1_PID_42_ControlModuleVolt"
  //  67 : "S1_PID_43_AbsLoadValue"
  //  68 : "S1_PID_44_FuelAirCmdEquiv"
  //  69 : "S1_PID_45_RelThrottlePos"
  //  70 : "S1_PID_46_AmbientAirTemp"
  //  71 : "S1_PID_47_AbsThrottlePosB"
  //  72 : "S1_PID_48_AbsThrottlePosC"
  //  73 : "S1_PID_49_AbsThrottlePosD"
  //  74 : "S1_PID_4A_AbsThrottlePosE"
  //  75 : "S1_PID_4B_AbsThrottlePosF"
  //  76 : "S1_PID_4C_CmdThrottleAct"
  //  77 : "S1_PID_4D_TimeRunMILOn"
  //  78 : "S1_PID_4E_TimeSinceCodeClear"
  //  79 : "S1_PID_4F_MaxMultiple"
  //  80 : "S1_PID_50_Max_AirFlowMAF"
  //  81 : "S1_PID_51_FuelType"
  //  82 : "S1_PID_52_EthanolFuelPct"
  //  83 : "S1_PID_53_AbsEvapSysVapPres"
  //  84 : "S1_PID_54_EvapSysVapPres"
  //  85 : "S1_PID_55_ShortSecOxyTrimBankX"
  //  86 : "S1_PID_56_LongSecOxyTrimBankX"
  //  87 : "S1_PID_57_ShortSecOxyTrimBankX"
  //  88 : "S1_PID_58_LongSecOxyTrimBankX"
  //  89 : "S1_PID_59_FuelRailAbsPres"
  //  90 : "S1_PID_5A_RelAccelPedalPos"
  //  91 : "S1_PID_5B_HybrBatPackRemLife"
  //  92 : "S1_PID_5C_EngineOilTemp"
  //  93 : "S1_PID_5D_FuelInjectionTiming"
  //  94 : "S1_PID_5E_EngineFuelRate"
  //  95 : "S1_PID_5F_EmissionReq"
  //  96 : "S1_PID_60_PIDsSupported_61_80"
  //  97 : "S1_PID_61_DemandEngTorqPct"
  //  98 : "S1_PID_62_ActualEngTorqPct"
  //  99 : "S1_PID_63_EngRefTorq"
  //  100 : "S1_PID_64_EngPctTorq"
  //  101 : "S1_PID_65_AuxInputOutput"
  //  102 : "S1_PID_66_MAFSensor"
  //  103 : "S1_PID_67_EngineCoolantTemp"
  //  104 : "S1_PID_68_IntakeAirTempSens"
  //  105 : "S1_PID_69_CmdEGR_EGRError"
  //  106 : "S1_PID_6A_CmdDieselIntAir"
  //  107 : "S1_PID_6B_ExhaustGasTemp"
  //  108 : "S1_PID_6C_CmdThrottleActRel"
  //  109 : "S1_PID_6D_FuelPresContrSys"
  //  110 : "S1_PID_6E_InjPresContrSys"
  //  111 : "S1_PID_6F_TurboComprPres"
  //  112 : "S1_PID_70_BoostPresCntrl"
  //  128 : "S1_PID_80_PIDsSupported_81_A0"
  //  142 : "S1_PID_8E_EngFrictionPctTorq"
  //  160 : "S1_PID_A0_PIDsSupported_A1_C0"
  //  192 : "S1_PID_C0_PIDsSupported_C1_E0"
  // multiplex variable
  uint8_t ParameterID_Service01;                   //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_47_AbsThrottlePosB_ro;            //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_47_AbsThrottlePosB_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_55_ShortSecOxyTrimBank1_ro;       //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_55_ShortSecOxyTrimBank1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_48_AbsThrottlePosC_ro;            //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_48_AbsThrottlePosC_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_49_AbsThrottlePosD_ro;            //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_49_AbsThrottlePosD_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_4A_AbsThrottlePosE_ro;            //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_4A_AbsThrottlePosE_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_4B_AbsThrottlePosF_ro;            //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_4B_AbsThrottlePosF_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_4C_CmdThrottleAct_ro;             //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_4C_CmdThrottleAct_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_4D_TimeRunMILOn;                 //      Bits=16 Unit:'minutes'

  // multiplex variable
  uint16_t S1_PID_4E_TimeSinceCodeClear;           //      Bits=16 Unit:'minutes'

  // multiplex variable
  uint8_t S1_PID_4F_Max_FAER;                      //      Bits= 8 Unit:'ratio'

  // multiplex variable
  uint8_t S1_PID_50_Max_AirFlowMAF_ro;             //      Bits= 8 Factor= 10              Unit:'g/s'

#ifdef AUDI104_USE_SIGFLOAT
  uint16_t S1_PID_50_Max_AirFlowMAF_phys;
#endif // AUDI104_USE_SIGFLOAT

  //  0 : "Not available"
  //  1 : "Gasoline"
  //  2 : "Methanol"
  //  3 : "Ethanol"
  //  4 : "Diesel"
  //  5 : "LPG"
  //  6 : "CNG"
  //  7 : "Propane"
  //  8 : "Electric"
  //  9 : "Bifuel running Gasoline"
  //  10 : "Bifuel running Methanol"
  //  11 : "Bifuel running Ethanol"
  //  12 : "Bifuel running LPG"
  //  13 : "Bifuel running CNG"
  //  14 : "Bifuel running Propane"
  //  15 : "Bifuel running Electricity"
  //  16 : "Bifuel electric/comb. eng."
  //  17 : "Hybrid gasoline"
  //  18 : "Hybrid Ethanol"
  //  19 : "Hybrid Diesel"
  //  20 : "Hybrid Electric"
  //  21 : "Hybrid running electric/comb."
  //  22 : "Hybrid Regenerative"
  //  23 : "Bifuel running diesel"
  // multiplex variable
  uint8_t S1_PID_51_FuelType;                      //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_52_EthanolFuelPct_ro;             //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_52_EthanolFuelPct_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_53_AbsEvapSysVapPres_ro;         //      Bits=16 Factor= 0.005000        Unit:'kPa'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_53_AbsEvapSysVapPres_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_54_EvapSysVapPres_ro;            //      Bits=16 Offset= -32767             Unit:'Pa'

#ifdef AUDI104_USE_SIGFLOAT
  int32_t S1_PID_54_EvapSysVapPres_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_37_OxySensor4_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_37_OxySensor4_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_46_AmbientAirTemp_ro;             //      Bits= 8 Offset= -40                Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_46_AmbientAirTemp_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_45_RelThrottlePos_ro;             //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_45_RelThrottlePos_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_44_FuelAirCmdEquiv_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_44_FuelAirCmdEquiv_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_43_AbsLoadValue_ro;              //      Bits=16 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_43_AbsLoadValue_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_42_ControlModuleVolt_ro;         //      Bits=16 Factor= 0.001000        Unit:'V'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_42_ControlModuleVolt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint32_t S1_PID_41_MonStatusDriveCycle;          //      Bits=32

  // PIDs supported [41 - 60] - Bit encoded [A7..D0] == [PID $41..PID $60]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_40_PIDsSupported_41_60;          //      Bits=32

  // multiplex variable
  uint16_t S1_PID_3F_CatTempBank2Sens2_ro;         //      Bits=16 Offset= -40.000000         Factor= 0.100000        Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3F_CatTempBank2Sens2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3E_CatTempBank1Sens2_ro;         //      Bits=16 Offset= -40.000000         Factor= 0.100000        Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3E_CatTempBank1Sens2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3D_CatTempBank2Sens1_ro;         //      Bits=16 Offset= -40.000000         Factor= 0.100000        Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3D_CatTempBank2Sens1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3C_CatTempBank1Sens1_ro;         //      Bits=16 Offset= -40.000000         Factor= 0.100000        Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3C_CatTempBank1Sens1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3B_OxySensor8_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3B_OxySensor8_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // PIDs supported [01 - 20] - Bit encoded [A7..D0] == [PID $01..PID $20]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_00_PIDsSupported_01_20;          //      Bits=32

  // multiplex variable
  uint16_t S1_PID_39_OxySensor6_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_39_OxySensor6_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_38_OxySensor5_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_38_OxySensor5_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3A_OxySensor7_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3A_OxySensor7_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_66_MAFSensor;                     //      Bits= 8

  // multiplex variable
  uint16_t S2_PID_02_FreezeDTC;                    //      Bits=16

  // PIDs supported [C1 - E0] - Bit encoded [A7..D0] == [PID $C1..PID $E0]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_C0_PIDsSupported_C1_E0;          //      Bits=32

  // PIDs supported [A1 - C0] - Bit encoded [A7..D0] == [PID $A1..PID $C0]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_A0_PIDsSupported_A1_C0;          //      Bits=32

  // multiplex variable
  uint8_t S1_PID_8E_EngFrictionPctTorq_ro;         //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_8E_EngFrictionPctTorq_phys;
#endif // AUDI104_USE_SIGFLOAT

  // PIDs supported [81 - A0] - Bit encoded [A7..D0] == [PID $81..PID $A0]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_80_PIDsSupported_81_A0;          //      Bits=32

  // multiplex variable
  uint8_t S1_PID_70_BoostPresCntrl;                //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_6F_TurboComprPres;                //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_6E_InjPresContrSys;               //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_6D_FuelPresContrSys;              //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_6C_CmdThrottleActRel;             //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_6B_ExhaustGasTemp;                //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_6A_CmdDieselIntAir;               //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_69_CmdEGR_EGRError;               //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_68_IntakeAirTempSens;             //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_67_EngineCoolantTemp;             //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_56_LongSecOxyTrimBank1_ro;        //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_56_LongSecOxyTrimBank1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_65_AuxInputOutput;                //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_64_EngPctTorq_Idle_ro;            //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_64_EngPctTorq_Idle_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_63_EngRefTorq;                   //      Bits=16 Unit:'Nm'

  // multiplex variable
  uint8_t S1_PID_62_ActualEngTorqPct_ro;           //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_62_ActualEngTorqPct_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_61_DemandEngTorqPct_ro;           //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_61_DemandEngTorqPct_phys;
#endif // AUDI104_USE_SIGFLOAT

  // PIDs supported [61 - 80] - Bit encoded [A7..D0] == [PID $61..PID $80]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_60_PIDsSupported_61_80;          //      Bits=32

  // multiplex variable
  uint8_t S1_PID_5F_EmissionReq;                   //      Bits= 8

  // multiplex variable
  uint16_t S1_PID_5E_EngineFuelRate_ro;            //      Bits=16 Factor= 0.050000        Unit:'L/h'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_5E_EngineFuelRate_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_5D_FuelInjectionTiming_ro;       //      Bits=16 Offset= -210.000000        Factor= 0.007812        Unit:'deg'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_5D_FuelInjectionTiming_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_5C_EngineOilTemp_ro;              //      Bits= 8 Offset= -40                Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_5C_EngineOilTemp_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_5B_HybrBatPackRemLife_ro;         //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_5B_HybrBatPackRemLife_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_5A_RelAccelPedalPos_ro;           //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_5A_RelAccelPedalPos_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_59_FuelRailAbsPres_ro;           //      Bits=16 Factor= 10              Unit:'kPa'

#ifdef AUDI104_USE_SIGFLOAT
  uint32_t S1_PID_59_FuelRailAbsPres_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_58_LongSecOxyTrimBank2_ro;        //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_58_LongSecOxyTrimBank2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_57_ShortSecOxyTrimBank2_ro;       //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_57_ShortSecOxyTrimBank2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_22_FuelRailPres_ro;              //      Bits=16 Factor= 0.079000        Unit:'kPa'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_22_FuelRailPres_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_28_OxySensor5_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_28_OxySensor5_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_0D_VehicleSpeed;                  //      Bits= 8 Unit:'km/h'

  // multiplex variable
  uint8_t S1_PID_0E_TimingAdvance_ro;              //      Bits= 8 Offset= -64.000000         Factor= 0.500000        Unit:'deg before TDC'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_0E_TimingAdvance_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_26_OxySensor3_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_26_OxySensor3_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_0F_IntakeAirTemperature_ro;       //      Bits= 8 Offset= -40                Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_0F_IntakeAirTemperature_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_10_MAFAirFlowRate_ro;            //      Bits=16 Factor= 0.010000        Unit:'grams/sec'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_10_MAFAirFlowRate_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_11_ThrottlePosition_ro;           //      Bits= 8 Factor= 0.392160        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_11_ThrottlePosition_phys;
#endif // AUDI104_USE_SIGFLOAT

  //  1 : "Upstream"
  //  2 : "Downstream catalytic conv"
  //  4 : "From outside atmosphere/off"
  //  8 : "Pump cmd on for diagn."
  // multiplex variable
  uint8_t S1_PID_12_CmdSecAirStatus;               //      Bits= 8

  // multiplex variable
  uint16_t S1_PID_25_OxySensor2_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_25_OxySensor2_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_14_OxySensor1_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_14_OxySensor1_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_24_OxySensor1_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_24_OxySensor1_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_23_FuelRailGaug_ro;              //      Bits=16 Factor= 10              Unit:'kPa'

#ifdef AUDI104_USE_SIGFLOAT
  uint32_t S1_PID_23_FuelRailGaug_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_27_OxySensor4_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_27_OxySensor4_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_21_DistanceMILOn;                //      Bits=16 Unit:'km'

  // PIDs supported [21 - 40] - Bit encoded [A7..D0] == [PID $21..PID $40]. See OBD-II PIDs on Wikipedia
  // multiplex variable
  uint32_t S1_PID_20_PIDsSupported_21_40;          //      Bits=32

  // multiplex variable
  uint16_t S1_PID_36_OxySensor3_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_36_OxySensor3_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_1F_TimeSinceEngStart;            //      Bits=16 Unit:'seconds'

  // multiplex variable
  uint8_t S1_PID_15_OxySensor2_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_15_OxySensor2_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  //  1 : "OBD-II as defined by the CARB"
  //  2 : "OBD as defined by the EPA"
  //  3 : "OBD and OBD-II"
  //  4 : "OBD-I"
  //  5 : "Not OBD compliant"
  //  6 : "EOBD (Europe)"
  //  7 : "EOBD and OBD-II"
  //  8 : "EOBD and OBD"
  //  9 : "EOBD, OBD and OBD II"
  //  10 : "JOBD (Japan)"
  //  11 : "JOBD and OBD II"
  //  12 : "JOBD and EOBD"
  //  13 : "JOBD, EOBD, and OBD II"
  //  14 : "Reserved"
  //  15 : "Reserved"
  //  16 : "Reserved"
  //  17 : "Eng. Manu. Diag. (EMD)"
  //  18 : "EMD Enhanced (EMD+)"
  //  19 : "HD OBD-C"
  //  20 : "HD OBD"
  //  21 : "WWH OBD"
  //  22 : "Reserved"
  //  23 : "HD EOBD-I"
  //  24 : "HD EOBD-I N"
  //  25 : "HD EOBD-II"
  //  26 : "HD EOBD-II N"
  //  27 : "Reserved"
  //  28 : "OBDBr-1"
  //  29 : "OBDBr-2"
  //  30 : "KOBD"
  //  31 : "IOBD I"
  //  32 : "IOBD II"
  //  33 : "HD EOBD-IV"
  //  34 : "Reserved"
  //  35 : "Reserved"
  // multiplex variable
  uint8_t S1_PID_1C_OBDStandard;                   //      Bits= 8

  // multiplex variable
  uint8_t S1_PID_1B_OxySensor8_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_1B_OxySensor8_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_16_OxySensor3_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_16_OxySensor3_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_1A_OxySensor7_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_1A_OxySensor7_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_19_OxySensor6_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_19_OxySensor6_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_17_OxySensor4_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_17_OxySensor4_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_18_OxySensor5_Volt_ro;            //      Bits= 8 Factor= 0.005000        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_18_OxySensor5_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_29_OxySensor6_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_29_OxySensor6_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // Monitor status since DTCs cleared (includes malfunction indicator lamp (MIL) status and number of DTCs) 
  // multiplex variable
  uint32_t S1_PID_01_MonitorStatus;                //      Bits=32

  // multiplex variable
  uint16_t S1_PID_02_FreezeDTC;                    //      Bits=16

  //  1 : "Open loop (insuff. eng. temp.)"
  //  2 : "Closed loop (oxy sens)"
  //  4 : "Open loop (eng. load, fuel cut)"
  //  8 : "Open loop (system failure)"
  //  16 : "Closed loop (feedback issue)"
  // multiplex variable
  uint16_t S1_PID_03_FuelSystemStatus;             //      Bits=16

  // multiplex variable
  uint16_t S1_PID_35_OxySensor2_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_35_OxySensor2_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_04_CalcEngineLoad_ro;             //      Bits= 8 Factor= 0.392160        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_04_CalcEngineLoad_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_05_EngineCoolantTemp_ro;          //      Bits= 8 Offset= -40                Unit:'degC'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_05_EngineCoolantTemp_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_06_ShortFuelTrimBank1_ro;         //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_06_ShortFuelTrimBank1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_34_OxySensor1_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_34_OxySensor1_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_07_LongFuelTrimBank1_ro;          //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_07_LongFuelTrimBank1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_33_AbsBaroPres;                   //      Bits= 8 Unit:'kPa'

  // multiplex variable
  uint8_t S1_PID_08_ShortFuelTrimBank2_ro;         //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_08_ShortFuelTrimBank2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  int16_t S1_PID_32_EvapSysVaporPres_ro;           //  [-] Bits=16 Factor= 0.250000        Unit:'Pa'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_32_EvapSysVaporPres_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_30_WarmUpsSinceCodeClear;         //      Bits= 8 Unit:'count'

  // multiplex variable
  uint16_t S1_PID_0C_EngineRPM_ro;                 //      Bits=16 Factor= 0.250000        Unit:'rpm'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_0C_EngineRPM_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_0B_IntakeManiAbsPress;            //      Bits= 8 Unit:'kPa'

  // multiplex variable
  uint16_t S1_PID_2A_OxySensor7_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2A_OxySensor7_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_0A_FuelPressure_ro;               //      Bits= 8 Factor= 3               Unit:'kPa'

#ifdef AUDI104_USE_SIGFLOAT
  uint16_t S1_PID_0A_FuelPressure_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_2B_OxySensor8_FAER_ro;           //      Bits=16 Factor= 0.000031        Unit:'ratio'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2B_OxySensor8_FAER_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_09_LongFuelTrimBank2_ro;          //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_09_LongFuelTrimBank2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_2C_CmdEGR_ro;                     //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2C_CmdEGR_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_2D_EGRError_ro;                   //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2D_EGRError_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_2E_CmdEvapPurge_ro;               //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2E_CmdEvapPurge_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_2F_FuelTankLevel_ro;              //      Bits= 8 Factor= 0.392157        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2F_FuelTankLevel_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_31_DistanceSinceCodeClear;       //      Bits=16 Unit:'km'

  // multiplex variable
  uint8_t S1_PID_15_OxySensor2_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_15_OxySensor2_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_64_EngPctTorq_EP1_ro;             //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_64_EngPctTorq_EP1_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_16_OxySensor3_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_16_OxySensor3_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_14_OxySensor1_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_14_OxySensor1_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_56_LongSecOxyTrimBank3_ro;        //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_56_LongSecOxyTrimBank3_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_18_OxySensor5_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_18_OxySensor5_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_4F_Max_OxySensVol;                //      Bits= 8 Unit:'V'

  // multiplex variable
  uint8_t S1_PID_55_ShortSecOxyTrimBank3_ro;       //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_55_ShortSecOxyTrimBank3_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_57_ShortSecOxyTrimBank4_ro;       //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_57_ShortSecOxyTrimBank4_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_58_LongSecOxyTrimBank4_ro;        //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_58_LongSecOxyTrimBank4_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_17_OxySensor4_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_17_OxySensor4_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_1B_OxySensor8_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_1B_OxySensor8_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_1A_OxySensor7_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_1A_OxySensor7_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_19_OxySensor6_STFT_ro;            //      Bits= 8 Offset= -100.000000        Factor= 0.781250        Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_19_OxySensor6_STFT_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_35_OxySensor2_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_35_OxySensor2_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_37_OxySensor4_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_37_OxySensor4_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_38_OxySensor5_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_38_OxySensor5_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_34_OxySensor1_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_34_OxySensor1_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_39_OxySensor6_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_39_OxySensor6_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_36_OxySensor3_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_36_OxySensor3_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3A_OxySensor7_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3A_OxySensor7_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_3B_OxySensor8_Crnt_ro;           //      Bits=16 Offset= -128.000000        Factor= 0.003906        Unit:'mA'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_3B_OxySensor8_Crnt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_2B_OxySensor8_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2B_OxySensor8_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_2A_OxySensor7_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_2A_OxySensor7_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_29_OxySensor6_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_29_OxySensor6_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_28_OxySensor5_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_28_OxySensor5_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_27_OxySensor4_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_27_OxySensor4_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_26_OxySensor3_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_26_OxySensor3_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint16_t S1_PID_25_OxySensor2_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_25_OxySensor2_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_4F_Max_OxySensCrnt;               //      Bits= 8 Unit:'mA'

  // multiplex variable
  uint16_t S1_PID_24_OxySensor1_Volt_ro;           //      Bits=16 Factor= 0.000122        Unit:'volts'

#ifdef AUDI104_USE_SIGFLOAT
  sigfloat_t S1_PID_24_OxySensor1_Volt_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_64_EngPctTorq_EP2_ro;             //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_64_EngPctTorq_EP2_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_4F_Max_IntManiAbsPres_ro;         //      Bits= 8 Factor= 10              Unit:'kPa'

#ifdef AUDI104_USE_SIGFLOAT
  uint16_t S1_PID_4F_Max_IntManiAbsPres_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_64_EngPctTorq_EP3_ro;             //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_64_EngPctTorq_EP3_phys;
#endif // AUDI104_USE_SIGFLOAT

  // multiplex variable
  uint8_t S1_PID_64_EngPctTorq_EP4_ro;             //      Bits= 8 Offset= -125               Unit:'%'

#ifdef AUDI104_USE_SIGFLOAT
  int16_t S1_PID_64_EngPctTorq_EP4_phys;
#endif // AUDI104_USE_SIGFLOAT

#endif // AUDI104_USE_BITS_SIGNAL

#ifdef AUDI104_USE_DIAG_MONITORS

  FrameMonitor_t mon1;

#endif // AUDI104_USE_DIAG_MONITORS

} OBD2_t;

// Function signatures

uint32_t Unpack_OBD2_Audi104(OBD2_t* _m, const uint8_t* _d, uint8_t dlc_);
#ifdef AUDI104_USE_CANSTRUCT
uint32_t Pack_OBD2_Audi104(OBD2_t* _m, __CoderDbcCanFrame_t__* cframe);
#else
uint32_t Pack_OBD2_Audi104(OBD2_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
#endif // AUDI104_USE_CANSTRUCT

#ifdef __cplusplus
}
#endif
