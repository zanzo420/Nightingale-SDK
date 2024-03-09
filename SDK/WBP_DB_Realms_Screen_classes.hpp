#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C0 (0x778 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_DB_Realms_Screen.WBP_DB_Realms_Screen_C
class UWBP_DB_Realms_Screen_C : public UNWXDBRealmsScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_switchToExistingTabs;                         // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_creatingRealm;                                // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border;                                            // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_CreateRealm;                                    // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_Biome_Card;                                     // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_Ferocity;                                       // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_Major_Card;                                     // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_Select_Maps;                                    // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_TestRealm;                                      // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     CircularThrobber_135;                              // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       ComboBox_DifficultySelect;                         // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Dots;                                              // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_156;                               // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          FunctionalBox_Portals;                             // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_398;                                         // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_vertical_bar;                                  // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_vertical_bar_1;                                // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MajorCardArray;                                    // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Tab_NewRealm;                                      // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UIK_MenuTabs_C*                   Tabs;                                              // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Astrological;                                  // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_BasePower;                                     // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Creature;                                      // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Human;                                         // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Name;                                          // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Nature;                                        // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Players;                                       // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_state;                                         // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NavBar_C*                         WBP_NavBar;                                        // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_1;                                  // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_RealmCardMachine_ServerList_C*     RealmCardMachine;                                  // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<class FString, class UWBP_DB_Realms_sw_ListEntry_C*> RunningPortalWidgets;                              // 0x5B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FRealmRecipe>                  AvailableRecipes;                                  // 0x608(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Seed;                                              // 0x618(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableRealmButton;                                // 0x61C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9911[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxSeedSize;                                       // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9912[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                POIDistributionKey;                                // 0x628(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_9913[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    BiomeCard_DARef;                                   // 0x640(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FItemDataReference>            MajorCard_DARef;                                   // 0x6C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRealmSettings                        RealmSetting;                                      // 0x6D0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasBiomeCard;                                      // 0x710(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  RealmDifficulty;                                   // 0x711(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9915[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DifficultyEasy;                                    // 0x718(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DifficultyMedium;                                  // 0x730(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DifficultyHard;                                    // 0x748(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DifficultyExtreme;                                 // 0x760(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_DB_Realms_Screen_C* GetDefaultObj();

	void SetRealmDifficulty(const class FString& DifficultyToSet, class UBP_CharacterAppearanceComponent_C* CharacterAppearanceComponent, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, const class FString& CallFunc_GetSelectedOption_ReturnValue);
	void PopulateDifficultyComboBox(const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3);
	class UWidget* GetDefaultFocusWidget(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class UWidget* GetTooltipWidget_0(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateRealmSettingsArray(TArray<struct FItemData>* Cards, const TArray<struct FItemData>& CardsArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemDataReference& CallFunc_Array_Get_Item, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FItemData& CallFunc_TryGetItemData_ItemData_1, enum class EGetResult CallFunc_TryGetItemData_Branches_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void UpdateSelectMapsList(TArray<struct FRealmRecipe>& MatchedRecipes, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FRealmRecipe& CallFunc_Array_Get_Item, const class FString& CallFunc_GetRecipeName_RecipeName, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateInfluenceTexts(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue_4);
	void WBP_DB_Realms_Screen_AutoGenFunc(class UWBP_DB_Realms_sw_LabelAndButton_C* NewParam, TArray<struct FItemData>& CallFunc_UpdateRealmSettingsArray_Cards, bool CallFunc_GetRealmSettingsFromRealmCards_IsValidCardSet, const struct FRealmSettings& CallFunc_GetRealmSettingsFromRealmCards_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_RemoveChildAt_ReturnValue);
	void InitializeFromRealmMachine(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 Temp_int_Loop_Counter_Variable_1, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	class UWidget* Get_BU_CreateRealm_ToolTipWidget_0(class FText Tooltip, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	bool Get_BU_CreateRealm_bIsEnabled_0(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void UpdateDeploymentStatus(TArray<struct FS_DeploymentState>& DeploymentStatuses, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_DeploymentState& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_DB_Realms_sw_ListEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdatePortalsList(TArray<struct FS_TemporalPortal>& Portals, const struct FS_TemporalPortal& PortalData, class UWBP_DB_Realms_sw_ListEntry_C* RealmWidget, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_DB_Realms_sw_ListEntry_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const struct FS_TemporalPortal& CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class FText Temp_text_Variable, bool CallFunc_HasAnyChildren_ReturnValue, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue);
	void OnJoinClicked(const class FString& ID);
	void Construct();
	void BndEvt__WBP_NavBar_K2Node_ComponentBoundEvent_2_CloseClicked__DelegateSignature();
	void BndEvt__WBP_Realms_Screen_WBP_UIK_MenuTabs_K2Node_ComponentBoundEvent_4_TabSelected__DelegateSignature(class FText SelectedTabName, int32 ActiveTab);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void OnInternalClosed();
	void BndEvt__WBP_DB_Realms_Screen_EditableTextBox_156_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__WBP_DB_Realms_Screen_EditableTextBox_156_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__BU_CreateRealm_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_Realms_Screen_CB_Major_Card_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void BndEvt__WBP_DB_Realms_Screen_CB_Biome_Card_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void SetRealmMachine(class UObject* RealmMachine);
	void InitalizeRealm();
	void ExecuteUbergraph_WBP_DB_Realms_Screen(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText K2Node_ComponentBoundEvent_SelectedTabName, int32 K2Node_ComponentBoundEvent_ActiveTab, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWidgetAnimation* K2Node_Event_Animation, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 CallFunc_GetSelectedIndex_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsPOIStringKeyValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& K2Node_CustomEvent_ID, const struct FLinearColor& Temp_struct_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FS_RealmCard_DA& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_RealmCard_DA& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FLinearColor& Temp_struct_Variable_1, int32 CallFunc_GetSelectedIndex_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& K2Node_MakeStruct_Margin, class UWBP_DB_Realms_sw_LabelAndButton_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_FindMatchingRealmRecipesFromDARef_Found, TArray<struct FRealmRecipe>& CallFunc_FindMatchingRealmRecipesFromDARef_Recipes, TArray<struct FItemData>& CallFunc_UpdateRealmSettingsArray_Cards, bool CallFunc_GetRealmSettingsFromRealmCards_IsValidCardSet, const struct FRealmSettings& CallFunc_GetRealmSettingsFromRealmCards_ReturnValue, TArray<struct FItemData>& CallFunc_UpdateRealmSettingsArray_Cards_1, bool CallFunc_GetRealmSettingsFromRealmCards_IsValidCardSet_1, const struct FRealmSettings& CallFunc_GetRealmSettingsFromRealmCards_ReturnValue_1, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FEditableTextBoxStyle& K2Node_MakeStruct_EditableTextBoxStyle, class UObject* K2Node_Event_RealmMachine, class ABP_RealmCardMachine_ServerList_C* K2Node_DynamicCast_AsBP_Realm_Card_Machine_Server_List, bool K2Node_DynamicCast_bSuccess);
};

}


