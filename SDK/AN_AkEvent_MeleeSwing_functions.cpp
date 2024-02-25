#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_AkEvent_MeleeSwing.AN_AkEvent_MeleeSwing_C
// (None)

class UClass* UAN_AkEvent_MeleeSwing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_AkEvent_MeleeSwing_C");

	return Clss;
}


// AN_AkEvent_MeleeSwing_C AN_AkEvent_MeleeSwing.Default__AN_AkEvent_MeleeSwing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_AkEvent_MeleeSwing_C* UAN_AkEvent_MeleeSwing_C::GetDefaultObj()
{
	static class UAN_AkEvent_MeleeSwing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_AkEvent_MeleeSwing_C*>(UAN_AkEvent_MeleeSwing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_AkEvent_MeleeSwing.AN_AkEvent_MeleeSwing_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_EquippableItemAudioComponent_C*CachedEquippedItemAudio                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CachedEquippedItem                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CachedOwner                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_EquippableItemAudioComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_EquippedQuickbarItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

bool UAN_AkEvent_MeleeSwing_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UBP_EquippableItemAudioComponent_C* CachedEquippedItemAudio, class AEquippableItem* CachedEquippedItem, class AActor* CachedOwner, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, class UBP_EquippableItemAudioComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_AkEvent_MeleeSwing_C", "Received_Notify");

	Params::UAN_AkEvent_MeleeSwing_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CachedEquippedItemAudio = CachedEquippedItemAudio;
	Parms.CachedEquippedItem = CachedEquippedItem;
	Parms.CachedOwner = CachedOwner;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetEquippedItem_EquippedQuickbarItem = CallFunc_GetEquippedItem_EquippedQuickbarItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


