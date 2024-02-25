#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_HarvestResourceBeaconResource.BTT_HarvestResourceBeaconResource_C
// (None)

class UClass* UBTT_HarvestResourceBeaconResource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_HarvestResourceBeaconResource_C");

	return Clss;
}


// BTT_HarvestResourceBeaconResource_C BTT_HarvestResourceBeaconResource.Default__BTT_HarvestResourceBeaconResource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_HarvestResourceBeaconResource_C* UBTT_HarvestResourceBeaconResource_C::GetDefaultObj()
{
	static class UBTT_HarvestResourceBeaconResource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_HarvestResourceBeaconResource_C*>(UBTT_HarvestResourceBeaconResource_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_HarvestResourceBeaconResource.BTT_HarvestResourceBeaconResource_C.GetTargetTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  Target                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_HarvestResourceBeaconResource_C::GetTargetTransform(struct FTransform* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_HarvestResourceBeaconResource_C", "GetTargetTransform");

	Params::UBTT_HarvestResourceBeaconResource_C_GetTargetTransform_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = std::move(Parms.Target);

}


// Function BTT_HarvestResourceBeaconResource.BTT_HarvestResourceBeaconResource_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_HarvestResourceBeaconResource_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_HarvestResourceBeaconResource_C", "ReceiveExecuteAI");

	Params::UBTT_HarvestResourceBeaconResource_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_HarvestResourceBeaconResource.BTT_HarvestResourceBeaconResource_C.CheckCompletion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBTT_HarvestResourceBeaconResource_C::CheckCompletion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_HarvestResourceBeaconResource_C", "CheckCompletion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BTT_HarvestResourceBeaconResource.BTT_HarvestResourceBeaconResource_C.ExecuteUbergraph_BTT_HarvestResourceBeaconResource
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryActivateAbilitiesByTag_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTargetTransform_Target                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          Temp_struct_Variable                                             (ConstParm)
// TArray<struct FGameplayEffectCue>  Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// class ABP_Creature_NPC_Villager_C* K2Node_DynamicCast_AsBP_Creature_NPC_Villager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIC_Creature_NPC_Villager_C*K2Node_DynamicCast_AsAIC_Creature_NPC_Villager                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ResourceNode_IIM_C*      K2Node_DynamicCast_AsBP_Resource_Node_IIM                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetResourceNodeLocation_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetResourceNodeLocation_Location                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_MakeHitResult_ReturnValue                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesHaveResourceType_bHasResourceType                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       (None)
// TScriptInterface<class IDamageEventInterface>CallFunc_DamageActor_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          CallFunc_DamageActor_AggregatedDamageTags                        (None)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesHaveResourceType_bHasResourceType_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DamageActor_BaseDamage_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_HarvestResourceBeaconResource_C::ExecuteUbergraph_BTT_HarvestResourceBeaconResource(int32 EntryPoint, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTransform& CallFunc_GetTargetTransform_Target, const struct FTagValueContainer& Temp_struct_Variable, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, class ABP_Creature_NPC_Villager_C* K2Node_DynamicCast_AsBP_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class AAIC_Creature_NPC_Villager_C* K2Node_DynamicCast_AsAIC_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_SelectFloat_ReturnValue, class ABP_ResourceNode_IIM_C* K2Node_DynamicCast_AsBP_Resource_Node_IIM, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_GetResourceNodeLocation_Success, const struct FVector& CallFunc_GetResourceNodeLocation_Location, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_DoesHaveResourceType_bHasResourceType, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, TScriptInterface<class IDamageEventInterface> CallFunc_DamageActor_self_CastInput, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_DoesHaveResourceType_bHasResourceType_1, float CallFunc_DamageActor_BaseDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_HarvestResourceBeaconResource_C", "ExecuteUbergraph_BTT_HarvestResourceBeaconResource");

	Params::UBTT_HarvestResourceBeaconResource_C_ExecuteUbergraph_BTT_HarvestResourceBeaconResource_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_TryActivateAbilitiesByTag_ReturnValue = CallFunc_TryActivateAbilitiesByTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetTargetTransform_Target = CallFunc_GetTargetTransform_Target;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC_Villager = K2Node_DynamicCast_AsBP_Creature_NPC_Villager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsAIC_Creature_NPC_Villager = K2Node_DynamicCast_AsAIC_Creature_NPC_Villager;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Resource_Node_IIM = K2Node_DynamicCast_AsBP_Resource_Node_IIM;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetResourceNodeLocation_Success = CallFunc_GetResourceNodeLocation_Success;
	Parms.CallFunc_GetResourceNodeLocation_Location = CallFunc_GetResourceNodeLocation_Location;
	Parms.CallFunc_MakeHitResult_ReturnValue = CallFunc_MakeHitResult_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Interactable = K2Node_DynamicCast_AsBPI_Interactable;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_DoesHaveResourceType_bHasResourceType = CallFunc_DoesHaveResourceType_bHasResourceType;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_DamageActor_self_CastInput = CallFunc_DamageActor_self_CastInput;
	Parms.CallFunc_DamageActor_AggregatedDamageTags = CallFunc_DamageActor_AggregatedDamageTags;
	Parms.K2Node_DynamicCast_AsBPI_Interactable_1 = K2Node_DynamicCast_AsBPI_Interactable_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_DoesHaveResourceType_bHasResourceType_1 = CallFunc_DoesHaveResourceType_bHasResourceType_1;
	Parms.CallFunc_DamageActor_BaseDamage_ImplicitCast = CallFunc_DamageActor_BaseDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


