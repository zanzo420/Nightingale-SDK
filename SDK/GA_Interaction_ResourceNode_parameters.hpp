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

// 0x21 (0x21 - 0x0)
// Function GA_Interaction_ResourceNode.GA_Interaction_ResourceNode_C.PopulateVariables
struct UGA_Interaction_ResourceNode_C_PopulateVariables_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPawn_Pawn;                             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PopulateVariables_bSuccess;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ResourceNode_IIM_C*                K2Node_DynamicCast_AsBP_Resource_Node_IIM;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x579 (0x579 - 0x0)
// Function GA_Interaction_ResourceNode.GA_Interaction_ResourceNode_C.ExecuteInteraction
struct UGA_Interaction_ResourceNode_C_ExecuteInteraction_Params
{
public:
	struct FGameplayTagContainer                 InteractionTags;                                   // 0x0(0x20)(Parm, OutParm)
	struct FIIMInstance                          Instance;                                          // 0x20(0x170)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 ParentTags;                                        // 0x190(0x20)(Edit, BlueprintVisible)
	struct FGameplayTag                          MontageActionTag;                                  // 0x1B0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSuccessful;                                      // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62FC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       Temp_object_Variable;                              // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_TryGetAnimTag_OutAnimTag;                 // 0x1D0(0x8)(NoDestructor, HasGetValueTypeHash)
	enum class EGetResult                        CallFunc_TryGetAnimTag_Branches;                   // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62FE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    CallFunc_GetItemID_OutItemReference;               // 0x1E0(0x80)(HasGetValueTypeHash)
	struct FItemData                             CallFunc_TryGetItemData_ItemData;                  // 0x260(0xD8)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetItemData_Branches;                  // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6300[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue_1; // 0x340(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6302[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface;       // 0x350(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6303[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_GetItemTypeTag_ReturnValue;               // 0x364(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6305[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       CallFunc_GetOffhandEquippedItem_ReturnValue;       // 0x370(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_HasAuthority_ReturnValue;              // 0x379(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6307[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_ExecuteInteraction_InteractionTags;       // 0x380(0x20)(None)
	bool                                         CallFunc_CanInteract_Success;                      // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6308[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPawn_Pawn;                             // 0x3A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInteractionAnimationInterface> K2Node_DynamicCast_AsInteraction_Animation_Interface; // 0x3B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6309[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x3C4(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x3CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_630A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIIMInstance                          CallFunc_GetInstanceFromInteractionData_IIMInstance; // 0x3D0(0x170)(None)
	class APawn*                                 CallFunc_GetPawn_Pawn_1;                           // 0x540(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x548(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_ResourceNodeIIMInterfaces_C> K2Node_DynamicCast_AsBPI_Resource_Node_IIMInterfaces; // 0x550(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_630B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_ResourceInteraction_C> CallFunc_GetResourceNodeInteractionInterface_ResourceInteraction; // 0x568(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ExecuteInteractionOnResourceNode_Success; // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function GA_Interaction_ResourceNode.GA_Interaction_ResourceNode_C.CanInteract
struct UGA_Interaction_ResourceNode_C_CanInteract_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_630C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPawn_Pawn;                             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Interactable_C>  K2Node_DynamicCast_AsBPI_Interactable;             // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanInteractWithActor_InteractAvailable;   // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


