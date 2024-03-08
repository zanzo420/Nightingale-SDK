#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x390 - 0x348)
// WidgetBlueprintGeneratedClass WBP_RealmInfo.WBP_RealmInfo_C
class UWBP_RealmInfo_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_NavRight;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_71;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_RealmInfoTab_NPC_Creatures_C*  NPCAndCreatureTab;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_RealmInfoTab_Overview_C*       OverviewInfoTab;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       TabsContainer;                                     // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_NPCCreatures;                                  // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Overview;                                      // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WS_SectionTitles;                                  // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RealmInfo_C* GetDefaultObj();

	void UpdateRealmCards(TArray<struct FInventoryEntry>& Realm_Cards, const TArray<struct FItemData>& Cards, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateRealmInformation(const struct FRealmSettings& RealmSettings, const TArray<struct FDataTableRowHandle>& NewLocalVar, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, TArray<struct FItemData>& CallFunc_GenerateRealmCardsData_ReturnValue, TArray<struct FNWXNPCNarrativeData>& CallFunc_GetNarrativeNPCsFromRealm_OutNPCs, TArray<enum class EFaction>& CallFunc_GetFactionsFromRealm_Factions, TArray<struct FDataTableRowHandle>& CallFunc_GetCreaturesFromRealm_SpawnerData);
	void BndEvt__WBP_RealmInfo_CBU_NavRight_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_RealmInfo(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, TArray<class UWidget*>& K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetActiveWidget_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


