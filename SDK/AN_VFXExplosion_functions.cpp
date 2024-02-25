#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_VFXExplosion.AN_VFXExplosion_C
// (None)

class UClass* UAN_VFXExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_VFXExplosion_C");

	return Clss;
}


// AN_VFXExplosion_C AN_VFXExplosion.Default__AN_VFXExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_VFXExplosion_C* UAN_VFXExplosion_C::GetDefaultObj()
{
	static class UAN_VFXExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_VFXExplosion_C*>(UAN_VFXExplosion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_VFXExplosion.AN_VFXExplosion_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_SpawnExplosion_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_NVFX_SpawnExplosion_SpawnedSystem                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

bool UAN_VFXExplosion_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_NVFX_SpawnExplosion_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnExplosion_SpawnedSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_VFXExplosion_C", "Received_Notify");

	Params::UAN_VFXExplosion_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_NVFX_SpawnExplosion_ReturnValue = CallFunc_NVFX_SpawnExplosion_ReturnValue;
	Parms.CallFunc_NVFX_SpawnExplosion_SpawnedSystem = CallFunc_NVFX_SpawnExplosion_SpawnedSystem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


