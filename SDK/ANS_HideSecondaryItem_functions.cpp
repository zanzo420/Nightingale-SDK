#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_HideSecondaryItem.ANS_HideSecondaryItem_C
// (None)

class UClass* UANS_HideSecondaryItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_HideSecondaryItem_C");

	return Clss;
}


// ANS_HideSecondaryItem_C ANS_HideSecondaryItem.Default__ANS_HideSecondaryItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_HideSecondaryItem_C* UANS_HideSecondaryItem_C::GetDefaultObj()
{
	static class UANS_HideSecondaryItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_HideSecondaryItem_C*>(UANS_HideSecondaryItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANS_HideSecondaryItem.ANS_HideSecondaryItem_C.SetSecondaryHidden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Hidden                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             Character                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItemInLoadoutSlot_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

bool UANS_HideSecondaryItem_C::SetSecondaryHidden(class USkeletalMeshComponent* SkeletalMeshComp, bool Hidden, class ABP_Character_C* Character, class AEquippableItem* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetItemInLoadoutSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_HideSecondaryItem_C", "SetSecondaryHidden");

	Params::UANS_HideSecondaryItem_C_SetSecondaryHidden_Params Parms{};

	Parms.SkeletalMeshComp = SkeletalMeshComp;
	Parms.Hidden = Hidden;
	Parms.Character = Character;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetItemInLoadoutSlot_ReturnValue = CallFunc_GetItemInLoadoutSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ANS_HideSecondaryItem.ANS_HideSecondaryItem_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              FrameDeltaTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             Character                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSecondaryHidden_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UANS_HideSecondaryItem_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class ABP_Character_C* Character, bool CallFunc_SetSecondaryHidden_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_HideSecondaryItem_C", "Received_NotifyTick");

	Params::UANS_HideSecondaryItem_C_Received_NotifyTick_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.EventReference = EventReference;
	Parms.Character = Character;
	Parms.CallFunc_SetSecondaryHidden_ReturnValue = CallFunc_SetSecondaryHidden_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ANS_HideSecondaryItem.ANS_HideSecondaryItem_C.Set1stPersonSecondaryHidden
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Hidden_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightItemBP_bSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LightweightAttachedItem_C*CallFunc_GetLightweightItemBP_LightweightItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UANS_HideSecondaryItem_C::Set1stPersonSecondaryHidden(bool Hidden_, class ABP_EquippableItemBase_C* Item, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_HideSecondaryItem_C", "Set1stPersonSecondaryHidden");

	Params::UANS_HideSecondaryItem_C_Set1stPersonSecondaryHidden_Params Parms{};

	Parms.Hidden_ = Hidden_;
	Parms.Item = Item;
	Parms.CallFunc_GetLightweightItemBP_bSuccess = CallFunc_GetLightweightItemBP_bSuccess;
	Parms.CallFunc_GetLightweightItemBP_LightweightItem = CallFunc_GetLightweightItemBP_LightweightItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANS_HideSecondaryItem.ANS_HideSecondaryItem_C.Set3rdPersonSecondaryHidden
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Hidden_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UANS_HideSecondaryItem_C::Set3rdPersonSecondaryHidden(bool Hidden_, class ABP_EquippableItemBase_C* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_HideSecondaryItem_C", "Set3rdPersonSecondaryHidden");

	Params::UANS_HideSecondaryItem_C_Set3rdPersonSecondaryHidden_Params Parms{};

	Parms.Hidden_ = Hidden_;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANS_HideSecondaryItem.ANS_HideSecondaryItem_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             Character                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSecondaryHidden_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UANS_HideSecondaryItem_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class ABP_Character_C* Character, bool CallFunc_SetSecondaryHidden_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_HideSecondaryItem_C", "Received_NotifyEnd");

	Params::UANS_HideSecondaryItem_C_Received_NotifyEnd_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.Character = Character;
	Parms.CallFunc_SetSecondaryHidden_ReturnValue = CallFunc_SetSecondaryHidden_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ANS_HideSecondaryItem.ANS_HideSecondaryItem_C.Received_NotifyBegin
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             Character                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSecondaryHidden_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UANS_HideSecondaryItem_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class ABP_Character_C* Character, bool CallFunc_SetSecondaryHidden_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_HideSecondaryItem_C", "Received_NotifyBegin");

	Params::UANS_HideSecondaryItem_C_Received_NotifyBegin_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = EventReference;
	Parms.Character = Character;
	Parms.CallFunc_SetSecondaryHidden_ReturnValue = CallFunc_SetSecondaryHidden_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


