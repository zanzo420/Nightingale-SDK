#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AutoHideHUDComponent.BP_AutoHideHUDComponent_C
// (None)

class UClass* UBP_AutoHideHUDComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AutoHideHUDComponent_C");

	return Clss;
}


// BP_AutoHideHUDComponent_C BP_AutoHideHUDComponent.Default__BP_AutoHideHUDComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AutoHideHUDComponent_C* UBP_AutoHideHUDComponent_C::GetDefaultObj()
{
	static class UBP_AutoHideHUDComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AutoHideHUDComponent_C*>(UBP_AutoHideHUDComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AutoHideHUDComponent.BP_AutoHideHUDComponent_C.ShouldAutoHideHUD
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       L_LayersToCheck                                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFocusedWidgetInLayer_HasFocusedWidget                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AutoHideHUDComponent_C::ShouldAutoHideHUD(const struct FGameplayTagContainer& L_LayersToCheck, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasFocusedWidgetInLayer_HasFocusedWidget, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AutoHideHUDComponent_C", "ShouldAutoHideHUD");

	Params::UBP_AutoHideHUDComponent_C_ShouldAutoHideHUD_Params Parms{};

	Parms.L_LayersToCheck = L_LayersToCheck;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasFocusedWidgetInLayer_HasFocusedWidget = CallFunc_HasFocusedWidgetInLayer_HasFocusedWidget;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AutoHideHUDComponent.BP_AutoHideHUDComponent_C.HasFocusedWidgetInLayer
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Layer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               HasFocusedWidget                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        L_PlayerController                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonWindowWidget*      CallFunc_GetActiveWindowInLayer_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocusedDescendants_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AutoHideHUDComponent_C::HasFocusedWidgetInLayer(struct FGameplayTag& Layer, bool* HasFocusedWidget, class ANWXPlayerController* L_PlayerController, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, class UNWXCommonWindowWidget* CallFunc_GetActiveWindowInLayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasUserFocusedDescendants_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AutoHideHUDComponent_C", "HasFocusedWidgetInLayer");

	Params::UBP_AutoHideHUDComponent_C_HasFocusedWidgetInLayer_Params Parms{};

	Parms.Layer = Layer;
	Parms.L_PlayerController = L_PlayerController;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.CallFunc_GetActiveWindowInLayer_ReturnValue = CallFunc_GetActiveWindowInLayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasUserFocusedDescendants_ReturnValue = CallFunc_HasUserFocusedDescendants_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (HasFocusedWidget != nullptr)
		*HasFocusedWidget = Parms.HasFocusedWidget;

}


// Function BP_AutoHideHUDComponent.BP_AutoHideHUDComponent_C.Initialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       L_OwningPawn                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXAbilitySystemComponent*  K2Node_DynamicCast_AsNWXAbility_System_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        K2Node_DynamicCast_AsHUD                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AutoHideHUDComponent_C::Initialize(class APawn* L_OwningPawn, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class AHUD* K2Node_DynamicCast_AsHUD, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetOwningPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AutoHideHUDComponent_C", "Initialize");

	Params::UBP_AutoHideHUDComponent_C_Initialize_Params Parms{};

	Parms.L_OwningPawn = L_OwningPawn;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsNWXAbility_System_Component = K2Node_DynamicCast_AsNWXAbility_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD = K2Node_DynamicCast_AsHUD;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AutoHideHUDComponent.BP_AutoHideHUDComponent_C.OnItemAbilityUsed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTechniqueDataAsset>Technique                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_AutoHideHUDComponent_C::OnItemAbilityUsed(TSoftObjectPtr<class UTechniqueDataAsset> Technique, const struct FInventoryEntry& ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AutoHideHUDComponent_C", "OnItemAbilityUsed");

	Params::UBP_AutoHideHUDComponent_C_OnItemAbilityUsed_Params Parms{};

	Parms.Technique = Technique;
	Parms.ItemEntry = ItemEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AutoHideHUDComponent.BP_AutoHideHUDComponent_C.OnOwnedGameplayTagCountChanged
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AutoHideHUDComponent_C::OnOwnedGameplayTagCountChanged(struct FGameplayTag& Tag, int32 Count, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AutoHideHUDComponent_C", "OnOwnedGameplayTagCountChanged");

	Params::UBP_AutoHideHUDComponent_C_OnOwnedGameplayTagCountChanged_Params Parms{};

	Parms.Tag = Tag;
	Parms.Count = Count;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


