#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotifyState_Trail_Equipped.AnimNotifyState_Trail_Equipped_C
// (None)

class UClass* UAnimNotifyState_Trail_Equipped_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_Trail_Equipped_C");

	return Clss;
}


// AnimNotifyState_Trail_Equipped_C AnimNotifyState_Trail_Equipped.Default__AnimNotifyState_Trail_Equipped_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotifyState_Trail_Equipped_C* UAnimNotifyState_Trail_Equipped_C::GetDefaultObj()
{
	static class UAnimNotifyState_Trail_Equipped_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_Trail_Equipped_C*>(UAnimNotifyState_Trail_Equipped_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotifyState_Trail_Equipped.AnimNotifyState_Trail_Equipped_C.GetItemMesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UActorComponent*             Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      SkeletalMeshRoot                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemId                                                           (Parm, OutParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>CallFunc_GetEquippedItem_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightRoot_bSuccess                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetLightweightRoot_Root                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UAnimNotifyState_Trail_Equipped_C::GetItemMesh(class UActorComponent* Mesh, class USkeletalMeshComponent** SkeletalMeshRoot, struct FItemDataReference* ItemId, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ILoadoutReadInterface> CallFunc_GetEquippedItem_self_CastInput, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetLightweightRoot_bSuccess, class USkeletalMeshComponent* CallFunc_GetLightweightRoot_Root)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_Trail_Equipped_C", "GetItemMesh");

	Params::UAnimNotifyState_Trail_Equipped_C_GetItemMesh_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedItem_self_CastInput = CallFunc_GetEquippedItem_self_CastInput;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLightweightRoot_bSuccess = CallFunc_GetLightweightRoot_bSuccess;
	Parms.CallFunc_GetLightweightRoot_Root = CallFunc_GetLightweightRoot_Root;

	UObject::ProcessEvent(Func, &Parms);

	if (SkeletalMeshRoot != nullptr)
		*SkeletalMeshRoot = Parms.SkeletalMeshRoot;

	if (ItemId != nullptr)
		*ItemId = std::move(Parms.ItemId);

}


// Function AnimNotifyState_Trail_Equipped.AnimNotifyState_Trail_Equipped_C.Received_NotifyEnd
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Particle                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>   ParticleArray                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerCharacter*         K2Node_DynamicCast_AsNWXPlayer_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAnimNotifyState_Trail_Equipped_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UNiagaraComponent* Particle, const TArray<class UNiagaraComponent*>& ParticleArray, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_Trail_Equipped_C", "Received_NotifyEnd");

	Params::UAnimNotifyState_Trail_Equipped_C_Received_NotifyEnd_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.Particle = Particle;
	Parms.ParticleArray = ParticleArray;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Character = K2Node_DynamicCast_AsNWXPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnimNotifyState_Trail_Equipped.AnimNotifyState_Trail_Equipped_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              FrameDeltaTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAnimNotifyState_Trail_Equipped_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_Trail_Equipped_C", "Received_NotifyTick");

	Params::UAnimNotifyState_Trail_Equipped_C_Received_NotifyTick_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.EventReference = EventReference;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnimNotifyState_Trail_Equipped.AnimNotifyState_Trail_Equipped_C.Received_NotifyBegin
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerCharacter*         K2Node_DynamicCast_AsNWXPlayer_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAnimNotifyState_Trail_Equipped_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class UNiagaraComponent* NiagaraSystem, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_Trail_Equipped_C", "Received_NotifyBegin");

	Params::UAnimNotifyState_Trail_Equipped_C_Received_NotifyBegin_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = EventReference;
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Character = K2Node_DynamicCast_AsNWXPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


