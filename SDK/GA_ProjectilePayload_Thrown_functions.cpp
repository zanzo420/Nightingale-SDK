#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ProjectilePayload_Thrown.GA_ProjectilePayload_Thrown_C
// (None)

class UClass* UGA_ProjectilePayload_Thrown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ProjectilePayload_Thrown_C");

	return Clss;
}


// GA_ProjectilePayload_Thrown_C GA_ProjectilePayload_Thrown.Default__GA_ProjectilePayload_Thrown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ProjectilePayload_Thrown_C* UGA_ProjectilePayload_Thrown_C::GetDefaultObj()
{
	static class UGA_ProjectilePayload_Thrown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ProjectilePayload_Thrown_C*>(UGA_ProjectilePayload_Thrown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ProjectilePayload_Thrown.GA_ProjectilePayload_Thrown_C.ApplyDoTs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Weapon_Thrown_C*         K2Node_DynamicCast_AsBP_Weapon_Thrown                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Ammo              CallFunc_TryGetItemDataAmmo_OutData                              (None)
// enum class EGetResult              CallFunc_TryGetItemDataAmmo_Branches                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)

void UGA_ProjectilePayload_Thrown_C::ApplyDoTs(class UObject* Object, class AActor* Target, int32 Temp_int_Loop_Counter_Variable, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_Weapon_Thrown_C* K2Node_DynamicCast_AsBP_Weapon_Thrown, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FItemData_Ammo& CallFunc_TryGetItemDataAmmo_OutData, enum class EGetResult CallFunc_TryGetItemDataAmmo_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ProjectilePayload_Thrown_C", "ApplyDoTs");

	Params::UGA_ProjectilePayload_Thrown_C_ApplyDoTs_Params Parms{};

	Parms.Object = Object;
	Parms.Target = Target;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Thrown = K2Node_DynamicCast_AsBP_Weapon_Thrown;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_TryGetItemDataAmmo_OutData = CallFunc_TryGetItemDataAmmo_OutData;
	Parms.CallFunc_TryGetItemDataAmmo_Branches = CallFunc_TryGetItemDataAmmo_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ProjectilePayload_Thrown.GA_ProjectilePayload_Thrown_C.GetItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AEquippableItem*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             K2Node_DynamicCast_AsEquippable_Item                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItemInLoadoutSlot_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class AEquippableItem* UGA_ProjectilePayload_Thrown_C::GetItem(class AEquippableItem* Temp_object_Variable, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AEquippableItem* K2Node_DynamicCast_AsEquippable_Item, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetItemInLoadoutSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ProjectilePayload_Thrown_C", "GetItem");

	Params::UGA_ProjectilePayload_Thrown_C_GetItem_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsEquippable_Item = K2Node_DynamicCast_AsEquippable_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetItemInLoadoutSlot_ReturnValue = CallFunc_GetItemInLoadoutSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_ProjectilePayload_Thrown.GA_ProjectilePayload_Thrown_C.Setup Payload
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EffectTags                                                       (Parm, OutParm)
// struct FTagValueContainer          TagValueContainer                                                (Parm, OutParm)
// struct FTagValueContainer          LTagValueContainer                                               (Edit, BlueprintVisible)
// struct FGameplayTagContainer       LEffectTags                                                      (Edit, BlueprintVisible)
// double                             AmmoDamage                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Weapon_Thrown_C*         K2Node_DynamicCast_AsBP_Weapon_Thrown                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Ammo              CallFunc_TryGetItemDataAmmo_OutData                              (None)
// enum class EGetResult              CallFunc_TryGetItemDataAmmo_Branches                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// float                              CallFunc_Add_Value_ImplicitCast                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ProjectilePayload_Thrown_C::Setup_Payload(class UObject* Object, struct FGameplayTagContainer* EffectTags, struct FTagValueContainer* TagValueContainer, const struct FTagValueContainer& LTagValueContainer, const struct FGameplayTagContainer& LEffectTags, double AmmoDamage, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class ABP_Weapon_Thrown_C* K2Node_DynamicCast_AsBP_Weapon_Thrown, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Ammo& CallFunc_TryGetItemDataAmmo_OutData, enum class EGetResult CallFunc_TryGetItemDataAmmo_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_MatchesTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, float CallFunc_Add_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ProjectilePayload_Thrown_C", "Setup Payload");

	Params::UGA_ProjectilePayload_Thrown_C_Setup_Payload_Params Parms{};

	Parms.Object = Object;
	Parms.LTagValueContainer = LTagValueContainer;
	Parms.LEffectTags = LEffectTags;
	Parms.AmmoDamage = AmmoDamage;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Thrown = K2Node_DynamicCast_AsBP_Weapon_Thrown;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataAmmo_OutData = CallFunc_TryGetItemDataAmmo_OutData;
	Parms.CallFunc_TryGetItemDataAmmo_Branches = CallFunc_TryGetItemDataAmmo_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.CallFunc_Add_Value_ImplicitCast = CallFunc_Add_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EffectTags != nullptr)
		*EffectTags = std::move(Parms.EffectTags);

	if (TagValueContainer != nullptr)
		*TagValueContainer = std::move(Parms.TagValueContainer);

}


// Function GA_ProjectilePayload_Thrown.GA_ProjectilePayload_Thrown_C.HandleProjectileImpact
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             CallFunc_GetItem_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Weapon_Thrown_C*         K2Node_DynamicCast_AsBP_Weapon_Thrown                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Ammo              CallFunc_TryGetItemDataAmmo_OutData                              (None)
// enum class EGetResult              CallFunc_TryGetItemDataAmmo_Branches                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_StrengthTag_StrengthTag                                 (NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_Value_ImplicitCast                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ProjectilePayload_Thrown_C::HandleProjectileImpact(class AEquippableItem* CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Weapon_Thrown_C* K2Node_DynamicCast_AsBP_Weapon_Thrown, bool K2Node_DynamicCast_bSuccess, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Ammo& CallFunc_TryGetItemDataAmmo_OutData, enum class EGetResult CallFunc_TryGetItemDataAmmo_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FGameplayTag& CallFunc_StrengthTag_StrengthTag, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Add_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ProjectilePayload_Thrown_C", "HandleProjectileImpact");

	Params::UGA_ProjectilePayload_Thrown_C_HandleProjectileImpact_Params Parms{};

	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Thrown = K2Node_DynamicCast_AsBP_Weapon_Thrown;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataAmmo_OutData = CallFunc_TryGetItemDataAmmo_OutData;
	Parms.CallFunc_TryGetItemDataAmmo_Branches = CallFunc_TryGetItemDataAmmo_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_StrengthTag_StrengthTag = CallFunc_StrengthTag_StrengthTag;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_Value_ImplicitCast = CallFunc_Add_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


