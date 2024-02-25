#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_Ak_Equipped_Torch.AN_Ak_Equipped_Torch_C
// (None)

class UClass* UAN_Ak_Equipped_Torch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_Ak_Equipped_Torch_C");

	return Clss;
}


// AN_Ak_Equipped_Torch_C AN_Ak_Equipped_Torch.Default__AN_Ak_Equipped_Torch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_Ak_Equipped_Torch_C* UAN_Ak_Equipped_Torch_C::GetDefaultObj()
{
	static class UAN_Ak_Equipped_Torch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_Ak_Equipped_Torch_C*>(UAN_Ak_Equipped_Torch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_Ak_Equipped_Torch.AN_Ak_Equipped_Torch_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_EquippedQuickbarItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightItemBP_bSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LightweightAttachedItem_C*CallFunc_GetLightweightItemBP_LightweightItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LightweightTorch_C*      K2Node_DynamicCast_AsBP_Lightweight_Torch                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAN_Ak_Equipped_Torch_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem, bool CallFunc_IsValid_ReturnValue, class ABP_LightweightTorch_C* K2Node_DynamicCast_AsBP_Lightweight_Torch, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_PostAkEventScoped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ak_Equipped_Torch_C", "Received_Notify");

	Params::UAN_Ak_Equipped_Torch_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEquippedItem_EquippedQuickbarItem = CallFunc_GetEquippedItem_EquippedQuickbarItem;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLightweightItemBP_bSuccess = CallFunc_GetLightweightItemBP_bSuccess;
	Parms.CallFunc_GetLightweightItemBP_LightweightItem = CallFunc_GetLightweightItemBP_LightweightItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Lightweight_Torch = K2Node_DynamicCast_AsBP_Lightweight_Torch;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


