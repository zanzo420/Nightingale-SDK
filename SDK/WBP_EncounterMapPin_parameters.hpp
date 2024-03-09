#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xE9 (0xE9 - 0x0)
// Function WBP_EncounterMapPin.WBP_EncounterMapPin_C.TryGet Encounter Status Enum
struct UWBP_EncounterMapPin_C_TryGet_Encounter_Status_Enum_Params
{
public:
	enum class EEncounterStatus                  EncountStatusEnum;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45FD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterProgressTracker*             EncounterProgressTracker;                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                     CallFunc_GetLocalPlayerState_PlayerState;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterProgressTracker*             CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_Parse_StringToGuid_OutGuid;               // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Parse_StringToGuid_Success;               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncounterDynamicData                 CallFunc_TryGetEncounterDynamicData_OutData;       // 0x38(0xB0)(None)
	bool                                         CallFunc_TryGetEncounterDynamicData_ReturnValue;   // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function WBP_EncounterMapPin.WBP_EncounterMapPin_C.Get Encounter State Text
struct UWBP_EncounterMapPin_C_Get_Encounter_State_Text_Params
{
public:
	enum class EEncounterStatus                  Enumerator;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4600[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  StateString;                                       // 0x8(0x18)(Parm, OutParm)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEncounterStatusDataRow               CallFunc_GetDataTableRowFromName_OutRow;           // 0x68(0x28)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function WBP_EncounterMapPin.WBP_EncounterMapPin_C.GetTooltipWidget
struct UWBP_EncounterMapPin_C_GetTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Tooltip_EncounterMapMarker_C*     CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMapWaypointInfo                      CallFunc_GetMapPinInfo_ReturnValue;                // 0x10(0x120)(None)
	class FText                                  CallFunc_Get_Encounter_State_Text_StateString;     // 0x130(0x18)(None)
	class FText                                  CallFunc_Conv_VectorToText_ReturnValue;            // 0x148(0x18)(None)
};

// 0x6 (0x6 - 0x0)
// Function WBP_EncounterMapPin.WBP_EncounterMapPin_C.ExecuteUbergraph_WBP_EncounterMapPin
struct UWBP_EncounterMapPin_C_ExecuteUbergraph_WBP_EncounterMapPin_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEncounterStatus                  CallFunc_TryGet_Encounter_Status_Enum_EncountStatusEnum; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGet_Encounter_Status_Enum_Success;     // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


