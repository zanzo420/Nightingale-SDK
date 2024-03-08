#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xC8 - 0xC8)
// BlueprintGeneratedClass BP_AutoHideHUDComponent.BP_AutoHideHUDComponent_C
class UBP_AutoHideHUDComponent_C : public UNWXAutoHideHUDComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_AutoHideHUDComponent_C* GetDefaultObj();

	bool ShouldAutoHideHUD(const struct FGameplayTagContainer& L_LayersToCheck, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasFocusedWidgetInLayer_HasFocusedWidget, bool CallFunc_Less_IntInt_ReturnValue);
	void HasFocusedWidgetInLayer(struct FGameplayTag& Layer, bool* HasFocusedWidget, class ANWXPlayerController* L_PlayerController, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, class UNWXCommonWindowWidget* CallFunc_GetActiveWindowInLayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasUserFocusedDescendants_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Initialize(class APawn* L_OwningPawn, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class AHUD* K2Node_DynamicCast_AsHUD, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetOwningPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnItemAbilityUsed(TSoftObjectPtr<class UTechniqueDataAsset> Technique, const struct FInventoryEntry& ItemEntry);
	void OnOwnedGameplayTagCountChanged(struct FGameplayTag& Tag, int32 Count, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


