#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x230 (0x580 - 0x350)
// WidgetBlueprintGeneratedClass WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C
class UWBP_Debug_QA_CustomCommandScreen_C : public UDebugCommandScreenWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border;                                            // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_8;                                          // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_12;                                         // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_AutoRevive;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_Encumbered;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_Godemode;                                   // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_InfStam;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_InteractHighlighting;                       // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_Min1Health;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_ViewRecipeAssets;                           // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_waterMarkButton;                            // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_AutoRevive;                                     // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_EnableGamespaceUI;                              // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_EnableHudNotifications;                         // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_EnableHUDVisibility;                            // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_EnableInteractHighlighting;                     // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_Encumberance;                                   // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_GodMode;                                        // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_InfStam;                                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_Min1Health;                                     // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_start_profiling;                                // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_ToggleFrameStats;                               // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_ToggleWatermark;                                // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_ViewRecipeAssets;                               // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    Cheat_GrantAllCodices;                             // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    Cheat_GrantAllSkills;                              // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    Cheat_GrantAllValidSkills;                         // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              CommandHolder;                                     // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      Editbox_commandToAdd;                              // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    WBP_button_base;                                   // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                        Arr_userCommands;                                  // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                Str_commandToAdd;                                  // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UCodexTrackerComponent*                CodexTrackerComponent;                             // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bViewRecipeAssets;                                 // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            NewEventDispatcher;                                // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UNWXCheatManager*                      CurrentCheatManager;                               // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSkillDataReference                   DefaultLoadout;                                    // 0x490(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FSkillDataReference>           DefaultLoadoutSkills;                              // 0x570(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_Debug_QA_CustomCommandScreen_C* GetDefaultObj();

	void WaterMarkBinding(class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void PopulateCommandList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Debug_QA_CustomCommandButton_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void RefreshWaterMarkButton(class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1);
	void AddNewCommandToLayout(const class FString& Str_command, class UWBP_Debug_QA_CustomCommandButton_C** NewCommand, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWBP_Debug_QA_CustomCommandButton_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void LoadCommandsFromConfig(TArray<class FString>& CallFunc_LoadUserCommandsFromConfig_ReturnValue);
	void SaveCommandsToConfig(TArray<class FString>& Commands);
	void GetCommandsFromCurrentLayout(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Debug_QA_CustomCommandButton_C* K2Node_DynamicCast_AsWBP_Debug_QA_Custom_Command_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void Completed_FBBC404E4BE65FD5D971F6A3CCAFD947(TArray<class UObject*>& Loaded);
	void Construct();
	void BndEvt__WBP_Debug_CustomCommandScreen_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_editbox_commandToAdd_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void UserCommandButtonRemoved(int32 Index);
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_start_profiling_K2Node_ComponentBoundEvent_2_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_Cheat_GrantAllSkills_K2Node_ComponentBoundEvent_4_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_InfStam_1_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_InfStam_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_GodMode_K2Node_ComponentBoundEvent_7_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_Cheat_GrantAllSkills_1_K2Node_ComponentBoundEvent_8_BU_Click__DelegateSignature();
	void UpdateButtonStatus();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_ToggleFrameStats_K2Node_ComponentBoundEvent_9_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableGamespaceUI_1_K2Node_ComponentBoundEvent_10_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableGamespaceUI_K2Node_ComponentBoundEvent_11_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableHudNotifications_K2Node_ComponentBoundEvent_12_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableGamespaceUI_1_K2Node_ComponentBoundEvent_3_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableInteractHighlighting_K2Node_ComponentBoundEvent_14_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_Min1Health_K2Node_ComponentBoundEvent_13_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_AutoRevive_K2Node_ComponentBoundEvent_15_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_ViewRecipeAssets_K2Node_ComponentBoundEvent_16_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CustomCommandScreen_Cheat_GrantAllValidSkills_K2Node_ComponentBoundEvent_17_BU_Click__DelegateSignature();
	void ExecuteUbergraph_WBP_Debug_QA_CustomCommandScreen(int32 EntryPoint, const struct FGuid& Temp_struct_Variable, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, bool Temp_bool_Variable_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FGameplayTag& Temp_struct_Variable_6, bool Temp_bool_Variable_3, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable_4, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UWatermarkSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_9, const struct FGameplayTag& Temp_struct_Variable_10, bool Temp_bool_Variable_6, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, bool Temp_bool_Variable_7, const struct FLinearColor& Temp_struct_Variable_11, const struct FLinearColor& Temp_struct_Variable_12, bool Temp_bool_Variable_8, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, bool Temp_bool_Variable_9, const struct FLinearColor& Temp_struct_Variable_13, const struct FLinearColor& Temp_struct_Variable_14, bool Temp_bool_Variable_10, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, bool Temp_bool_Variable_11, const struct FLinearColor& Temp_struct_Variable_15, const struct FLinearColor& Temp_struct_Variable_16, bool Temp_bool_Variable_12, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, bool Temp_bool_Variable_13, const struct FLinearColor& Temp_struct_Variable_17, const struct FLinearColor& Temp_struct_Variable_18, TArray<class UObject*>& Temp_object_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UObject*>& K2Node_CustomEvent_Loaded, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable_12, const struct FSkillDataReference& CallFunc_Array_Get_Item, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText CallFunc_GetText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, int32 K2Node_CustomEvent_index, bool CallFunc_RemoveChildAt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_Debug_QA_CustomCommandButton_C* CallFunc_AddNewCommandToLayout_NewCommand, class FText Temp_text_Variable_13, bool Temp_bool_Variable_14, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FLinearColor& Temp_struct_Variable_19, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1, int32 Temp_int_Array_Index_Variable_1, const struct FLinearColor& Temp_struct_Variable_20, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool Temp_bool_Variable_15, const struct FGameplayTag& CallFunc_GodModeTag_GodModeTag, class FText Temp_text_Variable_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_3, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_1, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsStateActive_ReturnValue, bool CallFunc_IsStateActive_ReturnValue_1, class FText K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, class FText K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, bool CallFunc_IsStateActive_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5, const struct FLinearColor& K2Node_Select_Default_6, const struct FLinearColor& K2Node_Select_Default_7, bool CallFunc_ActorHasTag_ReturnValue_1, class FText K2Node_Select_Default_8, const struct FLinearColor& K2Node_Select_Default_9, bool CallFunc_GetHideFrameStats_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_2, bool CallFunc_IsValid_ReturnValue_2, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_3, class AHUD* CallFunc_GetHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AHUD_NWX_C* K2Node_DynamicCast_AsHUD_NWX, bool K2Node_DynamicCast_bSuccess_4, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_4, bool CallFunc_IsValid_ReturnValue_4, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_5, bool CallFunc_UnlockAllSkillReferences_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_10, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_6, bool CallFunc_IsValid_ReturnValue_5, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_7, int32 Temp_int_Array_Index_Variable_2, class UObject* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_6, class UCodexBaseDataAsset* K2Node_DynamicCast_AsCodex_Base_Data_Asset, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_7, const struct FCodexSubentry& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FCodexAssetReference& K2Node_MakeStruct_CodexAssetReference, bool CallFunc_Less_IntInt_ReturnValue_2, TScriptInterface<class ICodexTrackerInterface> CallFunc_GrantCodexEntry_self_CastInput, class FText Temp_text_Variable_15, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_4, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_5, class UBP_DebugModeComponent_C* CallFunc_GetComponentByClass_ReturnValue_3, class UBP_DebugModeComponent_C* CallFunc_GetComponentByClass_ReturnValue_4, bool Temp_bool_Variable_16, const struct FGameplayTag& Temp_struct_Variable_21, bool CallFunc_IsStateActive_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, class FText K2Node_Select_Default_11, const struct FLinearColor& K2Node_Select_Default_12, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText K2Node_Select_Default_13, const struct FLinearColor& K2Node_Select_Default_14, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_ToggleViewRecipeAssetNames_ReturnValue, class UNWXCheatManager* K2Node_DynamicCast_AsNWXCheat_Manager, bool K2Node_DynamicCast_bSuccess_7, class FText K2Node_Select_Default_15, const struct FLinearColor& K2Node_Select_Default_16, const struct FSkillReferenceContainer& CallFunc_GetSkillUnlockables_OutSkillUnlockables, bool CallFunc_GetSkillUnlockables_ReturnValue, TArray<class FName>& Temp_name_Variable, class UAsyncActionLoadPrimaryAssetList* CallFunc_AsyncLoadPrimaryAssetList_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_8, bool CallFunc_UnlockSkillReference_ReturnValue, bool CallFunc_HasUnlockedSkill_ReturnValue);
	void NewEventDispatcher__DelegateSignature();
};

}


