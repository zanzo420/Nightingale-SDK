#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProgressionVolume_Abeyance.BP_ProgressionVolume_Abeyance_C
// (Actor)

class UClass* ABP_ProgressionVolume_Abeyance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProgressionVolume_Abeyance_C");

	return Clss;
}


// BP_ProgressionVolume_Abeyance_C BP_ProgressionVolume_Abeyance.Default__BP_ProgressionVolume_Abeyance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProgressionVolume_Abeyance_C* ABP_ProgressionVolume_Abeyance_C::GetDefaultObj()
{
	static class ABP_ProgressionVolume_Abeyance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProgressionVolume_Abeyance_C*>(ABP_ProgressionVolume_Abeyance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProgressionVolume_Abeyance.BP_ProgressionVolume_Abeyance_C.GetCollisionVolumeChildActorComponent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAwaitableChildActorComponent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UAwaitableChildActorComponent* ABP_ProgressionVolume_Abeyance_C::GetCollisionVolumeChildActorComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProgressionVolume_Abeyance_C", "GetCollisionVolumeChildActorComponent");

	Params::ABP_ProgressionVolume_Abeyance_C_GetCollisionVolumeChildActorComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ProgressionVolume_Abeyance.BP_ProgressionVolume_Abeyance_C.GetImpulseVolumeChildActorComponent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAwaitableChildActorComponent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UAwaitableChildActorComponent* ABP_ProgressionVolume_Abeyance_C::GetImpulseVolumeChildActorComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProgressionVolume_Abeyance_C", "GetImpulseVolumeChildActorComponent");

	Params::ABP_ProgressionVolume_Abeyance_C_GetImpulseVolumeChildActorComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ProgressionVolume_Abeyance.BP_ProgressionVolume_Abeyance_C.GetGameplayEffectVolumeChildActorComponent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAwaitableChildActorComponent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UAwaitableChildActorComponent* ABP_ProgressionVolume_Abeyance_C::GetGameplayEffectVolumeChildActorComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProgressionVolume_Abeyance_C", "GetGameplayEffectVolumeChildActorComponent");

	Params::ABP_ProgressionVolume_Abeyance_C_GetGameplayEffectVolumeChildActorComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


