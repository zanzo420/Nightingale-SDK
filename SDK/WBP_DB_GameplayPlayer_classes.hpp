#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8D8 (0xDA0 - 0x4C8)
// WidgetBlueprintGeneratedClass WBP_DB_GameplayPlayer.WBP_DB_GameplayPlayer_C
class UWBP_DB_GameplayPlayer_C : public UWBP_NonShippableWindow_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_button_base_C*                    BU_AddPerk;                                        // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_AddSpell;                                       // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_Apply_StatusEffect;                             // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_BrokenArm;                                      // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_BrokenLeg;                                      // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_FillAllBars;                                    // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_HealCurses;                                     // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_HealInjuries;                                   // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_Hungry;                                         // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_InfiniteHunger;                                 // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_InfiniteRest;                                   // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_RemoveAllStatusEffects;                         // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_RemoveSelectedStatusEffect;                     // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_SprainedAnkle;                                  // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_SprainedWrist;                                  // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_Tired;                                          // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_ActiveStatusEffects;                            // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_Clothing;                                       // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_Perks;                                          // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_Spells;                                         // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_StatusEffectDuration;                           // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_StatusEffectLevel;                              // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_StatusEffects;                                  // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_Tools;                                          // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CurrentPerks;                                      // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CurrentSpells;                                     // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayerLoadoutDataReference           SelectedLoadout;                                   // 0x5A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               Tools;                                             // 0x5C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UTechniqueDataAsset>> Spells;                                            // 0x5D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_400E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       SelectedClothing;                                  // 0x5F0(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FInventoryEntry                       SelectedTool;                                      // 0x8E0(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FItemPerkDataReference                SelectedPerk;                                      // 0xBD0(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UTechniqueDataAsset>    SelectedSpell;                                     // 0xC50(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        SelectedClothingIndex;                             // 0xC78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedToolIndex;                                 // 0xC7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ButtonOnColor;                                     // 0xC80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ButtonOffColor;                                    // 0xC90(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_HopeEvent                    SelectedHopeEvent;                                 // 0xCA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_400F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RewardDescription;                                 // 0xCA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPlayerLoadoutDataReference           StartPlaytestLoadout;                              // 0xCB8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FPlayerLoadoutDataReference>   AvailableLoadouts;                                 // 0xCE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FInventoryEntry>               Clothings;                                         // 0xCF0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FItemPerkDataReference>        Perks;                                             // 0xD00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SelectedStatusEffectLevelIndex;                    // 0xD10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4010[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStatusEffectDataAsset*                SelectedStatusEffect;                              // 0xD18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>   Active_Effect_Handles;                             // 0xD20(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UNWXGameplayEffectUIData*>      Active_Status_Effect_UIs;                          // 0xD30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FS_DebugStatusEffectDuration>  AvailableStatusEffectDurations;                    // 0xD40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStatusEffectDataAsset*>        AvailableStatusEffects;                            // 0xD50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTagContainer>         TagsToRemove;                                      // 0xD60(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          InfiniteHopeColor;                                 // 0xD70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          InfiniteFedColor;                                  // 0xD80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          InfiniteRestColor;                                 // 0xD90(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DB_GameplayPlayer_C* GetDefaultObj();

	void InitializeSurvivalButtonColors(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1);
	class FText Get_RestedExhaustTimer_Text(double LRestedDrainPerMinute, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_SafeDivide_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	class FText Get_RestedDrainRate_Text(class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	class FText Get_FedStarveTimer_Text(double LFedDrainPerMinute, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_SafeDivide_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	class FText Get_FedDrainRate_Text(class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void IsStatusEffectValidForDebugApply(class UStatusEffectDataAsset* Status_Effect, bool* IsValid, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FStatusEffectLevelData& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, TMap<struct FGameplayAttribute, struct FGameplayTag> CallFunc_GetSetByCallerAttributesAndTags_AttributeTags, bool CallFunc_Map_IsNotEmpty_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void RefreshActiveStatusEffectsList(const class FString& LSelectedOption, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_FindOptionIndex_ReturnValue, int32 CallFunc_Max_ReturnValue, class UNWXGameplayEffectUIData* CallFunc_Array_Get_Item, class FText CallFunc_GetEffectName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetSelectedOption_ReturnValue);
	void OnUIGameplayEffectRemoved(struct FActiveGameplayEffectHandle& ActiveGameplayEffectHandle, class UGameplayEffectUIData* GameplayEffectUIData, class UNWXGameplayEffectUIData* K2Node_DynamicCast_AsNWXGameplay_Effect_UIData, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void OnUIGameplayEffectAdded(struct FActiveGameplayEffectHandle& ActiveGameplayEffectHandle, class UGameplayEffectUIData* GameplayEffectUIData, class UNWXGameplayEffectUIData* K2Node_DynamicCast_AsNWXGameplay_Effect_UIData, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void PopulateActiveStatusEffects(TArray<class UNWXGameplayEffectUIData*>& Initial_Status_Effect_UIs, TArray<struct FActiveGameplayEffectHandle>& Effect_Handles, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TSubclassOf<class IInterface> Temp_class_Variable, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IGameplayEffectUIObservable> K2Node_DynamicCast_AsGameplay_Effect_UIObservable, bool K2Node_DynamicCast_bSuccess);
	void PopulateCBStatusEffectDurations(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_DebugStatusEffectDuration& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PopulateStatusEffectLevels(int32 CurrentLevel, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FStatusEffectLevelData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UNWXGameplayEffectUIData* CallFunc_GetGameplayEffectUIData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_IsValid_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetEffectName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1);
	void PopulateCBStatusEffects(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, const struct FPrimaryAssetId& CallFunc_Array_Get_Item, TSoftObjectPtr<class UObject> CallFunc_GetSoftObjectReferenceFromPrimaryAssetId_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UStatusEffectDataAsset* K2Node_DynamicCast_AsStatus_Effect_Data_Asset, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsStatusEffectValidForDebugApply_IsValid);
	void PopulateCBClothing(const struct FInventoryEntry& LEntry, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsNotEmpty_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_GetItemName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, bool CallFunc_HasTag_ReturnValue);
	void PopulateCBPerks(int32 Temp_int_Array_Index_Variable, TArray<struct FItemPerkDataReference>& CallFunc_GetAllItemPerkReferences_ReturnValue, const struct FItemPerkDataReference& CallFunc_Array_Get_Item, const struct FItemPerkDataReference& CallFunc_Array_Get_Item_1, class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	class UWidget* Get_BU_ArrivalComplete_ToolTipWidget_0(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	struct FEventReply OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue);
	void CBHopeEventSelected(const class FString& HopeEvent, enum class Enum_HopeEvent LHopeMax, enum class Enum_HopeEvent LHopeMin, const class FString& LSelection, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void GetDebugComponent(class UBP_DebugModeComponent_C** BP_DebugModeComponent, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UBP_DebugModeComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void PopulateCurrentSpells(const class FString& LSpellList, bool LFoundSpell, int32 LIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex, TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& CallFunc_TryGetItemSpellTechniques_SpellTechniques, enum class EGetResult CallFunc_TryGetItemSpellTechniques_Branches, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, TSoftObjectPtr<class UTechniqueDataAsset> CallFunc_Array_Get_Item, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTechniqueDataAsset* K2Node_DynamicCast_AsTechnique_Data_Asset, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void PopulateCurrentPerks(const class FString& LPerksList, bool LFoundPerk, int32 LIndex, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, const struct FInstanceData_Perks& CallFunc_TryGetItemPerks_Perks, enum class EGetResult CallFunc_TryGetItemPerks_Branches, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemPerkDataReference& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void PopulateCBSpells(int32 Temp_int_Array_Index_Variable, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, const struct FPrimaryAssetId& CallFunc_Array_Get_Item, TSoftObjectPtr<class UObject> CallFunc_GetSoftObjectReferenceFromPrimaryAssetId_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTechniqueDataAsset* K2Node_DynamicCast_AsTechnique_Data_Asset, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTechniqueDataAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_HasTag_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void PopulateCBTools(const struct FInventoryEntry& LEntry, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_GetItemName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, bool CallFunc_HasTag_ReturnValue);
	void InitializeScreen(class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, TArray<class UNWXGameplayEffectUIData*>& CallFunc_Get_Active_Passive_UIs_PassiveEffectUIs, TArray<struct FActiveGameplayEffectHandle>& CallFunc_Get_Active_Passive_UIs_EffectHandles);
	void Construct();
	void BndEvt__WBP_DB_GameplayPlayer_BU_AddSpell_K2Node_ComponentBoundEvent_2_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_CB_Items_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void BndEvt__WBP_DB_GameplayPlayer_CB_Spells_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void BndEvt__WBP_DB_GameplayPlayer_BU_FillAllBars_K2Node_ComponentBoundEvent_11_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_HealCurses_K2Node_ComponentBoundEvent_14_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_HealInjuries_K2Node_ComponentBoundEvent_17_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_SrpainedWrist_K2Node_ComponentBoundEvent_26_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_BrokenLeg_K2Node_ComponentBoundEvent_27_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_AddPerk_K2Node_ComponentBoundEvent_36_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_CB_Clothing_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void BndEvt__WBP_DB_GameplayPlayer_CB_Perks_K2Node_ComponentBoundEvent_38_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void BndEvt__WBP_DB_GameplayPlayer_CB_StatusEffects_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void BndEvt__WBP_DB_GameplayPlayer_BU_Apply_StatusEffect_K2Node_ComponentBoundEvent_3_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_RemoveSelectedStatusEffect_K2Node_ComponentBoundEvent_4_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_RemoveAllStatusEffects_K2Node_ComponentBoundEvent_10_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_BrokenArm_K2Node_ComponentBoundEvent_18_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_SprainedAnkle_K2Node_ComponentBoundEvent_33_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_InfiniteStamina_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_InfiniteHunger_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_Tired_K2Node_ComponentBoundEvent_15_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_GameplayPlayer_BU_Hungry_K2Node_ComponentBoundEvent_16_BU_Click__DelegateSignature();
	void ExecuteUbergraph_WBP_DB_GameplayPlayer(int32 EntryPoint, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent, int32 CallFunc_Array_Find_ReturnValue, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem_4, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_4, const class FString& K2Node_ComponentBoundEvent_SelectedItem_3, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_3, int32 CallFunc_FindOptionIndex_ReturnValue, int32 CallFunc_FindOptionIndex_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TSoftObjectPtr<class UTechniqueDataAsset> CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_2, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_3, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_4, int32 Temp_int_Array_Index_Variable, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_5, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_6, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_7, const class FString& K2Node_ComponentBoundEvent_SelectedItem_2, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_2, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_1, int32 CallFunc_FindOptionIndex_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, int32 CallFunc_FindOptionIndex_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, int32 CallFunc_FindOptionIndex_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_8, class UStatusEffectDataAsset* CallFunc_Array_Get_Item_1, int32 CallFunc_GetSelectedIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue_2, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_9, const struct FActiveGameplayEffectHandle& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, class UGameplayEffect* CallFunc_GetGameplayEffectFromActiveEffectHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FGameplayTagContainer>& K2Node_MakeArray_Array, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_10, const struct FActiveGameplayEffectHandle& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, class UGameplayEffect* CallFunc_GetGameplayEffectFromActiveEffectHandle_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_11, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_12, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_13, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_14, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_15, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_16, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_17);
};

}


