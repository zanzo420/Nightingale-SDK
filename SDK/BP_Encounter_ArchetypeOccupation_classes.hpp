#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x48C - 0x448)
// BlueprintGeneratedClass BP_Encounter_ArchetypeOccupation.BP_Encounter_ArchetypeOccupation_C
class ABP_Encounter_ArchetypeOccupation_C : public AEncounterBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_EncounterComponent_Spawners_C*     BP_EncounterComponent_Spawners;                    // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             Creature_Spawner;                                  // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Encounter_Active_Range;                            // 0x460(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Spawn_Points;                                      // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Out_of_Range_Failure_Time;                         // 0x478(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Failure_Timer;                                     // 0x480(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Completed_Spawners;                                // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Encounter_ArchetypeOccupation_C* GetDefaultObj();

	void SpawnRewardStructure(class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* Reward_Pylon, const struct FTransform& Reward_Transform, const struct FStructureAssetReference& Reward_Pylon_SDA, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Occupation* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Occupation, bool K2Node_DynamicCast_bSuccess_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FGameplayTag& CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag, const struct FStructureEncounterSpawnContext& K2Node_MakeStruct_StructureEncounterSpawnContext, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, class UObject* CallFunc_SpawnEncounterStructure_ReturnValue, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container_1, bool K2Node_DynamicCast_bSuccess_3);
	void GetEncounterActiveRange(double* ActiveRange, double K2Node_FunctionResult_ActiveRange_ImplicitCast);
	void IsFailureTimerRunning(bool* bIsRunning, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue);
	void Wave_Defeated(bool CallFunc_Set_Spawning_Inactive_Spawning_Deactivated, int32 CallFunc_Get_Spawner_Waves_Current_Wave, int32 CallFunc_Get_Spawner_Waves_Total_Waves, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Spawn_Creatures(int32 CallFunc_Get_Spawner_Waves_Current_Wave, int32 CallFunc_Get_Spawner_Waves_Total_Waves, class ABP_CreatureSpawnerBase_C* CallFunc_Manually_Spawn_Wave_Spawner_Actor, bool CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned);
	class FString CollectDebuggerInformation(int32 Total_Creatures_Spawned, int32 Total_Creature_Count, int32 CallFunc_GetNumberOfCreaturesSpawned_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetTotalCreatures_CreatureCount, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void Initialize();
	void BeginEncounter();
	void Fail(class AEncounterConfig* OverridePOITarget);
	void RefreshEncounter();
	void Start();
	void CleanupEncounter();
	void Handle_Timeout();
	void ExecuteUbergraph_BP_Encounter_ArchetypeOccupation(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsAnyPlayerInRadius_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AEncounterConfig* K2Node_Event_OverridePOITarget, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


