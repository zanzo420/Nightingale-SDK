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

// 0xB08 (0xB08 - 0x0)
// Function GA_CreatureAbility_Harpy_GrabItem.GA_CreatureAbility_Harpy_GrabItem_C.HandleEvent
struct UGA_CreatureAbility_Harpy_GrabItem_C_HandleEvent_Params
{
public:
	struct FGameplayTag                          EventTags;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    EventData;                                         // 0x8(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm)
	TScriptInterface<class IItemContainer>       LHarpyContainer;                                   // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_Creature_Wildlife_Harpy_C*         LHarpy;                                            // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       LItemEntry;                                        // 0xF0(0x2F0)(Edit, BlueprintVisible)
	TScriptInterface<class IItemContainer>       ContainerInterface;                                // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ItemToSteal;                                       // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x3F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A824[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x3FC(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A826[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               CallFunc_GetAllItems_Entries;                      // 0x408(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A827[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_Array_Random_OutItem;                     // 0x420(0x2F0)(None)
	int32                                        CallFunc_Array_Random_OutIndex;                    // 0x710(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A828[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider;      // 0x718(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x728(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A829[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetDefaultContainer_ReturnValue;          // 0x730(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_AddItem_Amount;                           // 0x740(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A82A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         CallFunc_AddItem_ModifiedInstances;                // 0x748(0x10)(ReferenceParm)
	bool                                         CallFunc_AddItem_ReturnValue;                      // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A82B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_TryGetItemCharacteristicTags_CharacteristicTags; // 0x760(0x20)(None)
	enum class EGetResult                        CallFunc_TryGetItemCharacteristicTags_Branches;    // 0x780(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x781(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x782(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem; // 0x783(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A82D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               CallFunc_GenerateItemRewardsFromRewardData_ReturnValue; // 0x788(0x10)(ReferenceParm)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x798(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A82E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x7A0(0x2F0)(None)
	int32                                        CallFunc_AddItem_Amount_1;                         // 0xA90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A830[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         CallFunc_AddItem_ModifiedInstances_1;              // 0xA98(0x10)(ReferenceParm)
	bool                                         CallFunc_AddItem_ReturnValue_1;                    // 0xAA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveItem_ReturnValue;                   // 0xAA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0xAAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A832[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_Functional_Container_C*  K2Node_DynamicCast_AsBP_Structure_Functional_Container; // 0xAB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xAB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A834[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AItemProxyBase*                        K2Node_DynamicCast_AsItem_Proxy_Base;              // 0xAC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xAC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A835[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Creature_Wildlife_Harpy_C*         K2Node_DynamicCast_AsBP_Creature_Wildlife_Harpy;   // 0xAD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xAD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A837[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items;           // 0xAE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xAF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PickUpItemProxy_Success;                  // 0xAF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A838[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetInventoryContainerInterface_ContainerInterface; // 0xAF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


