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

// 0x20 (0x20 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.GetContainerFromProvider
struct ABP_Creature_Wildlife_Harpy_C_GetContainerFromProvider_Params
{
public:
	struct FItemContainerHandle                  ContainerHandle;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	TScriptInterface<class IItemContainer>       ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.GetDefaultContainer
struct ABP_Creature_Wildlife_Harpy_C_GetDefaultContainer_Params
{
public:
	TScriptInterface<class IItemContainer>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.HasContainer
struct ABP_Creature_Wildlife_Harpy_C_HasContainer_Params
{
public:
	TScriptInterface<class IItemContainer>       Container;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.HasContainerFromHandle
struct ABP_Creature_Wildlife_Harpy_C_HasContainerFromHandle_Params
{
public:
	struct FItemContainerHandle                  ContainerHandle;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.ProxySpawned
struct ABP_Creature_Wildlife_Harpy_C_ProxySpawned_Params
{
public:
	class AItemProxyBase*                        ProxyItem;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xF (0xF - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.HandleTagCountChanged
struct ABP_Creature_Wildlife_Harpy_C_HandleTagCountChanged_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x460 (0x460 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.DropItem
struct ABP_Creature_Wildlife_Harpy_C_DropItem_Params
{
public:
	struct FVector                               LVector;                                           // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A64B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LTransform;                                        // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXItemProxySpawnerSubsystem*         CallFunc_GetWorldSubsystem_ReturnValue;            // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       CallFunc_GetAllItems_self_CastInput;               // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               CallFunc_GetAllItems_Entries;                      // 0xA8(0x10)(ReferenceParm)
	uint8                                        Pad_A64C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0xC0(0x2F0)(None)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x3B0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveItem_ReturnValue;                   // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A64E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x418(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue; // 0x430(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x448(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.GetAngry
struct ABP_Creature_Wildlife_Harpy_C_GetAngry_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        NewParam1;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A652[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable;                              // 0xC(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.RemoveItemCreatureGrants
struct ABP_Creature_Wildlife_Harpy_C_RemoveItemCreatureGrants_Params
{
public:
	class AEquippableItem*                       Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.UpdateRunDistance
struct ABP_Creature_Wildlife_Harpy_C_UpdateRunDistance_Params
{
public:
	class UBlackboardComponent*                  LBlackboard;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXAIController*                      LAIC;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       CallFunc_GetItem_Weapon;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A653[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetBBVar_ReturnValue;                     // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetBBVar_ReturnValue_1;                   // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A654[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetCreatureRunDistance_self_CastInput;    // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCreatureRunDistance_ReturnValue;       // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A655[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXAIController*                      CallFunc_GetCreatureController_CreatureController; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.ApplyItemCreatureGrants
struct ABP_Creature_Wildlife_Harpy_C_ApplyItemCreatureGrants_Params
{
public:
	class AEquippableItem*                       Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.Creature_OnDamageReceived
struct ABP_Creature_Wildlife_Harpy_C_Creature_OnDamageReceived_Params
{
public:
	double                                       Damage;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Source;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 EffectTags;                                        // 0x18(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FHitResult                            HitResult;                                         // 0x38(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FTagValueContainer                    TagValueContainer;                                 // 0x120(0x10)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xD8 (0xD8 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.CrossServerSendGameplayEventToActor
struct ABP_Creature_Wildlife_Harpy_C_CrossServerSendGameplayEventToActor_Params
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    Payload;                                           // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xE4 (0xE4 - 0x0)
// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.ExecuteUbergraph_BP_Creature_Wildlife_Harpy
struct ABP_Creature_Wildlife_Harpy_C_ExecuteUbergraph_BP_Creature_Wildlife_Harpy_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_EventTag;                             // 0x4(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A65A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_Payload;                              // 0x10(0xD0)(ConstParm)
	int32                                        CallFunc_SendGameplayEventToActor_ReturnValue;     // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


