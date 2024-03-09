#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x578 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_DB_PartySystem.WBP_DB_PartySystem_C
class UWBP_DB_PartySystem_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_button_base_C*                    BU_CreateParty;                                    // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_LeaveParty;                                     // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     Grid_PartyMembers;                                 // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          GroupBox;                                          // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RealmPlayersBox;                                   // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ServerGroups;                                      // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_partyName;                                     // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_partyName_3;                                   // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_realmplayerQuantity;                           // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txtrealmname;                                      // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DB_PartyMember_C*                 WBP_HUD_PartyMember;                               // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DB_PartyMember_C*                 WBP_HUD_PartyMember_1;                             // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DB_PartyMember_C*                 WBP_HUD_PartyMember_2;                             // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DB_PartyMember_C*                 WBP_HUD_PartyMember_3;                             // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_PlayerSearch_C*                WBP_sw_PlayerSearch;                               // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UIK_MenuTabs_C*                   WBP_UIK_MenuTabs;                                  // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_0;                                  // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                        Groups;                                            // 0x548(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ANWXPlayerState*>               Array_PartyMembers;                                // 0x558(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        ColumnCount;                                       // 0x568(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PartyComponent_C*                  PartyComponent;                                    // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DB_PartySystem_C* GetDefaultObj();

	void CheckPlayerInParty(const class FString& B, bool* AlreadyInParty_, bool PlayerFoundInParty, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ANWXPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void AddToPartyEntry_Clicked(const class FString& PlayerName, const class FString& ID, bool PlayerFoundInPartyAlready, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ANWXPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void Refresh_Party();
	void Construct();
	void Refresh_Groups();
	void OnGroupDetailsReturned(const class FString& ID, const class FString& Name, const class FString& Message);
	void Refresh_Players();
	void BndEvt__BU_CreateParty_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void BndEvt__WBP_UIK_MenuTabs_K2Node_ComponentBoundEvent_1_TabSelected__DelegateSignature(class FText SelectedTabName, int32 ActiveTab);
	void BndEvt__BU_LeaveParty_K2Node_ComponentBoundEvent_2_BU_Click__DelegateSignature();
	void RefreshAll();
	void OnPlayerListChanged();
	void OnPartyListChanged();
	void ExecuteUbergraph_WBP_DB_PartySystem(int32 EntryPoint, const struct FLinearColor& Temp_struct_Variable, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, class UWBP_DB_PartyMember_C* CallFunc_Create_ReturnValue_1, class UWBP_Social_PlayerListEntry_C* CallFunc_Create_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FLinearColor& Temp_struct_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue_3, const struct FLinearColor& Temp_struct_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Array_Index_Variable_3, TScriptInterface<class IBPI_PlayerStateSystems_C> K2Node_DynamicCast_AsBPI_Player_State_Systems, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerState* CallFunc_Array_Get_Item, class UGroupComponentBase* CallFunc_GetGroupSystem_GroupComponent, TArray<class FString>& CallFunc_GetGroups_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const class FString& K2Node_CustomEvent_ID, const class FString& K2Node_CustomEvent_Name, const class FString& K2Node_CustomEvent_Message, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, TScriptInterface<class IMenusComponentProviderInterface> CallFunc_GetMenusComponent_self_CastInput, class UMenusComponent* CallFunc_GetMenusComponent_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class UBP_UIMenusComponent_C* K2Node_DynamicCast_AsBP_UIMenus_Component, bool K2Node_DynamicCast_bSuccess_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IMenusComponentProviderInterface> CallFunc_GetMenusComponent_self_CastInput_1, class UMenusComponent* CallFunc_GetMenusComponent_ReturnValue_1, class UBP_UIMenusComponent_C* K2Node_DynamicCast_AsBP_UIMenus_Component_1, bool K2Node_DynamicCast_bSuccess_4, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FMember& CallFunc_Array_Get_Item_2, class APlayerState* CallFunc_Array_Get_Item_3, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int64 CallFunc_Conv_IntToInt64_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, bool CallFunc_Less_IntInt_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_4, class FText K2Node_ComponentBoundEvent_SelectedTabName, int32 K2Node_ComponentBoundEvent_ActiveTab, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue_4, int32 CallFunc_Divide_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_3, bool CallFunc_CreateParty_Success, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue_1, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, bool CallFunc_IsPlayerInMyParty_ReturnValue, TArray<class ANWXPlayerState*>& CallFunc_GetPlayerStatesOfPartyMembers_ReturnValue, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent_1);
};

}


