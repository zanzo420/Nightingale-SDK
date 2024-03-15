#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x268 (0x330 - 0xC8)
// BlueprintGeneratedClass BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C
class UBP_EncounterComponent_Spawners_C : public UEncounterComponent_Spawners
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Creatures_Killed;                                  // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_Creatures;                                 // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Total_Creatures_Spawned;                           // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Position_Within_Creature_Spawners;                 // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawning_Active;                                   // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5584[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSpawnerSpawned;                                  // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class ABP_CreatureSpawnerBase_C*>     Creature_Spawners;                                 // 0xF8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnCreatureSquadDead;                               // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Last_Spawner_Finished;                             // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5585[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCreatureNoneRemain;                              // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCreatureBehaviourOverridden;                     // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UClass*>                        Behaviour_Override_Cache;                          // 0x140(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                        Custom_EQS_Context_Actors;                         // 0x150(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnCreatureSpawned;                                 // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCreatureKilled;                                  // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnWaveComplete;                                    // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Creature_Realm_Power_Override;                     // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5586[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterBase*                        Cached_Encounter_Base;                             // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_Spawner_Index;                             // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5587[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CreatureSpawnerBase_C*             Current_Spawner;                                   // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawner_In_Progress;                               // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5588[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvQuery*                             Bound_Miasma_EQS;                                  // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryRunMode                  Run_Mode;                                          // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Player_Is_Targeted;                                // 0x1C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5589[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPlayerTargeted;                                  // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FEncounterSpawnerWaveData>     Encounter_Spawner_Wave_Data;                       // 0x1D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ANWXCreatureManagerBase*               Creature_Manager_Base;                             // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FClusterTheme>      Realm_Clusters;                                    // 0x1F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEncounterLevelData                   Encounter_Level_Data;                              // 0x240(0x24)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_558A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Biome_Creature_Data_Table;                         // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FSoftClassPath, int32>           Creature_Challenge_Ratings;                        // 0x270(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class ESpawnerCreatureType, struct FEncounterCreatureDataArray> Creature_Type_Map;                                 // 0x2C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnNPCSpawned;                                      // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FS_BPSpawnerData>              BPSpawnerDataOverride;                             // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_EncounterComponent_Spawners_C* GetDefaultObj();

	void Get_Spawner_Location_from_Encounter_Config(struct FTransform* Spawner_Transform, bool* bGotLocationFromConfig, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> CallFunc_GetMarkupDataAsset_self_CastInput, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEncounterMarkupDataInterface_SpawnerProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Spawner_Provider, bool K2Node_DynamicCast_bSuccess, TArray<class ATargetPoint_AI*>& CallFunc_GetSpawners_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ATargetPoint_AI* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3);
	void Initialize_Encounter_POI_Implementer(class ABP_CreatureSpawnerBase_C*& Creature_Spawner, class AEncounterBase* EncounterBase, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UNWXAIPOI_Component* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase);
	void On_NPC_Spawner_Finished(class ABP_CreatureSpawnerBase_C* Spawner, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void On_NPC_Spawned(class ABP_CreatureBase_C* Creature, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void Bind_NPC_Spawner_Events(class ABP_CreatureSpawnerBase_C* Creature_Spawner, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void Bind_Creature_Spawner_Events(class ABP_CreatureSpawnerBase_C* Creature_Spawner, class AController* CallFunc_GetController_ReturnValue, class ANWXAISpawnerController* K2Node_DynamicCast_AsNWXAISpawner_Controller, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void SetCreature_Realm_Power_Override(int32 NewValue);
	void Is_Creature_Unique(const struct FEncounterCreatureData& Creature_Data, TArray<struct FEncounterCreatureData>& Creature_Data_Array, bool* bIsUnique, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FEncounterCreatureData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Set_BPSpawner_Data_Override(TMap<TSoftClassPtr<class ABP_CreatureBase_C>, int32> Required_Creature_Classes, int32 Total_Creature_Count, const struct FGameplayTagContainer& Bound_Spawner_Tags, class UNWXSquadConfigData* Bound_Squad_Data, class UEnvQuery* Bound_Miasma_Spawning_Query, const TArray<TSoftClassPtr<class ABP_CreatureBase_C>>& Default_Creature_Classes, TSoftClassPtr<class ABP_CreatureBase_C> Required_First_Creature_Class_Key, TArray<TSoftClassPtr<class ABP_CreatureBase_C>>& CallFunc_Map_Keys_Keys, TSoftClassPtr<class ABP_CreatureBase_C> CallFunc_Array_Get_Item, bool CallFunc_Map_Remove_ReturnValue, TMap<class FName, float> K2Node_MakeMap_Map, TArray<TSoftClassPtr<class ABP_CreatureBase_C>>& K2Node_MakeArray_Array, const struct FS_SpawningData& K2Node_MakeStruct_S_SpawningData, const struct FS_BPSpawnerData& K2Node_MakeStruct_S_BPSpawnerData, int32 CallFunc_Array_Add_ReturnValue);
	void Calculate_Wave_Max_Challenge_Rating(struct FEncounterSpawnerWaveData& Encounter_Spawner_Wave_Data, int32* Wave_Max_Challenge_Rating, TMap<enum class EAutomaticSpawnerWaveDifficulty, double> Spawner_Wave_Difficulty, TMap<enum class EAutomaticSpawnerWaveDifficulty, double> K2Node_MakeVariable_MakeVariableOutput, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_GetCurrentRealmPower_RealmPower, double CallFunc_Conv_IntToDouble_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
	void Filter_Creature_Spawner_By_Cluster(struct FEncounterSpawnerWaveData& Encounter_Spawner_Wave_Data, TArray<struct FEncounterCreatureData>* Cluster_Filtered_Creature_Data_Array, const TArray<struct FRealmPlacementRequirement>& Cluster_Realm_Requirements, const struct FEncounterCreatureData& Creature_Data_Entry, class FName Cluster_Theme_Name, const TArray<struct FEncounterCreatureData>& Cluster_Filtered_Creature_Data, const struct FGameplayTagContainer& Cluster_Tags_Container, const struct FClusterTheme& Master_Cluster_Theme, const struct FClusterTheme& Cluster_Theme, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FEncounterCreatureDataArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue_1, bool CallFunc_Is_Creature_Unique_bIsUnique, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FEncounterCreatureData& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, TArray<struct FEncounterCreatureData>& K2Node_MakeArray_Array, bool CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_HasTag_ReturnValue, const struct FEncounterCreatureDataArray& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, const struct FEncounterCreatureData& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FClusterCreatureData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_1, const struct FGameplayTag& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FClusterTheme& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2);
	void Initialize_Creature_Spawner_and_Count_for_Auto_Spawner_Wave_Data(struct FEncounterSpawnerWaveData& Encounter_Spawner_Wave_Data, int32 Array_Index, const struct FDataTableRowHandle& Creature_Spawner_Row_Handle, int32 Total_Creature_Count_, TMap<TSoftClassPtr<class ABP_CreatureBase_C>, int32> Required_Creature_Classes, TSubclassOf<class ANWXAISpawner> Default_Bound_Spawner_Class, const TArray<struct FEncounterCreatureData>& Cluster_Filtered_Creature_Data_Array, int32 Wave_Max_Challenge_Rating, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Calculate_Wave_Max_Challenge_Rating_Wave_Max_Challenge_Rating, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FCurveTableRowHandle& K2Node_MakeStruct_CurveTableRowHandle, const struct FScalableFloat& K2Node_MakeStruct_ScalableFloat, bool CallFunc_NotEqual_ByteByte_ReturnValue, TArray<struct FEncounterCreatureData>& CallFunc_Filter_Creature_Spawner_By_Cluster_Cluster_Filtered_Creature_Data_Array, const struct FEncounterCreatureData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Map_IsEmpty_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FS_EncounterSpawnerData& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, TSoftClassPtr<class ABP_CreatureBase_C> CallFunc_Array_Get_Item_1, const struct FEncounterCreatureData& CallFunc_Array_Get_Item_2, const struct FS_EncounterSpawnerData& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, int32 CallFunc_Divide_IntInt_ReturnValue);
	void Initialize_Creature_Spawner_Data(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FEncounterSpawnerWaveData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Override_Bound_Creature_Data_For_Arrival_Realm(const struct FGameplayTag& CreatureTag, int32 CreatureChallengeRating, class UDataTable* Bound_Override_Data_Table, class FName CreatureName, const struct FEncounterCreatureDataArray& BoundCreatureDataOverride, int32 Temp_int_Array_Index_Variable, enum class ESpawnerCreatureType Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, enum class ESpawnerCreatureType Temp_byte_Variable_1, const struct FEncounterCreatureData& K2Node_MakeStruct_EncounterCreatureData, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FS_EncounterSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Get_Challenge_Rating_from_Row_Handle_Challenge_Rating, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_GetCurrentRealmTags_Success, const struct FGameplayTagContainer& CallFunc_GetCurrentRealmTags_RealmTags, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_HasTag_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Get_Challenge_Rating_from_Row_Handle(const struct FDataTableRowHandle& Creature_Row_Handle, int32* Challenge_Rating, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, TSoftClassPtr<class ABP_CreatureBase_C> CallFunc_Array_Get_Item, const struct FSoftClassPath& CallFunc_Conv_SoftObjRefToSoftClassPath_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Convert_Creature_String_to_Enum(const class FString& CreatureString, enum class ESpawnerCreatureType* CreatureEnum, bool K2Node_SwitchString_CmpSuccess);
	void Initialize_Creature_Type_Map(const TArray<struct FEncounterCreatureData>& Creature_Data_Array, enum class ESpawnerCreatureType Creature_Enum, const struct FGameplayTag& Creature_Tag, int32 Creature_Challenge_Rating, class FName Creature_Name, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FEncounterCreatureData& K2Node_MakeStruct_EncounterCreatureData, const struct FEncounterCreatureDataArray& K2Node_MakeStruct_EncounterCreatureDataArray, TArray<struct FEncounterCreatureData>& K2Node_MakeArray_Array, const struct FEncounterCreatureDataArray& K2Node_MakeStruct_EncounterCreatureDataArray_1, const struct FEncounterCreatureData& K2Node_MakeStruct_EncounterCreatureData_1, const struct FEncounterCreatureDataArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FS_EncounterSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Get_Challenge_Rating_from_Row_Handle_Challenge_Rating, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item_1, class FName CallFunc_GetTagName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_2, enum class ESpawnerCreatureType CallFunc_Convert_Creature_String_to_Enum_CreatureEnum);
	void On_Creature_Has_Targeted_Player(class ABP_CreatureBase_C* Creature, class AActor* ExitGate, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_GetFunctionName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, const struct FEncounterSpawnerWaveData& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IEncounterGateInterface> K2Node_DynamicCast_AsEncounter_Gate_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, bool CallFunc_IsValid_ReturnValue_2, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class AActor* CallFunc_GetExitGateActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
	void Get_or_Cache_Encounter_Base(class AEncounterBase** EncounterBase, class AActor* CallFunc_GetOwner_ReturnValue, class AEncounterBase* K2Node_DynamicCast_AsEncounter_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void On_Final_Preferred_Leader_Death(class ANWXAICharacter* New_Leader, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess);
	void On_Creature_Possessed(class ABP_CreatureBase_C* Creature, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_ApplyAIActions_Success);
	void Destroy_All_Creatures_Immediately(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Evaluate_if_Spawners_Remain(bool* No_Spawners_Remain, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Get_Spawner_Waves(int32* Current_Wave, int32* Total_Waves, int32 CallFunc_Array_Length_ReturnValue);
	void On_Spawner_Finished(class ABP_CreatureSpawnerBase_C* Spawner, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void Get_Current_Creature_Count(int32* Current_Creatures, int32 Total_Creature_Count);
	void Destroy_All_Creatures(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Set_Spawning_Inactive(bool* Spawning_Deactivated);
	void Set_Spawning_Active(bool* Spawning_Activated);
	void Get_Current_Spawner_Count(int32* Current_Spawner_Count, int32 Total_Creature_Count, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetTotalCreatures_CreatureCount, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void On_Creatures_None_Remain(class ABP_CreatureSpawnerBase_C* Spawner, const class FString& CallFunc_GetFunctionName_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void On_Creature_Death(class ABP_CreatureBase_C* Creature, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FEncounterSpawnerWaveData& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Evaluate_if_Spawners_Remain_No_Spawners_Remain, int32 CallFunc_Add_IntInt_ReturnValue);
	void On_Creature_Destroyed(class ABP_CreatureBase_C* Creature, int32 Current_Creature_Count, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Get_Total_Creature_Count(int32* Creature_Count);
	void On_Creature_Spawned(class ABP_CreatureBase_C* Creature, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue);
	void Evaluate_Current_Creature_Count(int32 Current_Creature_Count, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void Increment_Current_Wave(int32 NewPosition, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Create_NPC_Spawner(int32 Number_of_NPCs, class ABP_CreatureSpawnerBase_C** Spawner_Actor, bool* Spawner_Was_Spawned, class AEncounterBase* EncounterReference, const struct FEncounterSpawnerWaveData& NPC_Creature_Wave_Data_Template, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureSpawner_NPCGroup_Realm_C* CallFunc_FinishSpawningActor_ReturnValue);
	void Create_Creature_Spawner(struct FEncounterSpawnerWaveData& Spawner_Wave_Data, class ABP_CreatureSpawnerBase_C** Spawner_Actor, bool* Spawner_Was_Spawned, const TArray<struct FTransform>& Markup_Spawners, bool bSkipTwoStepSpawning, const struct FS_BPSpawnerData& BP_Spawner_Override, TSubclassOf<class ANWXAISpawner> Creature_Spawner_Base, const struct FTransform& Spawner_Transform, class AEncounterBase* Encounter, int32 Maximum_Creature_Override, const struct FDataTableRowHandle& Creature_Spawner, const TArray<struct FTransform>& Cached_Spawn_Points, bool Boss_Wave, const struct FVector& Found_Spawn_Location, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_Get_Spawner_Location_from_Encounter_Config_Spawner_Transform, bool CallFunc_Get_Spawner_Location_from_Encounter_Config_bGotLocationFromConfig, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, class UClass* K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Bound_Miasma, bool K2Node_ClassDynamicCast_bSuccess_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_CreatureSpawner_BoundMiasma_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue);
	void Manually_Spawn_Wave(int32 Wave_Number, class ABP_CreatureSpawnerBase_C** Spawner_Actor, bool* Spawner_Was_Spawned, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Create_Creature_Spawner_Spawner_Actor, bool CallFunc_Create_Creature_Spawner_Spawner_Was_Spawned, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void InitializeEncounterComponent();
	void ExecuteUbergraph_BP_EncounterComponent_Spawners(int32 EntryPoint, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FEncounterLevelData& CallFunc_GetEncounterLevelData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UDataTable* CallFunc_GetEncounterCreatureData_DataTable, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetCurrentRealmDifficulty_Success, enum class ERealmDifficulty CallFunc_GetCurrentRealmDifficulty_Realm_Difficulty, int32 Temp_int_Array_Index_Variable, class UEncounterComponentDataAsset* CallFunc_Array_Get_Item, class UEncounterComponentSpawnerAutomaticDataAsset* K2Node_DynamicCast_AsEncounter_Component_Spawner_Automatic_Data_Asset, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetNextRealmPower_NextRealmPower);
	void OnNPCSpawned__DelegateSignature(class ABP_CreatureBase_C* NPC);
	void OnPlayerTargeted__DelegateSignature(class ABP_CreatureBase_C* Creature);
	void OnCreatureKilled__DelegateSignature(class ABP_CreatureBase_C* Creature);
	void OnWaveComplete__DelegateSignature();
	void OnCreatureSpawned__DelegateSignature(class ABP_CreatureBase_C* Creature);
	void OnCreatureBehaviourOverridden__DelegateSignature(class ABP_CreatureBase_C* Creature);
	void OnCreatureNoneRemain__DelegateSignature();
	void OnCreatureSquadDead__DelegateSignature();
	void OnSpawnerSpawned__DelegateSignature();
};

}


