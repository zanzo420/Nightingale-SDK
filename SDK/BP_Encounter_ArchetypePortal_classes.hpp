#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x490 - 0x448)
// BlueprintGeneratedClass BP_Encounter_ArchetypePortal.BP_Encounter_ArchetypePortal_C
class ABP_Encounter_ArchetypePortal_C : public AEncounterBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_EncounterComponent_Spawners_C*     BP_EncounterComponent_Spawners;                    // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bPortalOpen;                                       // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Creature_Spawn_Delay;                              // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CreatureSpawnerBase_C*>     CreatureSpawners;                                  // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        CompletedWaves;                                    // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADeploymentPortal*                     Deployment_Portal;                                 // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class ETemporalPortalState              Temporal_State;                                    // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Max_Completed_Waves;                               // 0x48C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Encounter_ArchetypePortal_C* GetDefaultObj();

	class FString CollectDebuggerInformation(int32 TotalCreatures, int32 TotalActiveCreatures, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, class FText CallFunc_Format_ReturnValue, int32 CallFunc_GetTotalCreatures_CreatureCount, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetNumberOfCreaturesSpawned_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue);
	void Spawn_Creatures(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Manually_Spawn_Wave_Spawner_Actor, bool CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class APawn*>& CallFunc_GetPlayersInRange_Players, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnNoRemainingCreatures(class ABP_CreatureSpawnerBase_C* Spawner, int32 Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void Portal_Machine_State_Change(enum class ETemporalPortalState Temporal_Portal_State, class ADeploymentPortal* DeploymentPortal, bool K2Node_SwitchEnum_CmpSuccess);
	void Initialize(class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, class UEncounterArchetypeDataAssetPortal* K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Portal, bool K2Node_DynamicCast_bSuccess_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Portal* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Portal, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_VariableSet_Creature_Spawn_Delay_ImplicitCast);
	void BeginEncounter();
	void Start();
	void ExecuteUbergraph_BP_Encounter_ArchetypePortal(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


