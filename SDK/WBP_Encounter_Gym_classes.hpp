#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x498 - 0x340)
// WidgetBlueprintGeneratedClass WBP_Encounter_Gym.WBP_Encounter_Gym_C
class UWBP_Encounter_Gym_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               ClearEncounter;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       EncounterDAComboBox;                               // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            EncounterFilter;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        EncounterFilterBox;                                // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       FavourComboBox;                                    // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               GrantFavour;                                       // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       PlugComboBox;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlugFilter;                                        // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PlugFilterBox;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SetPlacerToCameraRaycast;                          // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SetPlacerToPlayerTransform;                        // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SpawnDungeonCrystalEncounter;                      // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SpawnEncounter;                                    // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ToggleEncounterPlacer;                             // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class AActor*>                        NonEncounterActors;                                // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<int32, int32>                           EncounterComboIndexToTotalIndex;                   // 0x3C8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, int32>                           PlugComboIndexToTotalIndex;                        // 0x418(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UEncounterDataAsset*>           AllEncounterDataAssets;                            // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCompositeDataTable*                   PlugTable;                                         // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreSelectionChange;                             // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FilteredByPlug;                                    // 0x481(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FilteredByEncounter;                               // 0x482(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_72B7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_DebugModeComponent_C*              Debug_Component;                                   // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlugAssetPartition*                   Plug_Partition;                                    // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Encounter_Gym_C* GetDefaultObj();

	void SetFavourOptions(const TArray<class FString>& FavourNames, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class FString>& CallFunc_IncreasingStringSort_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FEncounterFavourData>& CallFunc_GenerateFavourRewards_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FEncounterFavourData& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void OnUIInitialized(int32 PlugIndex, int32 EncounterIndex, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<int32>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<int32>& CallFunc_Map_Keys_Keys_1, int32 CallFunc_GetSavedEncounterSelections_EncounterIndex, int32 CallFunc_GetSavedEncounterSelections_PlugIndex, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void SpawnEncounter_Internal(int32 PlugIndex, int32 EncounterIndex, const class FString& CallFunc_GetSelectedOption_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void SetDebugModeComponent(class UBP_DebugModeComponent_C* DebugComponent, bool CallFunc_IsInitialized_IsInitialized);
	void IsInitialized(bool* IsInitialized, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void FilterPlugComboEntries(class UPlugAssetPartition* PlugPartition, bool ShouldFilter, enum class EEncounterType FilterType, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetPlugNames_OutPlugNames, int32 Temp_int_Variable, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_CopyPlugFromPartition_bFound, const struct FPOIPlugStreamingLevelDefinition& CallFunc_CopyPlugFromPartition_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, int32 CallFunc_Map_Length_ReturnValue_1);
	void FilterEncounterComboEntries(TArray<class UEncounterDataAsset*>& EncounterDAs, bool ShouldFilter, enum class EEncounterType FilterType, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, class UEncounterDataAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, int32 CallFunc_Map_Length_ReturnValue_1);
	void SetEncounterOptions(TArray<class UEncounterDataAsset*>& EncounterDataAssets);
	void SetPlugOptions(class UPlugAssetPartition* PlugPartition);
	void BndEvt__WBP_Encounter_Gym_SpawnEncounter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Encounter_Gym_ClearEncounter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Encounter_Gym_EncounterDAComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void BndEvt__WBP_Encounter_Gym_POIComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void BndEvt__WBP_Encounter_Gym_ToggleEncounterPlacer_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Encounter_Gym_SetPlacerToPlayerTransform_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Encounter_Gym_SetPlacerToCameraRaycast_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Encounter_Gym_GrantFavour_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Encounter_Gym_SpawnDungeonCrystalEncounter_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Encounter_Gym(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, int32 CallFunc_GetSelectedIndex_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UEncounterDataAsset* CallFunc_Array_Get_Item, int32 CallFunc_GetSelectedIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UPlugAssetPartition* K2Node_CustomEvent_PlugPartition, int32 CallFunc_GetSelectedIndex_ReturnValue_2, int32 CallFunc_GetSelectedIndex_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, TArray<class UEncounterDataAsset*>& K2Node_CustomEvent_EncounterDataAssets, bool CallFunc_IsInitialized_IsInitialized, bool CallFunc_IsInitialized_IsInitialized_1, bool CallFunc_IsInitialized_IsInitialized_2, bool CallFunc_IsInitialized_IsInitialized_3, int32 CallFunc_GetSelectedIndex_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_GetSelectedIndex_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_GetSelectedIndex_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsInitialized_IsInitialized_4, bool CallFunc_IsInitialized_IsInitialized_5, bool CallFunc_IsInitialized_IsInitialized_6, bool CallFunc_IsInitialized_IsInitialized_7, bool CallFunc_IsInitialized_IsInitialized_8, bool CallFunc_IsInitialized_IsInitialized_9, const class FString& CallFunc_GetSelectedOption_ReturnValue, TArray<class FName>& CallFunc_GetPlugNames_OutPlugNames, class FName CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_CopyPlugFromPartition_bFound, const struct FPOIPlugStreamingLevelDefinition& CallFunc_CopyPlugFromPartition_ReturnValue);
};

}


