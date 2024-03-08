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

// 0x1 (0x1 - 0x0)
// Function GA_QuickConsume.GA_QuickConsume_C.IsValidInDeathStates
struct UGA_QuickConsume_C_IsValidInDeathStates_Params
{
public:
	bool                                         IsValid;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x640 (0x640 - 0x0)
// Function GA_QuickConsume.GA_QuickConsume_C.GetEntryToConsume
struct UGA_QuickConsume_C_GetEntryToConsume_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_978B[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InventoryEntry;                                    // 0x10(0x2F0)(Parm, OutParm)
	class AController*                           CallFunc_GetActivatingController_ReturnValue;      // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarAccessInterface> K2Node_DynamicCast_AsToolbar_Access_Interface;     // 0x308(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_978C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue;    // 0x320(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSlotEntryObjectAtIndex_ReturnValue;    // 0x330(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item; // 0x340(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_978D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetInventoryEntry_ReturnValue;            // 0x350(0x2F0)(ConstParm)
};

// 0xD0 (0xD0 - 0x0)
// Function GA_QuickConsume.GA_QuickConsume_C.K2_ActivateAbilityFromEvent
struct UGA_QuickConsume_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x748 (0x748 - 0x0)
// Function GA_QuickConsume.GA_QuickConsume_C.ExecuteUbergraph_GA_QuickConsume
struct UGA_QuickConsume_C_ExecuteUbergraph_GA_QuickConsume_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_978E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xD0)(ConstParm)
	bool                                         CallFunc_GetEntryToConsume_bSuccess;               // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_978F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetEntryToConsume_InventoryEntry;         // 0xE0(0x2F0)(None)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9790[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetBackpack_Container;                    // 0x3D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackpack_ReturnValue;                  // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9791[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetActivatingCharacter_Character;         // 0x3F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetActivatingController_ReturnValue;      // 0x3F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerCharacter*                   K2Node_DynamicCast_AsNWXPlayer_Character;          // 0x400(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9792[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_InventoryComponent_C*              CallFunc_GetComponentByClass_ReturnValue;          // 0x410(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9793[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetItem_Entry;                            // 0x420(0x2F0)(None)
	bool                                         CallFunc_GetItem_ReturnValue;                      // 0x710(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9794[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstanceData_Traits                  CallFunc_TryGetItemTraits_Traits;                  // 0x718(0x20)(None)
	enum class EGetResult                        CallFunc_TryGetItemTraits_Branches;                // 0x738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_HasAuthority_ReturnValue;              // 0x739(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x73A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x73B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x73C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x73D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x73E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9795[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXCharacterAudioComponent*           CallFunc_GetComponentByClass_ReturnValue_1;        // 0x740(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


