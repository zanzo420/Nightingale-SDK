#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InteractionObject_CollectCrafts.BP_InteractionObject_CollectCrafts_C
// (None)

class UClass* UBP_InteractionObject_CollectCrafts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractionObject_CollectCrafts_C");

	return Clss;
}


// BP_InteractionObject_CollectCrafts_C BP_InteractionObject_CollectCrafts.Default__BP_InteractionObject_CollectCrafts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InteractionObject_CollectCrafts_C* UBP_InteractionObject_CollectCrafts_C::GetDefaultObj()
{
	static class UBP_InteractionObject_CollectCrafts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InteractionObject_CollectCrafts_C*>(UBP_InteractionObject_CollectCrafts_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InteractionObject_CollectCrafts.BP_InteractionObject_CollectCrafts_C.GetDisabledDescription
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (Parm, OutParm)
// bool                               CallFunc_HasCraftCollectionAvailable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_CollectCrafts_C::GetDisabledDescription(class UObject* Structure, class APawn* Pawn, class FText* Description, bool CallFunc_HasCraftCollectionAvailable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_CollectCrafts_C", "GetDisabledDescription");

	Params::UBP_InteractionObject_CollectCrafts_C_GetDisabledDescription_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.CallFunc_HasCraftCollectionAvailable_ReturnValue = CallFunc_HasCraftCollectionAvailable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BP_InteractionObject_CollectCrafts.BP_InteractionObject_CollectCrafts_C.HasCraftCollectionAvailable
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftForID_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCraftForID_CraftInProgressData                       (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_InteractionObject_CollectCrafts_C::HasCraftCollectionAvailable(class UObject* Structure, class UObject* Pawn, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_CollectCrafts_C", "HasCraftCollectionAvailable");

	Params::UBP_InteractionObject_CollectCrafts_C_HasCraftCollectionAvailable_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetCraftForID_Success = CallFunc_GetCraftForID_Success;
	Parms.CallFunc_GetCraftForID_CraftInProgressData = CallFunc_GetCraftForID_CraftInProgressData;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InteractionObject_CollectCrafts.BP_InteractionObject_CollectCrafts_C.ExecuteInteraction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              StartingParseIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewParsingIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress InProgressData                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CrafterASC                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CraftingStationComponent                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CraftingStation                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      PlayerId                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleNewEffectContext                                                 (Edit, BlueprintVisible)
// struct FGameplayAbilityPayloadHandleAbilityPayload                                                   (Edit, BlueprintVisible)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveCraftInProgressData_bSuccess                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AbilityPayloadFromBool_ReturnValue                      (None)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue                           (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue(None)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AbilityPayloadFromBool_ReturnValue_1                    (None)
// bool                               CallFunc_GetCraftForID_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCraftForID_CraftInProgressData                       (HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AppendPayloadHandle_ReturnValue                         (None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_CollectCrafts_C::ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex, const struct FS_Crafting_CraftInProgress& InProgressData, class UAbilitySystemComponent* CrafterASC, class UBP_CraftingStationComponent_C* CraftingStationComponent, class AActor* CraftingStation, const class FString& PlayerId, const struct FGameplayEffectContextHandle& NewEffectContext, const struct FGameplayAbilityPayloadHandle& AbilityPayload, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_RemoveCraftInProgressData_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue_1, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, const struct FGameplayAbilityPayloadHandle& CallFunc_AppendPayloadHandle_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_CollectCrafts_C", "ExecuteInteraction");

	Params::UBP_InteractionObject_CollectCrafts_C_ExecuteInteraction_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.Payload = Payload;
	Parms.StartingParseIndex = StartingParseIndex;
	Parms.InProgressData = InProgressData;
	Parms.CrafterASC = CrafterASC;
	Parms.CraftingStationComponent = CraftingStationComponent;
	Parms.CraftingStation = CraftingStation;
	Parms.PlayerId = PlayerId;
	Parms.NewEffectContext = NewEffectContext;
	Parms.AbilityPayload = AbilityPayload;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_RemoveCraftInProgressData_bSuccess = CallFunc_RemoveCraftInProgressData_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue = CallFunc_RemoveActiveEffectsWithTags_ReturnValue;
	Parms.CallFunc_AbilityPayloadFromBool_ReturnValue = CallFunc_AbilityPayloadFromBool_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_MakeEffectContext_ReturnValue = CallFunc_MakeEffectContext_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue = CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_AbilityPayloadFromBool_ReturnValue_1 = CallFunc_AbilityPayloadFromBool_ReturnValue_1;
	Parms.CallFunc_GetCraftForID_Success = CallFunc_GetCraftForID_Success;
	Parms.CallFunc_GetCraftForID_CraftInProgressData = CallFunc_GetCraftForID_CraftInProgressData;
	Parms.CallFunc_AppendPayloadHandle_ReturnValue = CallFunc_AppendPayloadHandle_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (NewParsingIndex != nullptr)
		*NewParsingIndex = Parms.NewParsingIndex;

}


// Function BP_InteractionObject_CollectCrafts.BP_InteractionObject_CollectCrafts_C.IsInteractionAvailable
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionAvailable_CanInteract                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCraftCollectionAvailable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_CollectCrafts_C::IsInteractionAvailable(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class UObject* LStructure, bool CallFunc_IsInteractionAvailable_CanInteract, bool CallFunc_HasCraftCollectionAvailable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_CollectCrafts_C", "IsInteractionAvailable");

	Params::UBP_InteractionObject_CollectCrafts_C_IsInteractionAvailable_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.LStructure = LStructure;
	Parms.CallFunc_IsInteractionAvailable_CanInteract = CallFunc_IsInteractionAvailable_CanInteract;
	Parms.CallFunc_HasCraftCollectionAvailable_ReturnValue = CallFunc_HasCraftCollectionAvailable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

}

}


