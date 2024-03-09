#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x168 (0x5B0 - 0x448)
// BlueprintGeneratedClass BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C
class ABP_Encounter_ArchetypeArena_C : public AEncounterBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_EncounterComponent_Spawners_C*     BP_EncounterComponent_Spawners;                    // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         CollapseVictory;                                   // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ArenaStarted;                                      // 0x459(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4513[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_EncounterTrigger_Button_C* EncounterTrigger;                                  // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Time_Out_Length;                                   // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4514[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Wave_Timer_Handle;                                 // 0x470(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Time_Before_Next_Wave;                             // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4515[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timeout_Handle;                                    // 0x480(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_EncounterTrigger_ArenaContainer_C* Hope_Containment_Structure;                        // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyedStructure;                                // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4519[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNextWaveIsSpawnReady;                            // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        Minimum_Arena_Bounds_Radius;                       // 0x4A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Arena_Bounds_Radius;                               // 0x4AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructureAssetReference              HECU_SDA;                                          // 0x4B0(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStructureAssetReference              Arena_Button_SDA;                                  // 0x530(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Encounter_ArchetypeArena_C* GetDefaultObj();

	void GetWaveTimerHandle(struct FTimerHandle* Wave_Timer_Handle);
	void GetTimeoutHandle(struct FTimerHandle* Timeout_Handle);
	void Reset_Platforms_and_Award();
	void GetArenaButtonSDA(struct FStructureAssetReference* Arena_Button_SDA);
	void GetRewardStructureSDA(struct FStructureAssetReference* HECU_SDA);
	void SpawnRewardStructure(const struct FTransform& HECU_Transform, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Arena* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Arena, bool K2Node_DynamicCast_bSuccess_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_Get_Spawner_Waves_Current_Wave, int32 CallFunc_Get_Spawner_Waves_Total_Waves, const struct FStructureEncounterArenaSpawnContext& K2Node_MakeStruct_StructureEncounterArenaSpawnContext, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UEncounterArchetypeDataAssetArena* K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Arena, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayTag& CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag, const struct FStructureEncounterSpawnContext& K2Node_MakeStruct_StructureEncounterSpawnContext, class UObject* CallFunc_SpawnEncounterStructure_ReturnValue, class ABP_Structure_EncounterTrigger_ArenaContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container, bool K2Node_DynamicCast_bSuccess_3, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, class ABP_Structure_EncounterTrigger_ArenaContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container_1, bool K2Node_DynamicCast_bSuccess_4);
	void GetHopeContainmentStructure(class ABP_Structure_EncounterTrigger_ArenaContainer_C** HopeContainmentStructure);
	void GetEncounterButtonTrigger(class ABP_Structure_EncounterTrigger_Button_C** EncounterButtonTrigger);
	void Initiate_Encounter_Completed(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void SpawnWave(int32 CallFunc_Get_Spawner_Waves_Current_Wave, int32 CallFunc_Get_Spawner_Waves_Total_Waves, class ABP_CreatureSpawnerBase_C* CallFunc_Manually_Spawn_Wave_Spawner_Actor, bool CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned);
	void TriggerPlatforms(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Arena* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Arena, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IEncounterPlaceableInterface> K2Node_DynamicCast_AsEncounter_Placeable_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
	class FString CollectDebuggerInformation(int32 CallFunc_Get_Spawner_Waves_Current_Wave, int32 CallFunc_Get_Spawner_Waves_Total_Waves, int32 CallFunc_Get_Total_Creature_Count_Creature_Count, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7);
	void Reset_Moveable_Platforms(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Arena* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Arena, bool K2Node_DynamicCast_bSuccess_1, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class IEncounterPlaceableInterface> K2Node_DynamicCast_AsEncounter_Placeable_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Set_Spawning_Inactive_Spawning_Deactivated);
	void Initialize_Button(class ATargetPoint* InputPin, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, const struct FGameplayTag& CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag, const struct FStructureEncounterSpawnContext& K2Node_MakeStruct_StructureEncounterSpawnContext, class ABP_Structure_EncounterTrigger_Button_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Button, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_SpawnEncounterStructure_ReturnValue, class ABP_Structure_EncounterTrigger_Button_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Button_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Initialize_Activation_Button(class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Arena* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Arena, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2);
	void InitiateSpawnWave(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void On_Wave_Defeated(int32 CallFunc_Get_Spawner_Waves_Current_Wave, int32 CallFunc_Get_Spawner_Waves_Total_Waves, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Start_Wave_Timer_WaveTimer_ImplicitCast);
	void Player_Interact(class ABP_Structure_EncounterTrigger_C* Triggering_Structure, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void Initialize(class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, int32 CallFunc_Get_Spawner_Waves_Current_Wave, int32 CallFunc_Get_Spawner_Waves_Total_Waves, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue_2, class UEncounterArchetypeDataAssetArena* K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Arena, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast);
	void CleanupEncounter(bool CallFunc_IsValid_ReturnValue);
	void All_Waves_Defeated();
	void BeginEncounter();
	void RefreshEncounter();
	void Fail(class AEncounterConfig* OverridePOITarget);
	void Finish(class AEncounterConfig* OverridePOITarget);
	void ArenaTimedOut();
	void ExecuteUbergraph_BP_Encounter_ArchetypeArena(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class AEncounterConfig* K2Node_Event_OverridePOITarget_1, bool CallFunc_IsValid_ReturnValue, class AEncounterConfig* K2Node_Event_OverridePOITarget, bool CallFunc_IsValid_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsAnyPlayerInRadius_ReturnValue);
	void OnNextWaveIsSpawnReady__DelegateSignature(class ABP_Encounter_ArchetypeArena_C* ArenaEncounter);
};

}


