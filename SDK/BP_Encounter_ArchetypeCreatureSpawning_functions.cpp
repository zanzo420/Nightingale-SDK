#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Encounter_ArchetypeCreatureSpawning.BP_Encounter_ArchetypeCreatureSpawning_C
// (Actor)

class UClass* ABP_Encounter_ArchetypeCreatureSpawning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Encounter_ArchetypeCreatureSpawning_C");

	return Clss;
}


// BP_Encounter_ArchetypeCreatureSpawning_C BP_Encounter_ArchetypeCreatureSpawning.Default__BP_Encounter_ArchetypeCreatureSpawning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Encounter_ArchetypeCreatureSpawning_C* ABP_Encounter_ArchetypeCreatureSpawning_C::GetDefaultObj()
{
	static class ABP_Encounter_ArchetypeCreatureSpawning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Encounter_ArchetypeCreatureSpawning_C*>(ABP_Encounter_ArchetypeCreatureSpawning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Encounter_ArchetypeCreatureSpawning.BP_Encounter_ArchetypeCreatureSpawning_C.GetSquadDespawnRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             SquadDespawnRange                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeCreatureSpawning_C::GetSquadDespawnRange(double* SquadDespawnRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeCreatureSpawning_C", "GetSquadDespawnRange");

	Params::ABP_Encounter_ArchetypeCreatureSpawning_C_GetSquadDespawnRange_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SquadDespawnRange != nullptr)
		*SquadDespawnRange = Parms.SquadDespawnRange;

}


// Function BP_Encounter_ArchetypeCreatureSpawning.BP_Encounter_ArchetypeCreatureSpawning_C.Start
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Manually_Spawn_Wave_Spawner_Actor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeCreatureSpawning_C::Start(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_CreatureSpawnerBase_C* CallFunc_Manually_Spawn_Wave_Spawner_Actor, bool CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeCreatureSpawning_C", "Start");

	Params::ABP_Encounter_ArchetypeCreatureSpawning_C_Start_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Manually_Spawn_Wave_Spawner_Actor = CallFunc_Manually_Spawn_Wave_Spawner_Actor;
	Parms.CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned = CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeCreatureSpawning.BP_Encounter_ArchetypeCreatureSpawning_C.CollectDebuggerInformation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfCreaturesSpawned_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalCreatures_CreatureCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString ABP_Encounter_ArchetypeCreatureSpawning_C::CollectDebuggerInformation(int32 CallFunc_GetNumberOfCreaturesSpawned_ReturnValue, int32 CallFunc_GetTotalCreatures_CreatureCount, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeCreatureSpawning_C", "CollectDebuggerInformation");

	Params::ABP_Encounter_ArchetypeCreatureSpawning_C_CollectDebuggerInformation_Params Parms{};

	Parms.CallFunc_GetNumberOfCreaturesSpawned_ReturnValue = CallFunc_GetNumberOfCreaturesSpawned_ReturnValue;
	Parms.CallFunc_GetTotalCreatures_CreatureCount = CallFunc_GetTotalCreatures_CreatureCount;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Encounter_ArchetypeCreatureSpawning.BP_Encounter_ArchetypeCreatureSpawning_C.Finish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterConfig*            OverridePOITarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDynamicSpawningManagerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeCreatureSpawning_C::Finish(class AEncounterConfig* OverridePOITarget, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager, class UDynamicSpawningManagerComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeCreatureSpawning_C", "Finish");

	Params::ABP_Encounter_ArchetypeCreatureSpawning_C_Finish_Params Parms{};

	Parms.OverridePOITarget = OverridePOITarget;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_GetCreatureManager_CreatureManager = CallFunc_GetCreatureManager_CreatureManager;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeCreatureSpawning.BP_Encounter_ArchetypeCreatureSpawning_C.Initialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEncounterDataAsset*         CallFunc_GetEncounterData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterArchetypeDataAssetDynamicSpawning*K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Dynamic_Spawning(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeCreatureSpawning_C::Initialize(class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, class UEncounterArchetypeDataAssetDynamicSpawning* K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Dynamic_Spawning, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeCreatureSpawning_C", "Initialize");

	Params::ABP_Encounter_ArchetypeCreatureSpawning_C_Initialize_Params Parms{};

	Parms.CallFunc_GetEncounterData_ReturnValue = CallFunc_GetEncounterData_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Dynamic_Spawning = K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Dynamic_Spawning;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeCreatureSpawning.BP_Encounter_ArchetypeCreatureSpawning_C.SpawnerDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   K2Node_DynamicCast_AsBP_Creature_Spawner_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeCreatureSpawning_C::SpawnerDestroyed(class AActor* DestroyedActor, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeCreatureSpawning_C", "SpawnerDestroyed");

	Params::ABP_Encounter_ArchetypeCreatureSpawning_C_SpawnerDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;
	Parms.K2Node_DynamicCast_AsBP_Creature_Spawner_Base = K2Node_DynamicCast_AsBP_Creature_Spawner_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeCreatureSpawning.BP_Encounter_ArchetypeCreatureSpawning_C.CleanupEncounter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypeCreatureSpawning_C::CleanupEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeCreatureSpawning_C", "CleanupEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypeCreatureSpawning.BP_Encounter_ArchetypeCreatureSpawning_C.RefreshEncounter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LAnyPlayerInRange                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumberOfPlayersInRadius_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyPlayerWithinRangeOfSquad_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NumberOfPlayersInRadius_Radius_ImplicitCast             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsAnyPlayerWithinRangeOfSquad_Range_ImplicitCast        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeCreatureSpawning_C::RefreshEncounter(bool LAnyPlayerInRange, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_NumberOfPlayersInRadius_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsAnyPlayerWithinRangeOfSquad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_NumberOfPlayersInRadius_Radius_ImplicitCast, float CallFunc_IsAnyPlayerWithinRangeOfSquad_Range_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeCreatureSpawning_C", "RefreshEncounter");

	Params::ABP_Encounter_ArchetypeCreatureSpawning_C_RefreshEncounter_Params Parms{};

	Parms.LAnyPlayerInRange = LAnyPlayerInRange;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_NumberOfPlayersInRadius_ReturnValue = CallFunc_NumberOfPlayersInRadius_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsAnyPlayerWithinRangeOfSquad_ReturnValue = CallFunc_IsAnyPlayerWithinRangeOfSquad_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NumberOfPlayersInRadius_Radius_ImplicitCast = CallFunc_NumberOfPlayersInRadius_Radius_ImplicitCast;
	Parms.CallFunc_IsAnyPlayerWithinRangeOfSquad_Range_ImplicitCast = CallFunc_IsAnyPlayerWithinRangeOfSquad_Range_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeCreatureSpawning.BP_Encounter_ArchetypeCreatureSpawning_C.BeginEncounter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypeCreatureSpawning_C::BeginEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeCreatureSpawning_C", "BeginEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypeCreatureSpawning.BP_Encounter_ArchetypeCreatureSpawning_C.ExecuteUbergraph_BP_Encounter_ArchetypeCreatureSpawning
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Spawning_Inactive_Spawning_Deactivated              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeCreatureSpawning_C::ExecuteUbergraph_BP_Encounter_ArchetypeCreatureSpawning(int32 EntryPoint, bool CallFunc_Set_Spawning_Inactive_Spawning_Deactivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeCreatureSpawning_C", "ExecuteUbergraph_BP_Encounter_ArchetypeCreatureSpawning");

	Params::ABP_Encounter_ArchetypeCreatureSpawning_C_ExecuteUbergraph_BP_Encounter_ArchetypeCreatureSpawning_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Set_Spawning_Inactive_Spawning_Deactivated = CallFunc_Set_Spawning_Inactive_Spawning_Deactivated;

	UObject::ProcessEvent(Func, &Parms);

}

}


