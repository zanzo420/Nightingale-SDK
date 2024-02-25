#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x7E8 - 0x7E8)
// BlueprintGeneratedClass GA_ProjectilePayload_Thrown.GA_ProjectilePayload_Thrown_C
class UGA_ProjectilePayload_Thrown_C : public UGA_ProjectilePayload_C
{
public:

	static class UClass* StaticClass();
	static class UGA_ProjectilePayload_Thrown_C* GetDefaultObj();

	void ApplyDoTs(class UObject* Object, class AActor* Target, int32 Temp_int_Loop_Counter_Variable, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_Weapon_Thrown_C* K2Node_DynamicCast_AsBP_Weapon_Thrown, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FItemData_Ammo& CallFunc_TryGetItemDataAmmo_OutData, enum class EGetResult CallFunc_TryGetItemDataAmmo_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
	class AEquippableItem* GetItem(class AEquippableItem* Temp_object_Variable, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AEquippableItem* K2Node_DynamicCast_AsEquippable_Item, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetItemInLoadoutSlot_ReturnValue);
	void Setup_Payload(class UObject* Object, struct FGameplayTagContainer* EffectTags, struct FTagValueContainer* TagValueContainer, const struct FTagValueContainer& LTagValueContainer, const struct FGameplayTagContainer& LEffectTags, double AmmoDamage, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class ABP_Weapon_Thrown_C* K2Node_DynamicCast_AsBP_Weapon_Thrown, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Ammo& CallFunc_TryGetItemDataAmmo_OutData, enum class EGetResult CallFunc_TryGetItemDataAmmo_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_MatchesTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, float CallFunc_Add_Value_ImplicitCast);
	void HandleProjectileImpact(class AEquippableItem* CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Weapon_Thrown_C* K2Node_DynamicCast_AsBP_Weapon_Thrown, bool K2Node_DynamicCast_bSuccess, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Ammo& CallFunc_TryGetItemDataAmmo_OutData, enum class EGetResult CallFunc_TryGetItemDataAmmo_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FGameplayTag& CallFunc_StrengthTag_StrengthTag, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Add_Value_ImplicitCast);
};

}


