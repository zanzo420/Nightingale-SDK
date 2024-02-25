#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C
// (Actor)

class UClass* ABP_Encounter_ArchetypeBuild_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Encounter_ArchetypeBuild_C");

	return Clss;
}


// BP_Encounter_ArchetypeBuild_C BP_Encounter_ArchetypeBuild.Default__BP_Encounter_ArchetypeBuild_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Encounter_ArchetypeBuild_C* ABP_Encounter_ArchetypeBuild_C::GetDefaultObj()
{
	static class ABP_Encounter_ArchetypeBuild_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Encounter_ArchetypeBuild_C*>(ABP_Encounter_ArchetypeBuild_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.CompleteBuildEncounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::CompleteBuildEncounter(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "CompleteBuildEncounter");

	Params::ABP_Encounter_ArchetypeBuild_C_CompleteBuildEncounter_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.Award
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class IInterface>      Container_Interface                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IInWorldItemContainerOwnerInterface>CallFunc_ServerOnly_OnContainerOpenStateChanged_self_CastInput   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IContainerRewardsInterface>CallFunc_PopulateChest_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::Award(TSubclassOf<class IInterface> Container_Interface, TScriptInterface<class IInWorldItemContainerOwnerInterface> CallFunc_ServerOnly_OnContainerOpenStateChanged_self_CastInput, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, TScriptInterface<class IContainerRewardsInterface> CallFunc_PopulateChest_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "Award");

	Params::ABP_Encounter_ArchetypeBuild_C_Award_Params Parms{};

	Parms.Container_Interface = Container_Interface;
	Parms.CallFunc_ServerOnly_OnContainerOpenStateChanged_self_CastInput = CallFunc_ServerOnly_OnContainerOpenStateChanged_self_CastInput;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_PopulateChest_self_CastInput = CallFunc_PopulateChest_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.SpawnRewardStructure
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     Item_Rewards                                                     (Edit, BlueprintVisible)
// struct FStructureAssetReference    Human_Reward_Chest_SDA                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FTransform                  Reward_Transform                                                 (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupDataInterface_RewardProvider>K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Reward_Provider(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATargetPoint*                CallFunc_GetReward_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureSpawnContext      K2Node_MakeStruct_StructureSpawnContext                          (NoDestructor)
// class UObject*                     CallFunc_SpawnStructure_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDynamicActorAtLocation_Actor                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDynamicActorAtLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Functional_Container_Instanced_C*K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Functional_Container_Instanced_C*K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::SpawnRewardStructure(const TArray<struct FInventoryEntry>& Item_Rewards, const struct FStructureAssetReference& Human_Reward_Chest_SDA, const struct FTransform& Reward_Transform, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, TScriptInterface<class IEncounterMarkupDataInterface_RewardProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Reward_Provider, bool K2Node_DynamicCast_bSuccess_1, class ATargetPoint* CallFunc_GetReward_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, class UObject* CallFunc_SpawnStructure_ReturnValue, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, class ABP_Structure_Functional_Container_Instanced_C* K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced, bool K2Node_DynamicCast_bSuccess_2, class ABP_Structure_Functional_Container_Instanced_C* K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced_1, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "SpawnRewardStructure");

	Params::ABP_Encounter_ArchetypeBuild_C_SpawnRewardStructure_Params Parms{};

	Parms.Item_Rewards = Item_Rewards;
	Parms.Human_Reward_Chest_SDA = Human_Reward_Chest_SDA;
	Parms.Reward_Transform = Reward_Transform;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetTargetActor_ReturnValue_1 = CallFunc_GetTargetActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Reward_Provider = K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Reward_Provider;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetReward_ReturnValue = CallFunc_GetReward_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeStruct_StructureSpawnContext = K2Node_MakeStruct_StructureSpawnContext;
	Parms.CallFunc_SpawnStructure_ReturnValue = CallFunc_SpawnStructure_ReturnValue;
	Parms.CallFunc_GetDynamicActorAtLocation_Actor = CallFunc_GetDynamicActorAtLocation_Actor;
	Parms.CallFunc_GetDynamicActorAtLocation_ReturnValue = CallFunc_GetDynamicActorAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced = K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced_1 = K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.RespawnStructure
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXStructure*               Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bRespawnedStructure                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               NewStructure                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CurrentStructure                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ANWXStructurePartProxyActor* CurrentProxy                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   MarkupAsset                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterStructBuilderInterface>StructureBuilder                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterStructBuilderInterface>CallFunc_GetEncounterStructBuilderInterface_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider>K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ANWXStructurePartProxyActor*>CallFunc_GetStructures_ReturnValue                               (ReferenceParm)
// class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureOriginatorInterface>CallFunc_SetStructureOriginatorType_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetStructureSpawnState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::RespawnStructure(class ANWXStructure* Structure, bool bRespawnedStructure, class ANWXStructure* NewStructure, class ANWXStructure* CurrentStructure, class ANWXStructurePartProxyActor* CurrentProxy, class UEncounterMarkupDataAsset* MarkupAsset, TScriptInterface<class IEncounterStructBuilderInterface> StructureBuilder, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_2, TScriptInterface<class IEncounterStructBuilderInterface> CallFunc_GetEncounterStructBuilderInterface_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_4, TArray<class ANWXStructurePartProxyActor*>& CallFunc_GetStructures_ReturnValue, class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IStructureOriginatorInterface> CallFunc_SetStructureOriginatorType_self_CastInput, bool CallFunc_BooleanAND_ReturnValue, class ANWXStructure* CallFunc_GetStructure_Structure, enum class EStructureState CallFunc_GetStructureSpawnState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ANWXStructure* CallFunc_GetStructure_Structure_1, bool CallFunc_IsValid_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "RespawnStructure");

	Params::ABP_Encounter_ArchetypeBuild_C_RespawnStructure_Params Parms{};

	Parms.Structure = Structure;
	Parms.bRespawnedStructure = bRespawnedStructure;
	Parms.NewStructure = NewStructure;
	Parms.CurrentStructure = CurrentStructure;
	Parms.CurrentProxy = CurrentProxy;
	Parms.MarkupAsset = MarkupAsset;
	Parms.StructureBuilder = StructureBuilder;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue_1 = CallFunc_GetTargetActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue_2 = CallFunc_GetTargetActor_ReturnValue_2;
	Parms.CallFunc_GetEncounterStructBuilderInterface_ReturnValue = CallFunc_GetEncounterStructBuilderInterface_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider = K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetStructures_ReturnValue = CallFunc_GetStructures_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetStructureOriginatorType_self_CastInput = CallFunc_SetStructureOriginatorType_self_CastInput;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetStructure_Structure = CallFunc_GetStructure_Structure;
	Parms.CallFunc_GetStructureSpawnState_ReturnValue = CallFunc_GetStructureSpawnState_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetStructure_Structure_1 = CallFunc_GetStructure_Structure_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.OnCompositePieceDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     OwningStructure                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CompositeStructure                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureValidForUse_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDestroyableInterface>K2Node_DynamicCast_AsStructure_Destroyable_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         K2Node_DynamicCast_AsStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExecuteDestroyStructure_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::OnCompositePieceDestroyed(class UObject* OwningStructure, class AStructureComposite* CompositeStructure, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStructureValidForUse_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IStructureDestroyableInterface> K2Node_DynamicCast_AsStructure_Destroyable_Interface, bool K2Node_DynamicCast_bSuccess, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ExecuteDestroyStructure_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "OnCompositePieceDestroyed");

	Params::ABP_Encounter_ArchetypeBuild_C_OnCompositePieceDestroyed_Params Parms{};

	Parms.OwningStructure = OwningStructure;
	Parms.CompositeStructure = CompositeStructure;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsStructureValidForUse_ReturnValue = CallFunc_IsStructureValidForUse_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsStructure_Destroyable_Interface = K2Node_DynamicCast_AsStructure_Destroyable_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStructure_Composite = K2Node_DynamicCast_AsStructure_Composite;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_ExecuteDestroyStructure_Success = CallFunc_ExecuteDestroyStructure_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.RegisterCompositeStructure
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStructureComposite*         CompositeStructure                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       StructureUID                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_GetPieceIdsInConstructionOrder_PieceIds                 (ReferenceParm)
// TScriptInterface<class IStructureUniqueIDInterface>CallFunc_GetUniqueIdentifierAsGUID_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueIdentifierAsGUID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IntArray                 K2Node_MakeStruct_S_IntArray                                     (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::RegisterCompositeStructure(class AStructureComposite* CompositeStructure, const struct FGuid& StructureUID, TArray<int32>& CallFunc_GetPieceIdsInConstructionOrder_PieceIds, TScriptInterface<class IStructureUniqueIDInterface> CallFunc_GetUniqueIdentifierAsGUID_self_CastInput, const struct FGuid& CallFunc_GetUniqueIdentifierAsGUID_ReturnValue, const struct FS_IntArray& K2Node_MakeStruct_S_IntArray, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "RegisterCompositeStructure");

	Params::ABP_Encounter_ArchetypeBuild_C_RegisterCompositeStructure_Params Parms{};

	Parms.CompositeStructure = CompositeStructure;
	Parms.StructureUID = StructureUID;
	Parms.CallFunc_GetPieceIdsInConstructionOrder_PieceIds = CallFunc_GetPieceIdsInConstructionOrder_PieceIds;
	Parms.CallFunc_GetUniqueIdentifierAsGUID_self_CastInput = CallFunc_GetUniqueIdentifierAsGUID_self_CastInput;
	Parms.CallFunc_GetUniqueIdentifierAsGUID_ReturnValue = CallFunc_GetUniqueIdentifierAsGUID_ReturnValue;
	Parms.K2Node_MakeStruct_S_IntArray = K2Node_MakeStruct_S_IntArray;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.CheckNecessaryCompositePiecesValid
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AStructureComposite*         OwningStructure                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bAllNecessaryPiecesValid                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NecessaryPieceId                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositeComponent*CompositeComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CurrentPieceIds                                                  (Edit, BlueprintVisible)
// TArray<int32>                      NecessaryPieceIds                                                (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositeComponent*CallFunc_GetCompositeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_GetPieceIdsInConstructionOrder_PieceIds                 (ReferenceParm)
// TScriptInterface<class IStructureUniqueIDInterface>CallFunc_GetUniqueIdentifierAsGUID_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueIdentifierAsGUID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositePiece*    CallFunc_GetCompositePieceById_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureValidForUse_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IntArray                 CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::CheckNecessaryCompositePiecesValid(class AStructureComposite* OwningStructure, bool* bAllNecessaryPiecesValid, int32 NecessaryPieceId, class UStructureCompositeComponent* CompositeComponent, const TArray<int32>& CurrentPieceIds, const TArray<int32>& NecessaryPieceIds, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_1, class UStructureCompositeComponent* CallFunc_GetCompositeComponent_ReturnValue, TArray<int32>& CallFunc_GetPieceIdsInConstructionOrder_PieceIds, TScriptInterface<class IStructureUniqueIDInterface> CallFunc_GetUniqueIdentifierAsGUID_self_CastInput, const struct FGuid& CallFunc_GetUniqueIdentifierAsGUID_ReturnValue, class UStructureCompositePiece* CallFunc_GetCompositePieceById_ReturnValue, bool CallFunc_IsStructureValidForUse_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_IntArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "CheckNecessaryCompositePiecesValid");

	Params::ABP_Encounter_ArchetypeBuild_C_CheckNecessaryCompositePiecesValid_Params Parms{};

	Parms.OwningStructure = OwningStructure;
	Parms.NecessaryPieceId = NecessaryPieceId;
	Parms.CompositeComponent = CompositeComponent;
	Parms.CurrentPieceIds = CurrentPieceIds;
	Parms.NecessaryPieceIds = NecessaryPieceIds;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCompositeComponent_ReturnValue = CallFunc_GetCompositeComponent_ReturnValue;
	Parms.CallFunc_GetPieceIdsInConstructionOrder_PieceIds = CallFunc_GetPieceIdsInConstructionOrder_PieceIds;
	Parms.CallFunc_GetUniqueIdentifierAsGUID_self_CastInput = CallFunc_GetUniqueIdentifierAsGUID_self_CastInput;
	Parms.CallFunc_GetUniqueIdentifierAsGUID_ReturnValue = CallFunc_GetUniqueIdentifierAsGUID_ReturnValue;
	Parms.CallFunc_GetCompositePieceById_ReturnValue = CallFunc_GetCompositePieceById_ReturnValue;
	Parms.CallFunc_IsStructureValidForUse_ReturnValue = CallFunc_IsStructureValidForUse_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bAllNecessaryPiecesValid != nullptr)
		*bAllNecessaryPiecesValid = Parms.bAllNecessaryPiecesValid;

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.BindStructureEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXStructure*               Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         K2Node_DynamicCast_AsStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::BindStructureEvents(class ANWXStructure* Structure, bool CallFunc_IsValid_ReturnValue, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "BindStructureEvents");

	Params::ABP_Encounter_ArchetypeBuild_C_BindStructureEvents_Params Parms{};

	Parms.Structure = Structure;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Composite = K2Node_DynamicCast_AsStructure_Composite;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.GetNPCLeader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Creature_NPC_C*          NPCLeader                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::GetNPCLeader(class ABP_Creature_NPC_C** NPCLeader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "GetNPCLeader");

	Params::ABP_Encounter_ArchetypeBuild_C_GetNPCLeader_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NPCLeader != nullptr)
		*NPCLeader = Parms.NPCLeader;

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.SetupNPCLeader
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Creature_NPC_C*          NPC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*PersistedObject                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         EncounterMenuRowHandle                                           (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetEncounterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*CallFunc_GetEncounterPersistedObject_EncounterPersistedObject    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::SetupNPCLeader(class ABP_Creature_NPC_C* NPC, class UEncounterPOIPersistedObject* PersistedObject, const struct FDataTableRowHandle& EncounterMenuRowHandle, const struct FGuid& CallFunc_GetEncounterID_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UEncounterPOIPersistedObject* CallFunc_GetEncounterPersistedObject_EncounterPersistedObject, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "SetupNPCLeader");

	Params::ABP_Encounter_ArchetypeBuild_C_SetupNPCLeader_Params Parms{};

	Parms.NPC = NPC;
	Parms.PersistedObject = PersistedObject;
	Parms.EncounterMenuRowHandle = EncounterMenuRowHandle;
	Parms.CallFunc_GetEncounterID_ReturnValue = CallFunc_GetEncounterID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetEncounterPersistedObject_EncounterPersistedObject = CallFunc_GetEncounterPersistedObject_EncounterPersistedObject;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.RetrieveNPCFromPersistence
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Creature_NPC_C*          PersistedNPC                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      PersistedLeaderNPC                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*PersistedObject                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetLeaderNPC_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*CallFunc_GetEncounterPersistedObject_EncounterPersistedObject    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::RetrieveNPCFromPersistence(class ABP_Creature_NPC_C** PersistedNPC, class AActor* PersistedLeaderNPC, class UEncounterPOIPersistedObject* PersistedObject, bool CallFunc_IsValid_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetLeaderNPC_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UEncounterPOIPersistedObject* CallFunc_GetEncounterPersistedObject_EncounterPersistedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "RetrieveNPCFromPersistence");

	Params::ABP_Encounter_ArchetypeBuild_C_RetrieveNPCFromPersistence_Params Parms{};

	Parms.PersistedLeaderNPC = PersistedLeaderNPC;
	Parms.PersistedObject = PersistedObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetLeaderNPC_ReturnValue = CallFunc_GetLeaderNPC_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetEncounterPersistedObject_EncounterPersistedObject = CallFunc_GetEncounterPersistedObject_EncounterPersistedObject;

	UObject::ProcessEvent(Func, &Parms);

	if (PersistedNPC != nullptr)
		*PersistedNPC = Parms.PersistedNPC;

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.CollectDebuggerInformation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class ANWXStructure*               CurrentStructure                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ANWXStructurePartProxyActor* CurrentProxy                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Completed_Count                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalStructures                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         K2Node_DynamicCast_AsStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>CallFunc_GetSchematicState_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckNecessaryCompositePiecesValid_bAllNecessaryPiecesValid(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureValidForUse_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider>K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ANWXStructurePartProxyActor*>CallFunc_GetStructures_ReturnValue                               (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

class FString ABP_Encounter_ArchetypeBuild_C::CollectDebuggerInformation(class ANWXStructure* CurrentStructure, class ANWXStructurePartProxyActor* CurrentProxy, int32 Completed_Count, int32 TotalStructures, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureStateInterface> CallFunc_GetSchematicState_self_CastInput, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_CheckNecessaryCompositePiecesValid_bAllNecessaryPiecesValid, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable_1, class ANWXStructure* CallFunc_GetStructure_Structure, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsStructureValidForUse_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider, bool K2Node_DynamicCast_bSuccess_2, TArray<class ANWXStructurePartProxyActor*>& CallFunc_GetStructures_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "CollectDebuggerInformation");

	Params::ABP_Encounter_ArchetypeBuild_C_CollectDebuggerInformation_Params Parms{};

	Parms.CurrentStructure = CurrentStructure;
	Parms.CurrentProxy = CurrentProxy;
	Parms.Completed_Count = Completed_Count;
	Parms.TotalStructures = TotalStructures;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_Composite = K2Node_DynamicCast_AsStructure_Composite;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSchematicState_self_CastInput = CallFunc_GetSchematicState_self_CastInput;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_CheckNecessaryCompositePiecesValid_bAllNecessaryPiecesValid = CallFunc_CheckNecessaryCompositePiecesValid_bAllNecessaryPiecesValid;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetStructure_Structure = CallFunc_GetStructure_Structure;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsStructureValidForUse_ReturnValue = CallFunc_IsStructureValidForUse_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue_1 = CallFunc_GetTargetActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider = K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetStructures_ReturnValue = CallFunc_GetStructures_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.OnNPCSpawned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          NewNPCLeader                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      NewLeader                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISquadMemberNativeInterface>CallFunc_GetLeaderActor_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetLeaderActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::OnNPCSpawned(class ABP_CreatureBase_C* Creature, class ABP_Creature_NPC_C* NewNPCLeader, class AActor* NewLeader, TScriptInterface<class ISquadMemberNativeInterface> CallFunc_GetLeaderActor_self_CastInput, class AActor* CallFunc_GetLeaderActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "OnNPCSpawned");

	Params::ABP_Encounter_ArchetypeBuild_C_OnNPCSpawned_Params Parms{};

	Parms.Creature = Creature;
	Parms.NewNPCLeader = NewNPCLeader;
	Parms.NewLeader = NewLeader;
	Parms.CallFunc_GetLeaderActor_self_CastInput = CallFunc_GetLeaderActor_self_CastInput;
	Parms.CallFunc_GetLeaderActor_ReturnValue = CallFunc_GetLeaderActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.InitializeNPC
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SpawnerLeader                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          PersistedNPC                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CreatureSpawner                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          CallFunc_RetrieveNPCFromPersistence_PersistedNPC                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Create_NPC_Spawner_Spawner_Actor                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Create_NPC_Spawner_Spawner_Was_Spawned                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::InitializeNPC(class AActor* SpawnerLeader, class ABP_Creature_NPC_C* PersistedNPC, class UObject* CreatureSpawner, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class ABP_Creature_NPC_C* CallFunc_RetrieveNPCFromPersistence_PersistedNPC, class ABP_CreatureSpawnerBase_C* CallFunc_Create_NPC_Spawner_Spawner_Actor, bool CallFunc_Create_NPC_Spawner_Spawner_Was_Spawned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "InitializeNPC");

	Params::ABP_Encounter_ArchetypeBuild_C_InitializeNPC_Params Parms{};

	Parms.SpawnerLeader = SpawnerLeader;
	Parms.PersistedNPC = PersistedNPC;
	Parms.CreatureSpawner = CreatureSpawner;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_RetrieveNPCFromPersistence_PersistedNPC = CallFunc_RetrieveNPCFromPersistence_PersistedNPC;
	Parms.CallFunc_Create_NPC_Spawner_Spawner_Actor = CallFunc_Create_NPC_Spawner_Spawner_Actor;
	Parms.CallFunc_Create_NPC_Spawner_Spawner_Was_Spawned = CallFunc_Create_NPC_Spawner_Spawner_Was_Spawned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.Initialize
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider>K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ANWXStructurePartProxyActor*>CallFunc_GetStructures_ReturnValue                               (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::Initialize(class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider, bool K2Node_DynamicCast_bSuccess_1, TArray<class ANWXStructurePartProxyActor*>& CallFunc_GetStructures_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsNotEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "Initialize");

	Params::ABP_Encounter_ArchetypeBuild_C_Initialize_Params Parms{};

	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue_1 = CallFunc_GetTargetActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider = K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetStructures_ReturnValue = CallFunc_GetStructures_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.Unbind Structures
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ANWXStructurePartProxyActor*>StructureProxies                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ANWXStructure*               Structure                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         K2Node_DynamicCast_AsStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::Unbind_Structures(TArray<class ANWXStructurePartProxyActor*>& StructureProxies, class ANWXStructure* Structure, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item, class ANWXStructure* CallFunc_GetStructure_Structure, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "Unbind Structures");

	Params::ABP_Encounter_ArchetypeBuild_C_Unbind_Structures_Params Parms{};

	Parms.StructureProxies = StructureProxies;
	Parms.Structure = Structure;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetStructure_Structure = CallFunc_GetStructure_Structure;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_Composite = K2Node_DynamicCast_AsStructure_Composite;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.AreAllStructuresCompleted
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAreAllCompleted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CurrentStructure                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ANWXStructurePartProxyActor* CurrentProxy                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Completed_Count                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider>K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ANWXStructurePartProxyActor*>CallFunc_GetStructures_ReturnValue                               (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         K2Node_DynamicCast_AsStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckNecessaryCompositePiecesValid_bAllNecessaryPiecesValid(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>CallFunc_GetSchematicState_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureValidForUse_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::AreAllStructuresCompleted(bool* bAreAllCompleted, class ANWXStructure* CurrentStructure, class ANWXStructurePartProxyActor* CurrentProxy, int32 Completed_Count, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider, bool K2Node_DynamicCast_bSuccess_1, TArray<class ANWXStructurePartProxyActor*>& CallFunc_GetStructures_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CheckNecessaryCompositePiecesValid_bAllNecessaryPiecesValid, TScriptInterface<class IStructureStateInterface> CallFunc_GetSchematicState_self_CastInput, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ANWXStructure* CallFunc_GetStructure_Structure, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsStructureValidForUse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "AreAllStructuresCompleted");

	Params::ABP_Encounter_ArchetypeBuild_C_AreAllStructuresCompleted_Params Parms{};

	Parms.CurrentStructure = CurrentStructure;
	Parms.CurrentProxy = CurrentProxy;
	Parms.Completed_Count = Completed_Count;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue_1 = CallFunc_GetTargetActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider = K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetStructures_ReturnValue = CallFunc_GetStructures_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Composite = K2Node_DynamicCast_AsStructure_Composite;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_CheckNecessaryCompositePiecesValid_bAllNecessaryPiecesValid = CallFunc_CheckNecessaryCompositePiecesValid_bAllNecessaryPiecesValid;
	Parms.CallFunc_GetSchematicState_self_CastInput = CallFunc_GetSchematicState_self_CastInput;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetStructure_Structure = CallFunc_GetStructure_Structure;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsStructureValidForUse_ReturnValue = CallFunc_IsStructureValidForUse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bAreAllCompleted != nullptr)
		*bAreAllCompleted = Parms.bAreAllCompleted;

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.OnStructureDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               Structure                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               K2Node_DynamicCast_AsNWXStructure                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureUniqueIDInterface>CallFunc_GetUniqueIdentifierAsGUID_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueIdentifierAsGUID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::OnStructureDestroyed(class AActor* DestroyedActor, class ANWXStructure* Structure, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureUniqueIDInterface> CallFunc_GetUniqueIdentifierAsGUID_self_CastInput, const struct FGuid& CallFunc_GetUniqueIdentifierAsGUID_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "OnStructureDestroyed");

	Params::ABP_Encounter_ArchetypeBuild_C_OnStructureDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;
	Parms.Structure = Structure;
	Parms.K2Node_DynamicCast_AsNWXStructure = K2Node_DynamicCast_AsNWXStructure;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUniqueIdentifierAsGUID_self_CastInput = CallFunc_GetUniqueIdentifierAsGUID_self_CastInput;
	Parms.CallFunc_GetUniqueIdentifierAsGUID_ReturnValue = CallFunc_GetUniqueIdentifierAsGUID_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.OnStructureStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TotalStructures                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CompletedStructures                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAllStructuresCompleted_bAreAllCompleted              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::OnStructureStateChanged(int32 TotalStructures, int32 CompletedStructures, bool CallFunc_AreAllStructuresCompleted_bAreAllCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "OnStructureStateChanged");

	Params::ABP_Encounter_ArchetypeBuild_C_OnStructureStateChanged_Params Parms{};

	Parms.TotalStructures = TotalStructures;
	Parms.CompletedStructures = CompletedStructures;
	Parms.CallFunc_AreAllStructuresCompleted_bAreAllCompleted = CallFunc_AreAllStructuresCompleted_bAreAllCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.Register Structures
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ANWXStructurePartProxyActor*>Structure_Objects                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::Register_Structures(TArray<class ANWXStructurePartProxyActor*>& Structure_Objects, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item, class ANWXStructure* CallFunc_GetStructure_Structure, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "Register Structures");

	Params::ABP_Encounter_ArchetypeBuild_C_Register_Structures_Params Parms{};

	Parms.Structure_Objects = Structure_Objects;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetStructure_Structure = CallFunc_GetStructure_Structure;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.BeginEncounter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypeBuild_C::BeginEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "BeginEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.CleanupEncounter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypeBuild_C::CleanupEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "CleanupEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.EncounterNPCInteraction
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypeBuild_C::EncounterNPCInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "EncounterNPCInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C.ExecuteUbergraph_BP_Encounter_ArchetypeBuild
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>CallFunc_GetMarkupDataAsset_self_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider>K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ANWXStructurePartProxyActor*>CallFunc_GetStructures_ReturnValue                               (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeBuild_C::ExecuteUbergraph_BP_Encounter_ArchetypeBuild(int32 EntryPoint, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> CallFunc_GetMarkupDataAsset_self_CastInput, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, TArray<class ANWXStructurePartProxyActor*>& CallFunc_GetStructures_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeBuild_C", "ExecuteUbergraph_BP_Encounter_ArchetypeBuild");

	Params::ABP_Encounter_ArchetypeBuild_C_ExecuteUbergraph_BP_Encounter_ArchetypeBuild_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue_1 = CallFunc_GetTargetActor_ReturnValue_1;
	Parms.CallFunc_GetMarkupDataAsset_self_CastInput = CallFunc_GetMarkupDataAsset_self_CastInput;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider = K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetStructures_ReturnValue = CallFunc_GetStructures_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


