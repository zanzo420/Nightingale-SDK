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

// 0x29 (0x29 - 0x0)
// Function BP_InteractionObject_CollectCrafts.BP_InteractionObject_CollectCrafts_C.GetDisabledDescription
struct UBP_InteractionObject_CollectCrafts_C_GetDisabledDescription_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 Pawn;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Description;                                       // 0x10(0x18)(Parm, OutParm)
	bool                                         CallFunc_HasCraftCollectionAvailable_ReturnValue;  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x141 (0x141 - 0x0)
// Function BP_InteractionObject_CollectCrafts.BP_InteractionObject_CollectCrafts_C.HasCraftCollectionAvailable
struct UBP_InteractionObject_CollectCrafts_C_HasCraftCollectionAvailable_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Pawn;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info;      // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_DynamicCast_AsActor;                        // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPersistentUniqueIdFromPawn_PersistentId; // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_CraftingStationComponent_C*        CallFunc_GetComponentByClass_ReturnValue;          // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCraftForID_Success;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Crafting_CraftInProgress           CallFunc_GetCraftForID_CraftInProgressData;        // 0x60(0xD8)(HasGetValueTypeHash)
	uint8                                        Pad_A5BA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x464 (0x464 - 0x0)
// Function BP_InteractionObject_CollectCrafts.BP_InteractionObject_CollectCrafts_C.ExecuteInteraction
struct UBP_InteractionObject_CollectCrafts_C_ExecuteInteraction_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 Pawn;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStructureInteraction_PostConstructionInteraction_DataAsset* Data;                                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityPayloadHandle         Payload;                                           // 0x18(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        StartingParseIndex;                                // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NewParsingIndex;                                   // 0x40(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5BC[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Crafting_CraftInProgress           InProgressData;                                    // 0x50(0xD8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_A5BD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CrafterASC;                                        // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CraftingStationComponent_C*        CraftingStationComponent;                          // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CraftingStation;                                   // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FString                                PlayerId;                                          // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          NewEffectContext;                                  // 0x158(0x18)(Edit, BlueprintVisible)
	struct FGameplayAbilityPayloadHandle         AbilityPayload;                                    // 0x170(0x20)(Edit, BlueprintVisible)
	TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info;      // 0x190(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPersistentUniqueIdFromPawn_PersistentId; // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x1C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_DynamicCast_AsActor;                        // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveCraftInProgressData_bSuccess;       // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5C3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RemoveActiveEffectsWithTags_ReturnValue;  // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityPayloadHandle         CallFunc_AbilityPayloadFromBool_ReturnValue;       // 0x1E8(0x20)(None)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x210(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CraftingStationComponent_C*        CallFunc_GetComponentByClass_ReturnValue;          // 0x218(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_MakeEffectContext_ReturnValue;            // 0x220(0x18)(None)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue; // 0x238(0x28)(None)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x260(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityPayloadHandle         CallFunc_AbilityPayloadFromBool_ReturnValue_1;     // 0x268(0x20)(None)
	bool                                         CallFunc_GetCraftForID_Success;                    // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Crafting_CraftInProgress           CallFunc_GetCraftForID_CraftInProgressData;        // 0x290(0xD8)(HasGetValueTypeHash)
	uint8                                        Pad_A5C6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityPayloadHandle         CallFunc_AppendPayloadHandle_ReturnValue;          // 0x370(0x20)(None)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x390(0xD0)(None)
	int32                                        CallFunc_SendGameplayEventToActor_ReturnValue;     // 0x460(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function BP_InteractionObject_CollectCrafts.BP_InteractionObject_CollectCrafts_C.IsInteractionAvailable
struct UBP_InteractionObject_CollectCrafts_C_IsInteractionAvailable_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 Pawn;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStructureInteraction_PostConstructionInteraction_DataAsset* Data;                                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CanInteract;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               LStructure;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInteractionAvailable_CanInteract;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCraftCollectionAvailable_ReturnValue;  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


