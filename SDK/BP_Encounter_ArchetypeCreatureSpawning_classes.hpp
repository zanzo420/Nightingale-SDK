#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x470 - 0x448)
// BlueprintGeneratedClass BP_Encounter_ArchetypeCreatureSpawning.BP_Encounter_ArchetypeCreatureSpawning_C
class ABP_Encounter_ArchetypeCreatureSpawning_C : public AEncounterBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_EncounterComponent_Spawners_C*     BP_EncounterComponent_Spawners;                    // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             CreatureSpawner;                                   // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         EncounterFinishedByPlayer;                         // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SquadDespawnRange;                                 // 0x468(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Encounter_ArchetypeCreatureSpawning_C* GetDefaultObj();

	void GetSquadDespawnRange(double* SquadDespawnRange);
	void Start(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_CreatureSpawnerBase_C* CallFunc_Manually_Spawn_Wave_Spawner_Actor, bool CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned);
	class FString CollectDebuggerInformation(int32 CallFunc_GetNumberOfCreaturesSpawned_ReturnValue, int32 CallFunc_GetTotalCreatures_CreatureCount, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void Finish(class AEncounterConfig* OverridePOITarget, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager, class UDynamicSpawningManagerComponent* CallFunc_GetComponentByClass_ReturnValue);
	void Initialize(class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, class UEncounterArchetypeDataAssetDynamicSpawning* K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Dynamic_Spawning, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue);
	void SpawnerDestroyed(class AActor* DestroyedActor, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess);
	void CleanupEncounter();
	void RefreshEncounter(bool LAnyPlayerInRange, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_NumberOfPlayersInRadius_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsAnyPlayerWithinRangeOfSquad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_NumberOfPlayersInRadius_Radius_ImplicitCast, float CallFunc_IsAnyPlayerWithinRangeOfSquad_Range_ImplicitCast);
	void BeginEncounter();
	void ExecuteUbergraph_BP_Encounter_ArchetypeCreatureSpawning(int32 EntryPoint, bool CallFunc_Set_Spawning_Inactive_Spawning_Deactivated);
};

}


