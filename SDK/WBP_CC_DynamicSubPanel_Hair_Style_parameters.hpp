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

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.BP_GetDesiredFocusTarget
struct UWBP_CC_DynamicSubPanel_Hair_Style_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue;     // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1CA (0x1CA - 0x0)
// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.UpdateActiveHair
struct UWBP_CC_DynamicSubPanel_Hair_Style_C_UpdateActiveHair_Params
{
public:
	struct FHairDataReference                    CallFunc_GetHairData_OutData;                      // 0x0(0x70)(HasGetValueTypeHash)
	struct FHairData                             CallFunc_TryGetHairData_OutData;                   // 0x70(0x158)(None)
	enum class EGetResult                        CallFunc_TryGetHairData_OutBranches;               // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x180 (0x180 - 0x0)
// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.CollectPanelValues
struct UWBP_CC_DynamicSubPanel_Hair_Style_C_CollectPanelValues_Params
{
public:
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> OutValues;                                         // 0x0(0x50)(Parm, OutParm)
	class FString                                OutPanelName;                                      // 0x50(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FHairDataReference                    CallFunc_GetHairData_OutData;                      // 0x60(0x70)(HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetHairDataId_ReturnValue;                // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetHairDataId_ReturnValue_1;              // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_GuidToString_ReturnValue;            // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_GuidToString_ReturnValue_1;          // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs; // 0x110(0x20)(None)
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map;                                // 0x130(0x50)(None)
};

// 0x70 (0x70 - 0x0)
// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.CacheStartingPanelValues
struct UWBP_CC_DynamicSubPanel_Hair_Style_C_CacheStartingPanelValues_Params
{
public:
	struct FHairDataReference                    CallFunc_GetHairData_OutData;                      // 0x0(0x70)(HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.PreConstruct
struct UWBP_CC_DynamicSubPanel_Hair_Style_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x75 (0x75 - 0x0)
// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_hairstyles_K2Node_ComponentBoundEvent_2_CC_HairDataSelected__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Hair_Style_C_BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_hairstyles_K2Node_ComponentBoundEvent_2_CC_HairDataSelected__DelegateSignature_Params
{
public:
	struct FHairDataReference                    Hair_DA;                                           // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        GridIndex;                                         // 0x70(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHairAssetType                    Hair_TYpe;                                         // 0x74(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Hair_Style
struct UWBP_CC_DynamicSubPanel_Hair_Style_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Hair_Style_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7111[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetDesiredFocusTarget_ReturnValue;        // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7112[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7113[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    K2Node_ComponentBoundEvent_Hair_DA;                // 0x30(0x70)(HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_GridIndex;              // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHairAssetType                    K2Node_ComponentBoundEvent_Hair_TYpe;              // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7114[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetDesiredFocusTarget_ReturnValue_1;      // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


