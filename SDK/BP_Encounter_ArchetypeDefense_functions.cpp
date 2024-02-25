#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C
// (Actor)

class UClass* ABP_Encounter_ArchetypeDefense_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Encounter_ArchetypeDefense_C");

	return Clss;
}


// BP_Encounter_ArchetypeDefense_C BP_Encounter_ArchetypeDefense.Default__BP_Encounter_ArchetypeDefense_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Encounter_ArchetypeDefense_C* ABP_Encounter_ArchetypeDefense_C::GetDefaultObj()
{
	static class ABP_Encounter_ArchetypeDefense_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Encounter_ArchetypeDefense_C*>(ABP_Encounter_ArchetypeDefense_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.Get Reward Chest SDA
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStructureAssetReference    Human_Reward_Chest_SDA                                           (Parm, OutParm, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::Get_Reward_Chest_SDA(struct FStructureAssetReference* Human_Reward_Chest_SDA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "Get Reward Chest SDA");

	Params::ABP_Encounter_ArchetypeDefense_C_Get_Reward_Chest_SDA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Human_Reward_Chest_SDA != nullptr)
		*Human_Reward_Chest_SDA = std::move(Parms.Human_Reward_Chest_SDA);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.Get Reward Structure SDA
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStructureAssetReference    HECU_SDA                                                         (Parm, OutParm, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::Get_Reward_Structure_SDA(struct FStructureAssetReference* HECU_SDA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "Get Reward Structure SDA");

	Params::ABP_Encounter_ArchetypeDefense_C_Get_Reward_Structure_SDA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HECU_SDA != nullptr)
		*HECU_SDA = std::move(Parms.HECU_SDA);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.Award
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class IInterface>      Container_Interface                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Reward_Interface                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IInWorldItemContainerOwnerInterface>CallFunc_ServerOnly_OnContainerOpenStateChanged_self_CastInput   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IContainerRewardsInterface>CallFunc_PopulateChest_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::Award(TSubclassOf<class IInterface> Container_Interface, TSubclassOf<class IInterface> Reward_Interface, TScriptInterface<class IInWorldItemContainerOwnerInterface> CallFunc_ServerOnly_OnContainerOpenStateChanged_self_CastInput, bool CallFunc_DoesImplementInterface_ReturnValue, TScriptInterface<class IContainerRewardsInterface> CallFunc_PopulateChest_self_CastInput, bool CallFunc_Array_IsNotEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "Award");

	Params::ABP_Encounter_ArchetypeDefense_C_Award_Params Parms{};

	Parms.Container_Interface = Container_Interface;
	Parms.Reward_Interface = Reward_Interface;
	Parms.CallFunc_ServerOnly_OnContainerOpenStateChanged_self_CastInput = CallFunc_ServerOnly_OnContainerOpenStateChanged_self_CastInput;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_PopulateChest_self_CastInput = CallFunc_PopulateChest_self_CastInput;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.FailDefenseEncounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::FailDefenseEncounter(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "FailDefenseEncounter");

	Params::ABP_Encounter_ArchetypeDefense_C_FailDefenseEncounter_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.CleanupExtractionActor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::CleanupExtractionActor(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "CleanupExtractionActor");

	Params::ABP_Encounter_ArchetypeDefense_C_CleanupExtractionActor_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.CheckAllNPCsDowned
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAreAllNPCsDowned                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          CurrentNPC                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::CheckAllNPCsDowned(bool* bAreAllNPCsDowned, class ABP_Creature_NPC_C* CurrentNPC, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, class ABP_Creature_NPC_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "CheckAllNPCsDowned");

	Params::ABP_Encounter_ArchetypeDefense_C_CheckAllNPCsDowned_Params Parms{};

	Parms.CurrentNPC = CurrentNPC;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bAreAllNPCsDowned != nullptr)
		*bAreAllNPCsDowned = Parms.bAreAllNPCsDowned;

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.OnNPCDamaged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::OnNPCDamaged(class ABP_CreatureBase_C* Creature, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "OnNPCDamaged");

	Params::ABP_Encounter_ArchetypeDefense_C_OnNPCDamaged_Params Parms{};

	Parms.Creature = Creature;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.SetupNPCBindings
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_Creature_NPC_C*>  NPCsToBind                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::SetupNPCBindings(TArray<class ABP_Creature_NPC_C*>& NPCsToBind, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_Creature_NPC_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "SetupNPCBindings");

	Params::ABP_Encounter_ArchetypeDefense_C_SetupNPCBindings_Params Parms{};

	Parms.NPCsToBind = NPCsToBind;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.SetupNPCLeader
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Creature_NPC_C*          NPC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         EncounterMenuRowHandle                                           (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*PersistedObject                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*CallFunc_GetEncounterPersistedObject_EncounterPersistedObject    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetEncounterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::SetupNPCLeader(class ABP_Creature_NPC_C* NPC, const struct FDataTableRowHandle& EncounterMenuRowHandle, class UEncounterPOIPersistedObject* PersistedObject, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UEncounterPOIPersistedObject* CallFunc_GetEncounterPersistedObject_EncounterPersistedObject, const struct FGuid& CallFunc_GetEncounterID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "SetupNPCLeader");

	Params::ABP_Encounter_ArchetypeDefense_C_SetupNPCLeader_Params Parms{};

	Parms.NPC = NPC;
	Parms.EncounterMenuRowHandle = EncounterMenuRowHandle;
	Parms.PersistedObject = PersistedObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetEncounterPersistedObject_EncounterPersistedObject = CallFunc_GetEncounterPersistedObject_EncounterPersistedObject;
	Parms.CallFunc_GetEncounterID_ReturnValue = CallFunc_GetEncounterID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.InitializeNPCs
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_Creature_NPC_C*>  PersistedNPCs                                                    (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AActor*                      SpawnerLeader                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   SpawnedSpawner                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          PersistedNPC                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Create_NPC_Spawner_Spawner_Actor                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Create_NPC_Spawner_Spawner_Was_Spawned                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          CallFunc_RetrieveNPCsFromPersistence_PersistedNPCLeader          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Creature_NPC_C*>  CallFunc_RetrieveNPCsFromPersistence_AdditionalPersistedNPCs     (ReferenceParm)

void ABP_Encounter_ArchetypeDefense_C::InitializeNPCs(const TArray<class ABP_Creature_NPC_C*>& PersistedNPCs, class AActor* SpawnerLeader, class ABP_CreatureSpawnerBase_C* SpawnedSpawner, class ABP_Creature_NPC_C* PersistedNPC, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_CreatureSpawnerBase_C* CallFunc_Create_NPC_Spawner_Spawner_Actor, bool CallFunc_Create_NPC_Spawner_Spawner_Was_Spawned, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABP_Creature_NPC_C* CallFunc_RetrieveNPCsFromPersistence_PersistedNPCLeader, TArray<class ABP_Creature_NPC_C*>& CallFunc_RetrieveNPCsFromPersistence_AdditionalPersistedNPCs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "InitializeNPCs");

	Params::ABP_Encounter_ArchetypeDefense_C_InitializeNPCs_Params Parms{};

	Parms.PersistedNPCs = PersistedNPCs;
	Parms.SpawnerLeader = SpawnerLeader;
	Parms.SpawnedSpawner = SpawnedSpawner;
	Parms.PersistedNPC = PersistedNPC;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_NPC_Spawner_Spawner_Actor = CallFunc_Create_NPC_Spawner_Spawner_Actor;
	Parms.CallFunc_Create_NPC_Spawner_Spawner_Was_Spawned = CallFunc_Create_NPC_Spawner_Spawner_Was_Spawned;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_RetrieveNPCsFromPersistence_PersistedNPCLeader = CallFunc_RetrieveNPCsFromPersistence_PersistedNPCLeader;
	Parms.CallFunc_RetrieveNPCsFromPersistence_AdditionalPersistedNPCs = CallFunc_RetrieveNPCsFromPersistence_AdditionalPersistedNPCs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.TryStartEncounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IStructureStateInterface>CallFunc_GetSchematicState_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetStructureWorldTransform_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::TryStartEncounter(TScriptInterface<class IStructureStateInterface> CallFunc_GetSchematicState_self_CastInput, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTransform& CallFunc_GetStructureWorldTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "TryStartEncounter");

	Params::ABP_Encounter_ArchetypeDefense_C_TryStartEncounter_Params Parms{};

	Parms.CallFunc_GetSchematicState_self_CastInput = CallFunc_GetSchematicState_self_CastInput;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetStructureWorldTransform_ReturnValue = CallFunc_GetStructureWorldTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.SpawnRewardStructure
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Human_Reward_Chest_Transform                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Defense*EncounterMarkupDataAssetDefense                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  HECU_Transform                                                   (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterDataAsset*         CallFunc_GetEncounterData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureSpawnContext      K2Node_MakeStruct_StructureSpawnContext                          (NoDestructor)
// class UObject*                     CallFunc_SpawnStructure_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Functional_Container_Instanced_C*K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Defense*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Spawner_Waves_Current_Wave                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Spawner_Waves_Total_Waves                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureEncounterArenaSpawnContextK2Node_MakeStruct_StructureEncounterArenaSpawnContext            (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureSpawnContext      K2Node_MakeStruct_StructureSpawnContext_1                        (NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag                   (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDynamicActorAtLocation_Actor                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDynamicActorAtLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureEncounterSpawnContextK2Node_MakeStruct_StructureEncounterSpawnContext                 (NoDestructor)
// class ABP_Structure_Functional_Container_Instanced_C*K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_SpawnEncounterStructure_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_ArenaContainer_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDynamicActorAtLocation_Actor_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDynamicActorAtLocation_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_ArenaContainer_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::SpawnRewardStructure(const struct FTransform& Human_Reward_Chest_Transform, class UEncounterMarkupDataAsset_Defense* EncounterMarkupDataAssetDefense, const struct FTransform& HECU_Transform, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, class UObject* CallFunc_SpawnStructure_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class ABP_Structure_Functional_Container_Instanced_C* K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Defense* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Get_Spawner_Waves_Current_Wave, int32 CallFunc_Get_Spawner_Waves_Total_Waves, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FStructureEncounterArenaSpawnContext& K2Node_MakeStruct_StructureEncounterArenaSpawnContext, bool CallFunc_IsValid_ReturnValue_3, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FGameplayTag& CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, const struct FStructureEncounterSpawnContext& K2Node_MakeStruct_StructureEncounterSpawnContext, class ABP_Structure_Functional_Container_Instanced_C* K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced_1, bool K2Node_DynamicCast_bSuccess_3, class UObject* CallFunc_SpawnEncounterStructure_ReturnValue, class ABP_Structure_EncounterTrigger_ArenaContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container, bool K2Node_DynamicCast_bSuccess_4, class AActor* CallFunc_GetDynamicActorAtLocation_Actor_1, bool CallFunc_GetDynamicActorAtLocation_ReturnValue_1, class ABP_Structure_EncounterTrigger_ArenaContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container_1, bool K2Node_DynamicCast_bSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "SpawnRewardStructure");

	Params::ABP_Encounter_ArchetypeDefense_C_SpawnRewardStructure_Params Parms{};

	Parms.Human_Reward_Chest_Transform = Human_Reward_Chest_Transform;
	Parms.EncounterMarkupDataAssetDefense = EncounterMarkupDataAssetDefense;
	Parms.HECU_Transform = HECU_Transform;
	Parms.CallFunc_GetEncounterData_ReturnValue = CallFunc_GetEncounterData_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_MakeStruct_StructureSpawnContext = K2Node_MakeStruct_StructureSpawnContext;
	Parms.CallFunc_SpawnStructure_ReturnValue = CallFunc_SpawnStructure_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced = K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTargetActor_ReturnValue_1 = CallFunc_GetTargetActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Get_Spawner_Waves_Current_Wave = CallFunc_Get_Spawner_Waves_Current_Wave;
	Parms.CallFunc_Get_Spawner_Waves_Total_Waves = CallFunc_Get_Spawner_Waves_Total_Waves;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.K2Node_MakeStruct_StructureEncounterArenaSpawnContext = K2Node_MakeStruct_StructureEncounterArenaSpawnContext;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_MakeStruct_StructureSpawnContext_1 = K2Node_MakeStruct_StructureSpawnContext_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag = CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag;
	Parms.CallFunc_GetDynamicActorAtLocation_Actor = CallFunc_GetDynamicActorAtLocation_Actor;
	Parms.CallFunc_GetDynamicActorAtLocation_ReturnValue = CallFunc_GetDynamicActorAtLocation_ReturnValue;
	Parms.K2Node_MakeStruct_StructureEncounterSpawnContext = K2Node_MakeStruct_StructureEncounterSpawnContext;
	Parms.K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced_1 = K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_SpawnEncounterStructure_ReturnValue = CallFunc_SpawnEncounterStructure_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetDynamicActorAtLocation_Actor_1 = CallFunc_GetDynamicActorAtLocation_Actor_1;
	Parms.CallFunc_GetDynamicActorAtLocation_ReturnValue_1 = CallFunc_GetDynamicActorAtLocation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container_1 = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.GetNPCLeader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Creature_NPC_C*          NPCLeader                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::GetNPCLeader(class ABP_Creature_NPC_C** NPCLeader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "GetNPCLeader");

	Params::ABP_Encounter_ArchetypeDefense_C_GetNPCLeader_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NPCLeader != nullptr)
		*NPCLeader = Parms.NPCLeader;

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.AddAdditionalNPCsToPersistence
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             CurrentCreature                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EncounterLocation                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*PersistedObject                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ANWXAICharacter*>     CallFunc_GetSpawnedAICharacters_ReturnValue                      (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*CallFunc_GetEncounterPersistedObject_EncounterPersistedObject    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::AddAdditionalNPCsToPersistence(class ABP_CreatureSpawnerBase_C* Spawner, class ANWXAICharacter* CurrentCreature, const struct FVector& EncounterLocation, class UEncounterPOIPersistedObject* PersistedObject, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class ANWXAICharacter*>& CallFunc_GetSpawnedAICharacters_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ANWXAICharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UEncounterPOIPersistedObject* CallFunc_GetEncounterPersistedObject_EncounterPersistedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "AddAdditionalNPCsToPersistence");

	Params::ABP_Encounter_ArchetypeDefense_C_AddAdditionalNPCsToPersistence_Params Parms{};

	Parms.Spawner = Spawner;
	Parms.CurrentCreature = CurrentCreature;
	Parms.EncounterLocation = EncounterLocation;
	Parms.PersistedObject = PersistedObject;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSpawnedAICharacters_ReturnValue = CallFunc_GetSpawnedAICharacters_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEncounterPersistedObject_EncounterPersistedObject = CallFunc_GetEncounterPersistedObject_EncounterPersistedObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.RetrieveNPCsFromPersistence
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Creature_NPC_C*          PersistedNPCLeader                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Creature_NPC_C*>  AdditionalPersistedNPCs                                          (Parm, OutParm)
// class AActor*                      CurrentAdditionalActor                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              PersistedAdditionalActors                                        (Edit, BlueprintVisible, DisableEditOnTemplate)
// class ABP_Creature_NPC_C*          PersistedLeader                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Creature_NPC_C*>  AdditionalNPCs                                                   (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AActor*                      PersistedActor                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*PersistedObject                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAdditionalNPC_AdditionalNPCs                         (ReferenceParm)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetLeaderNPC_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*CallFunc_GetEncounterPersistedObject_EncounterPersistedObject    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::RetrieveNPCsFromPersistence(class ABP_Creature_NPC_C** PersistedNPCLeader, TArray<class ABP_Creature_NPC_C*>* AdditionalPersistedNPCs, class AActor* CurrentAdditionalActor, const TArray<class AActor*>& PersistedAdditionalActors, class ABP_Creature_NPC_C* PersistedLeader, const TArray<class ABP_Creature_NPC_C*>& AdditionalNPCs, class AActor* PersistedActor, class UEncounterPOIPersistedObject* PersistedObject, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_GetAdditionalNPC_AdditionalNPCs, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_GetLeaderNPC_ReturnValue, class UEncounterPOIPersistedObject* CallFunc_GetEncounterPersistedObject_EncounterPersistedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "RetrieveNPCsFromPersistence");

	Params::ABP_Encounter_ArchetypeDefense_C_RetrieveNPCsFromPersistence_Params Parms{};

	Parms.CurrentAdditionalActor = CurrentAdditionalActor;
	Parms.PersistedAdditionalActors = PersistedAdditionalActors;
	Parms.PersistedLeader = PersistedLeader;
	Parms.AdditionalNPCs = AdditionalNPCs;
	Parms.PersistedActor = PersistedActor;
	Parms.PersistedObject = PersistedObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetAdditionalNPC_AdditionalNPCs = CallFunc_GetAdditionalNPC_AdditionalNPCs;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC_1 = K2Node_DynamicCast_AsBP_Creature_NPC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetLeaderNPC_ReturnValue = CallFunc_GetLeaderNPC_ReturnValue;
	Parms.CallFunc_GetEncounterPersistedObject_EncounterPersistedObject = CallFunc_GetEncounterPersistedObject_EncounterPersistedObject;

	UObject::ProcessEvent(Func, &Parms);

	if (PersistedNPCLeader != nullptr)
		*PersistedNPCLeader = Parms.PersistedNPCLeader;

	if (AdditionalPersistedNPCs != nullptr)
		*AdditionalPersistedNPCs = std::move(Parms.AdditionalPersistedNPCs);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.Start
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::Start(bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "Start");

	Params::ABP_Encounter_ArchetypeDefense_C_Start_Params Parms{};

	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.CollectDebuggerInformation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// int32                              CallFunc_Get_Total_Creature_Count_Creature_Count                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureHealthInterface>CallFunc_GetMaxHealth_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int32                              CallFunc_Get_Spawner_Waves_Current_Wave                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Spawner_Waves_Total_Waves                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TScriptInterface<class IStructureHealthInterface>CallFunc_GetCurrentHealth_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHealth_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString ABP_Encounter_ArchetypeDefense_C::CollectDebuggerInformation(int32 CallFunc_Get_Total_Creature_Count_Creature_Count, TScriptInterface<class IStructureHealthInterface> CallFunc_GetMaxHealth_self_CastInput, float CallFunc_GetMaxHealth_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Get_Spawner_Waves_Current_Wave, int32 CallFunc_Get_Spawner_Waves_Total_Waves, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, int64 CallFunc_Conv_IntToInt64_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TScriptInterface<class IStructureHealthInterface> CallFunc_GetCurrentHealth_self_CastInput, float CallFunc_GetCurrentHealth_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "CollectDebuggerInformation");

	Params::ABP_Encounter_ArchetypeDefense_C_CollectDebuggerInformation_Params Parms{};

	Parms.CallFunc_Get_Total_Creature_Count_Creature_Count = CallFunc_Get_Total_Creature_Count_Creature_Count;
	Parms.CallFunc_GetMaxHealth_self_CastInput = CallFunc_GetMaxHealth_self_CastInput;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Get_Spawner_Waves_Current_Wave = CallFunc_Get_Spawner_Waves_Current_Wave;
	Parms.CallFunc_Get_Spawner_Waves_Total_Waves = CallFunc_Get_Spawner_Waves_Total_Waves;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_2 = CallFunc_Conv_IntToInt64_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_3 = CallFunc_Conv_IntToInt64_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_GetCurrentHealth_self_CastInput = CallFunc_GetCurrentHealth_self_CastInput;
	Parms.CallFunc_GetCurrentHealth_ReturnValue = CallFunc_GetCurrentHealth_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.RespawnExtractionActor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXStructurePartProxyActor* ExtractionProxy                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               ProxyStructure                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterStructBuilderInterface>Builder                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureOriginatorInterface>CallFunc_SetStructureOriginatorType_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActorBeingDestroyed_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Defense*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterStructBuilderInterface>CallFunc_GetEncounterStructBuilderInterface_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::RespawnExtractionActor(class ANWXStructurePartProxyActor* ExtractionProxy, class ANWXStructure* ProxyStructure, TScriptInterface<class IEncounterStructBuilderInterface> Builder, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXStructure* CallFunc_GetStructure_Structure, TScriptInterface<class IStructureOriginatorInterface> CallFunc_SetStructureOriginatorType_self_CastInput, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsActorBeingDestroyed_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UEncounterMarkupDataAsset_Defense* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3, class ANWXStructure* CallFunc_GetStructure_Structure_1, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_2, TScriptInterface<class IEncounterStructBuilderInterface> CallFunc_GetEncounterStructBuilderInterface_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "RespawnExtractionActor");

	Params::ABP_Encounter_ArchetypeDefense_C_RespawnExtractionActor_Params Parms{};

	Parms.ExtractionProxy = ExtractionProxy;
	Parms.ProxyStructure = ProxyStructure;
	Parms.Builder = Builder;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStructure_Structure = CallFunc_GetStructure_Structure;
	Parms.CallFunc_SetStructureOriginatorType_self_CastInput = CallFunc_SetStructureOriginatorType_self_CastInput;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsActorBeingDestroyed_ReturnValue = CallFunc_IsActorBeingDestroyed_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue_1 = CallFunc_GetTargetActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetStructure_Structure_1 = CallFunc_GetStructure_Structure_1;
	Parms.CallFunc_GetTargetActor_ReturnValue_2 = CallFunc_GetTargetActor_ReturnValue_2;
	Parms.CallFunc_GetEncounterStructBuilderInterface_ReturnValue = CallFunc_GetEncounterStructBuilderInterface_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.CleanupEncounter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::CleanupEncounter(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "CleanupEncounter");

	Params::ABP_Encounter_ArchetypeDefense_C_CleanupEncounter_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.OnNPCSpawn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      NewLeader                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*PersistedObject                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISquadMemberNativeInterface>CallFunc_GetLeaderActor_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetLeaderActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::OnNPCSpawn(class ABP_CreatureBase_C* Creature, class AActor* NewLeader, class UEncounterPOIPersistedObject* PersistedObject, TScriptInterface<class ISquadMemberNativeInterface> CallFunc_GetLeaderActor_self_CastInput, class AActor* CallFunc_GetLeaderActor_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "OnNPCSpawn");

	Params::ABP_Encounter_ArchetypeDefense_C_OnNPCSpawn_Params Parms{};

	Parms.Creature = Creature;
	Parms.NewLeader = NewLeader;
	Parms.PersistedObject = PersistedObject;
	Parms.CallFunc_GetLeaderActor_self_CastInput = CallFunc_GetLeaderActor_self_CastInput;
	Parms.CallFunc_GetLeaderActor_ReturnValue = CallFunc_GetLeaderActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.Wave Defeated
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Spawner_Waves_Current_Wave                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Spawner_Waves_Total_Waves                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::Wave_Defeated(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Get_Spawner_Waves_Current_Wave, int32 CallFunc_Get_Spawner_Waves_Total_Waves, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "Wave Defeated");

	Params::ABP_Encounter_ArchetypeDefense_C_Wave_Defeated_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Get_Spawner_Waves_Current_Wave = CallFunc_Get_Spawner_Waves_Current_Wave;
	Parms.CallFunc_Get_Spawner_Waves_Total_Waves = CallFunc_Get_Spawner_Waves_Total_Waves;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.Spawn Wave
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Get_Spawner_Waves_Current_Wave                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Spawner_Waves_Total_Waves                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Spawner_Waves_Current_Wave_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Spawner_Waves_Total_Waves_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Manually_Spawn_Wave_Spawner_Actor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::Spawn_Wave(int32 CallFunc_Get_Spawner_Waves_Current_Wave, int32 CallFunc_Get_Spawner_Waves_Total_Waves, int32 CallFunc_Get_Spawner_Waves_Current_Wave_1, int32 CallFunc_Get_Spawner_Waves_Total_Waves_1, class ABP_CreatureSpawnerBase_C* CallFunc_Manually_Spawn_Wave_Spawner_Actor, bool CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "Spawn Wave");

	Params::ABP_Encounter_ArchetypeDefense_C_Spawn_Wave_Params Parms{};

	Parms.CallFunc_Get_Spawner_Waves_Current_Wave = CallFunc_Get_Spawner_Waves_Current_Wave;
	Parms.CallFunc_Get_Spawner_Waves_Total_Waves = CallFunc_Get_Spawner_Waves_Total_Waves;
	Parms.CallFunc_Get_Spawner_Waves_Current_Wave_1 = CallFunc_Get_Spawner_Waves_Current_Wave_1;
	Parms.CallFunc_Get_Spawner_Waves_Total_Waves_1 = CallFunc_Get_Spawner_Waves_Total_Waves_1;
	Parms.CallFunc_Manually_Spawn_Wave_Spawner_Actor = CallFunc_Manually_Spawn_Wave_Spawner_Actor;
	Parms.CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned = CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.CheckFailureConditions
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StructureFailure                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NPCFailure                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureValidForUse_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckAllNPCsDowned_bAreAllNPCsDowned                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::CheckFailureConditions(bool StructureFailure, bool NPCFailure, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsStructureValidForUse_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_CheckAllNPCsDowned_bAreAllNPCsDowned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "CheckFailureConditions");

	Params::ABP_Encounter_ArchetypeDefense_C_CheckFailureConditions_Params Parms{};

	Parms.StructureFailure = StructureFailure;
	Parms.NPCFailure = NPCFailure;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsStructureValidForUse_ReturnValue = CallFunc_IsStructureValidForUse_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_CheckAllNPCsDowned_bAreAllNPCsDowned = CallFunc_CheckAllNPCsDowned_bAreAllNPCsDowned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.RetrieveDataFromDataAsset
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEncounterArchetypeDataAssetDefense*DefenseAsset                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterDataAsset*         CallFunc_GetEncounterData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterArchetypeDataAssetDefense*K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Defense      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_BetweenWaveLullTime_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::RetrieveDataFromDataAsset(class UEncounterArchetypeDataAssetDefense* DefenseAsset, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, class UEncounterArchetypeDataAssetDefense* K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Defense, bool K2Node_DynamicCast_bSuccess, double K2Node_VariableSet_BetweenWaveLullTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "RetrieveDataFromDataAsset");

	Params::ABP_Encounter_ArchetypeDefense_C_RetrieveDataFromDataAsset_Params Parms{};

	Parms.DefenseAsset = DefenseAsset;
	Parms.CallFunc_GetEncounterData_ReturnValue = CallFunc_GetEncounterData_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Defense = K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Defense;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_VariableSet_BetweenWaveLullTime_ImplicitCast = K2Node_VariableSet_BetweenWaveLullTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.OnStructureDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MarkupObject                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               Structure                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::OnStructureDestroyed(class AActor* DestroyedActor, class UObject* MarkupObject, class ANWXStructure* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "OnStructureDestroyed");

	Params::ABP_Encounter_ArchetypeDefense_C_OnStructureDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;
	Parms.MarkupObject = MarkupObject;
	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.SucceedDefenseEncounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::SucceedDefenseEncounter(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "SucceedDefenseEncounter");

	Params::ABP_Encounter_ArchetypeDefense_C_SucceedDefenseEncounter_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.Finish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterConfig*            OverridePOITarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Spawning_Inactive_Spawning_Deactivated              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::Finish(class AEncounterConfig* OverridePOITarget, bool CallFunc_Set_Spawning_Inactive_Spawning_Deactivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "Finish");

	Params::ABP_Encounter_ArchetypeDefense_C_Finish_Params Parms{};

	Parms.OverridePOITarget = OverridePOITarget;
	Parms.CallFunc_Set_Spawning_Inactive_Spawning_Deactivated = CallFunc_Set_Spawning_Inactive_Spawning_Deactivated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.Initialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Spawner_Waves_Current_Wave                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Spawner_Waves_Total_Waves                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Defense*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_Defense_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::Initialize(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Get_Spawner_Waves_Current_Wave, int32 CallFunc_Get_Spawner_Waves_Total_Waves, bool CallFunc_Greater_IntInt_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Defense* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class ANWXStructure* CallFunc_GetStructure_Structure, bool CallFunc_IsValid_ReturnValue_3, class ABP_Structure_EncounterTrigger_Defense_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "Initialize");

	Params::ABP_Encounter_ArchetypeDefense_C_Initialize_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Spawner_Waves_Current_Wave = CallFunc_Get_Spawner_Waves_Current_Wave;
	Parms.CallFunc_Get_Spawner_Waves_Total_Waves = CallFunc_Get_Spawner_Waves_Total_Waves;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetStructure_Structure = CallFunc_GetStructure_Structure;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.BeginEncounter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypeDefense_C::BeginEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "BeginEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.EncounterNPCInteraction
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypeDefense_C::EncounterNPCInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "EncounterNPCInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypeDefense.BP_Encounter_ArchetypeDefense_C.ExecuteUbergraph_BP_Encounter_ArchetypeDefense
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeDefense_C::ExecuteUbergraph_BP_Encounter_ArchetypeDefense(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeDefense_C", "ExecuteUbergraph_BP_Encounter_ArchetypeDefense");

	Params::ABP_Encounter_ArchetypeDefense_C_ExecuteUbergraph_BP_Encounter_ArchetypeDefense_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


