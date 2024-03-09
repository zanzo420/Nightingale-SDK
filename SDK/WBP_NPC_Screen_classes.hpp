#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x5A8 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_NPC_Screen.WBP_NPC_Screen_C
class UWBP_NPC_Screen_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Transition_FromFullscreen;                         // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Transition_ToFullScreen;                           // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               DialogueHolder;                                    // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               FullScreenMenuBorder;                              // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NavBar_C*                         WBP_NavBar;                                        // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_NPCComponent_C*                    NPCComponent;                                      // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                NPC_Actor;                                         // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HasEmployer;                                       // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 EmployerReference;                                 // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         NoTasksToGive;                                     // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NoTasksToReturn;                                   // 0x509(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DE7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_DialogueComponent_C*               DialogueComponent;                                 // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInFullscreen;                                    // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasDialogue;                                       // 0x519(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DE8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           Menus;                                             // 0x520(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasMenus;                                          // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_JobBoard_ScreenSpace_C*           ContractsScreen;                                   // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   NPCSatisfactionHandle;                             // 0x540(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_DialogueBase_C*                   DialogueWidget;                                    // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ContractBoardHandle;                               // 0x558(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_Shop_JobBoard_ScreenSpace_C*      ShopContractsScreen;                               // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_NPC_EmployeeMGMT_C*               EmployeeMGMT;                                      // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CloseDialogueTags;                                 // 0x578(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_NPC_Encounter_Escort_C*           NPCEncounter;                                      // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               EncounterFocusTarget;                              // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_NPC_Screen_C* GetDefaultObj();

	void HandleOnTamageTaken(float OldHealth, float NewHealth, struct FDamageEffectContextData& ContextData, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast);
	class UWidget* DoCustomNavigation(enum class EUINavigation Navigation, bool CallFunc_IsValid_ReturnValue, class UWBP_Common_Button_Base_C* CallFunc_Get_Employee_Button_to_Focus_ButtonToFocus);
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWBP_Common_Button_Base_C* CallFunc_Get_Employee_Button_to_Focus_ButtonToFocus, class UWidget* CallFunc_GetEncounterButtonToFocus_Output);
	void TryGetEphemeralContainer(class AActor* TargetActor, bool* bSuccess, class ABP_PersistentEphemeralItemContainer_C** Container, class ABP_PersistentEphemeralItemContainer_C* PotentialMatch, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class ABP_PersistentEphemeralItemContainer_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ABP_PersistentEphemeralItemContainer_C* CallFunc_Array_Get_Item, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	class UWidget* GetDefaultFocusWidget(bool CallFunc_IsValid_ReturnValue);
	void CheckifPlayerhasExchangeBoard_HideContracts_(bool* Has_Faction_Store, const struct FDataTableRowHandle& L_ExchangeBoardRowRef, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_RowHandlesEqual_Equal_1, bool CallFunc_BooleanOR_ReturnValue);
	class UWBP_Inv_TwoInventories_C* Fetch_Encounter_Menu(class UWBP_Inv_TwoInventories_C* CallFunc_Create_ReturnValue, class ABP_EphemeralItemContainer_C* CallFunc_Get_NPC_Actor_Container_EphemeralContainer, bool CallFunc_Get_NPC_Actor_Container_Success);
	bool IsScreenHovered(bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHovered_ReturnValue_2, bool CallFunc_IsHovered_ReturnValue_3, bool CallFunc_IsHovered_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3);
	void Get_NPC_Actor_Container(class ABP_EphemeralItemContainer_C** EphemeralContainer, bool* Success, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UEncounterProgressTracker* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FEncounterDynamicData>& CallFunc_GetAllDynamicData_OutData, const struct FEncounterDynamicData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_TryGetEphemeralContainer_bSuccess, class ABP_PersistentEphemeralItemContainer_C* CallFunc_TryGetEphemeralContainer_Container, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void HandleInputFaceButtonTop(bool CallFunc_HasDialog_HasDialog);
	void HandleInputFaceButtonLeft(bool CallFunc_HasDialog_HasDialog);
	void HasDialog(bool* HasDialog, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_DialogueComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
	struct FEventReply OnInputContext(int32 ContextIndex, const struct FEventReply& CallFunc_Handled_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	struct FEventReply OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetDialogueTemplateFromSpeaker(class UDialogue* Dialogue, bool FoundSpeaker, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UWBP_Dialogue_C* CallFunc_Create_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_DialogueTemplateMapping& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsWBP_Dialogue_Base, bool K2Node_ClassDynamicCast_bSuccess, class UWBP_DialogueBase_C* CallFunc_Create_ReturnValue_1);
	void Leave_ViaDialogue();
	void OnReturnFromSubMenu(bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OpenMenuViaDialogue(class FText MenuName, enum class E_ui_NPCMenus MenuType, const struct FDataTableRowHandle& Menu, bool FoundMenu, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class E_ui_NPCMenus CallFunc_GetNPCMenu_Menu_Type, class FText CallFunc_GetNPCMenu_Optional___Menu_Name_, TArray<struct FDataTableRowHandle>& CallFunc_GetNPCMenu_Available_Content, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetupDialogue(class UWBP_DialogueBase_C** OutputPin, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void SetupContractBoard(class UWBP_ShopScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsFeatureFlagEnabled_ReturnValue, bool CallFunc_IsQuestGiverFactionExchange_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWBP_JobBoard_ScreenSpace_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
	void SetupDialogueOnly(class UWBP_DialogueBase_C* CallFunc_SetupDialogue_OutputPin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SetupMenuRoot_Dialogue(bool HasFactionStore, int32 Temp_int_Array_Index_Variable, bool CallFunc_CheckifPlayerhasExchangeBoard_HideContracts__Has_Faction_Store, bool CallFunc_IsValid_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, const struct FS_NPCMenu_Content& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_DoesDataTableRowExist_ReturnValue, class UWBP_DialogueBase_C* CallFunc_SetupDialogue_OutputPin);
	void Display_FullscreenMenu(const struct FDataTableRowHandle& NPC_Menu, const struct FDataTableRowHandle& ContractBoard_Ref, bool CallFunc_RowHandlesEqual_Equal);
	void Setup_Menu_Root_Only(bool HasFactionStore, int32 Temp_int_Array_Index_Variable, bool CallFunc_CheckifPlayerhasExchangeBoard_HideContracts__Has_Faction_Store, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_DialogueBase_C* CallFunc_SetupDialogue_OutputPin, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, const struct FS_NPCMenu_Content& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue);
	void HasContractBoard(TArray<struct FDataTableRowHandle>& Array, bool* HasContractBoard, bool ContractBoardFound, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, enum class E_ui_NPCMenus CallFunc_GetNPCMenu_Menu_Type, class FText CallFunc_GetNPCMenu_Optional___Menu_Name_, TArray<struct FDataTableRowHandle>& CallFunc_GetNPCMenu_Available_Content, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	struct FSlateBrush TEMP_img_contracts___(enum class Enum_HiringStatus Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable_3, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable_4, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, class UTexture2D* K2Node_Select_Default_1, class UTexture2D* K2Node_Select_Default_2, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1);
	void Setup_Menu_With_Content(const struct FDataTableRowHandle& Row, enum class EFaction L_Faction, class UUserWidget* Menu, const TArray<struct FDataTableRowHandle>& MenuContent, bool MenuRowFound, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FS_NPCMenu_Content& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsFeatureFlagEnabled_ReturnValue, bool CallFunc_IsQuestGiverFactionExchange_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWBP_MotdScreen_C* CallFunc_Create_ReturnValue, class UWBP_NPC_EmployeeMGMT_C* CallFunc_Create_ReturnValue_1, class UWBP_NPC_Encounter_Escort_C* CallFunc_Create_ReturnValue_2, class UWBP_Inv_TwoInventories_C* CallFunc_Fetch_Encounter_Menu_ReturnValue, class UWidget* CallFunc_GetEncounterButtonToFocus_Output, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UNWXCommonWindowWidget* K2Node_DynamicCast_AsNWXCommon_Window_Widget, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void SetupNPCInfo(class FText CallFunc_GetCreatureInfo_UIName, class FText CallFunc_GetCreatureInfo_UIDescription, class UTexture2D* CallFunc_GetCreatureInfo_UIIcon);
	void RefreshTasksList(bool CallFunc_IsFeatureFlagEnabled_ReturnValue, class UWBP_Shop_JobBoard_ScreenSpace_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWBP_JobBoard_ScreenSpace_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsQuestGiverFactionExchange_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void CallCreatureKilled(const struct FDataTableRowHandle& Creature_Information, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer);
	void CallGiveTag(const struct FGameplayTag& Gameplay_Tag);
	void CallStructureBlueprintPlaced(const struct FDataTableRowHandle& StructureDataHandle);
	void CallResourceHarvested(const struct FInventoryEntry& ItemEntry, int32 Amount);
	void CallStructureCompleted(class AActor* Owning_Actor, int32 Piece_ID);
	void CallItemDeposited_InWorldContainer(const struct FItemDataReference& ItemRowHandle, int32 Quantity, const struct FGameplayTag& ContainerTag);
	void CallWeakpointHit(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags, const struct FHitResult& HitResult);
	void CallOnSpellCast(TSoftObjectPtr<class UTechniqueDataAsset> SpellCast);
	void CallOnGlyphRevealed();
	void CallFishCaught(struct FFish& CaughtFish);
	void CallOnInteractedWithPlayer(class APawn* InteractingPawn);
	void Refresh();
	void BndEvt__WBP_NavBar_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature();
	void OnInternalClosed();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_NPC_Screen(int32 EntryPoint, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_UI_NPCMenuComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_HasContractBoard_HasContractBoard, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class APawn* K2Node_Event_InteractingPawn, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFish& K2Node_Event_CaughtFish, TSoftObjectPtr<class UTechniqueDataAsset> K2Node_Event_SpellCast, const struct FGameplayTagContainer& K2Node_Event_WeakpointType, const struct FGameplayTagContainer& K2Node_Event_CreatureTags, const struct FHitResult& K2Node_Event_HitResult, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasDialog_HasDialog, const struct FItemDataReference& K2Node_Event_ItemRowHandle, int32 K2Node_Event_Quantity, const struct FGameplayTag& K2Node_Event_ContainerTag, class AActor* K2Node_Event_Owning_Actor, int32 K2Node_Event_Piece_ID, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_HasDialog_HasDialog_1, const struct FInventoryEntry& K2Node_Event_ItemEntry, int32 K2Node_Event_Amount, const struct FDataTableRowHandle& K2Node_Event_StructureDataHandle, const struct FGameplayTag& K2Node_Event_Gameplay_Tag, const struct FDataTableRowHandle& K2Node_Event_Creature_Information, const struct FGameplayTagContainer& K2Node_Event_CreatureTagContainer, const struct FGameplayTagContainer& K2Node_Event_KillerTagContainer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


