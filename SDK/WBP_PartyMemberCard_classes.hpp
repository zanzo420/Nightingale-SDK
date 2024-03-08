#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x498 - 0x348)
// WidgetBlueprintGeneratedClass WBP_PartyMemberCard.WBP_PartyMemberCard_C
class UWBP_PartyMemberCard_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_1;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_whiteoutline;                               // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_ContextMenu;                                   // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Invite_To_Realm;                               // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Kick_Player;                                   // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Travel_To_Button;                              // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ContextMenuOverlay;                                // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          HP;                                                // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_gold_border;                                   // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IMG_Party_Leader;                                  // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_partyleader_ribbon;                            // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_PartyMemberProfileImage;                       // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MicrophoneStatusButton_C*         MicrophoneStatusButton;                            // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MuteButtonOverlay;                                 // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_loadout;                                   // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayStatus;                                     // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PhotoSwitcher;                                     // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_HP;                                        // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       TravelToInviteToSwitcher;                          // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TUI_blankpaper_white_02;                           // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_hp;                                            // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_LoadOutScore;                                  // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_PlayerName;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_status;                                        // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_PlayerStat;                            // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FNWXPartyMember                       PartyMember;                                       // 0x418(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        PartyIndex;                                        // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_8BF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Popup_General_C*                  ConfirmationPopup;                                 // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        LoadOutScore;                                      // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BFA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_SubContextMenu_C*                 SubContextMenu;                                    // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_Dropdown_C*                 ReportDropdown;                                    // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  ReportConfirmationPopup;                           // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PartyMemberCard_C* GetDefaultObj();

	void OnReportConfirmationClose(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnReportSubmit(const class FString& L_ReportReason, class FText Temp_text_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText Temp_text_Variable_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText Temp_text_Variable_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_ReportPlayer_ReturnValue, const class FString& CallFunc_GetSelectedOption_ReturnValue);
	void OnReportCancel(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnSubContextMenuEntrySelected(const struct FGameplayTag& UIGameplayTag, class FText Temp_text_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UMutePlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText Temp_text_Variable_1, bool CallFunc_UnMutePlayer_ReturnValue, bool CallFunc_MutePlayer_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UWBP_Popup_Dropdown_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText Temp_text_Variable_2);
	void OpenSubContextMenu(const TArray<struct FDataTableRowHandle>& L_MenuEntries, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UWBP_SubContextMenu_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_GetIsPlayerMuted_IsMuted, class FName K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, int32 CallFunc_Array_Add_ReturnValue_1);
	void GetIsPlayerMuted(bool* IsMuted, class UMutePlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsPlayerMuted_ReturnValue);
	void InitializeDesignerPreview();
	struct FEventReply FocusDefaultWidget(const struct FEventReply& CallFunc_Handled_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_FocusDefaultWidget_ReturnValue);
	void Update_State(const struct FS_CharacterStateEntry& MostRecentState);
	void Refresh_Player();
	void Construct();
	void KickPlayer();
	void Travel_To_Player();
	void InviteToRealm();
	void BndEvt__WBP_PartyMemberCard_CBU_Kick_Player_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PartyMemberCard_CBU_Travel_To_Button_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PartyMemberCard_CBU_Invite_To_Realm_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PartyMemberCard_CBU_ContextMenu_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_PartyMemberCard(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_FCeil_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, const struct FS_CharacterStateEntry& K2Node_CustomEvent_MostRecentState, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_IsEmpty_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPartyComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FS_CharacterStateEntry& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttribute_ReturnValue_2, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, double CallFunc_MapRangeClamped_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UPartyComponentBase* CallFunc_GetComponentByClass_ReturnValue_1, class FText CallFunc_Format_ReturnValue_1, class FText Temp_text_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFilteredPlayerNameByPersistentId_FilteredPlayerName, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText Temp_text_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText Temp_text_Variable_4, class FText CallFunc_Format_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UPartyComponentBase* CallFunc_GetComponentByClass_ReturnValue_2, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, bool CallFunc_IsFeatureFlagEnabled_ReturnValue, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, enum class E_CharacterGameStatus Temp_byte_Variable_4, class FText Temp_text_Variable_12, class FText K2Node_Select_Default, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue_1, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue_2, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, double CallFunc_FCeil_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_Round_A_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast);
};

}


