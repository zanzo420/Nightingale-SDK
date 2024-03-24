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

// 0x56 (0x56 - 0x0)
// Function BP_AutoHideHUDComponent.BP_AutoHideHUDComponent_C.ShouldAutoHideHUD
struct UBP_AutoHideHUDComponent_C_ShouldAutoHideHUD_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9508[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 L_LayersToCheck;                                   // 0x8(0x20)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9509[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x38(0x10)(ReferenceParm)
	struct FGameplayTag                          CallFunc_Array_Get_Item;                           // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasFocusedWidgetInLayer_HasFocusedWidget; // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B (0x2B - 0x0)
// Function BP_AutoHideHUDComponent.BP_AutoHideHUDComponent_C.HasFocusedWidgetInLayer
struct UBP_AutoHideHUDComponent_C_HasFocusedWidgetInLayer_Params
{
public:
	struct FGameplayTag                          Layer;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                         HasFocusedWidget;                                  // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9514[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  L_PlayerController;                                // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetNWXPlayerController_ReturnValue;       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                CallFunc_GetActiveWindowInLayer_ReturnValue;       // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasUserFocusedDescendants_ReturnValue;    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_AutoHideHUDComponent.BP_AutoHideHUDComponent_C.Initialize
struct UBP_AutoHideHUDComponent_C_Initialize_Params
{
public:
	class APawn*                                 L_OwningPawn;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                     K2Node_DynamicCast_AsBP_Player_State;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_951E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXAbilitySystemComponent*            K2Node_DynamicCast_AsNWXAbility_System_Component;  // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_951F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                  K2Node_DynamicCast_AsHUD;                          // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9520[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x44(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9521[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetOwningPawn_ReturnValue;                // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x320 (0x320 - 0x0)
// Function BP_AutoHideHUDComponent.BP_AutoHideHUDComponent_C.OnItemAbilityUsed
struct UBP_AutoHideHUDComponent_C_OnItemAbilityUsed_Params
{
public:
	TSoftObjectPtr<class UTechniqueDataAsset>    Technique;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_9522[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x30(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xD (0xD - 0x0)
// Function BP_AutoHideHUDComponent.BP_AutoHideHUDComponent_C.OnOwnedGameplayTagCountChanged
struct UBP_AutoHideHUDComponent_C_OnOwnedGameplayTagCountChanged_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


