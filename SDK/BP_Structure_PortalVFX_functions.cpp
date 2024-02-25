#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_PortalVFX.BP_Structure_PortalVFX_C
// (Actor)

class UClass* ABP_Structure_PortalVFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_PortalVFX_C");

	return Clss;
}


// BP_Structure_PortalVFX_C BP_Structure_PortalVFX.Default__BP_Structure_PortalVFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_PortalVFX_C* ABP_Structure_PortalVFX_C::GetDefaultObj()
{
	static class ABP_Structure_PortalVFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_PortalVFX_C*>(ABP_Structure_PortalVFX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_PortalVFX.BP_Structure_PortalVFX_C.ShouldOptOutOfPersistenceStore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_PortalVFX_C::ShouldOptOutOfPersistenceStore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_PortalVFX_C", "ShouldOptOutOfPersistenceStore");

	Params::ABP_Structure_PortalVFX_C_ShouldOptOutOfPersistenceStore_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_PortalVFX.BP_Structure_PortalVFX_C.OnLinkedReferencesRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_PortalVFX_C::OnLinkedReferencesRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_PortalVFX_C", "OnLinkedReferencesRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_PortalVFX.BP_Structure_PortalVFX_C.OnPersistentDataRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_PortalVFX_C::OnPersistentDataRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_PortalVFX_C", "OnPersistentDataRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_PortalVFX.BP_Structure_PortalVFX_C.ExecuteUbergraph_BP_Structure_PortalVFX
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_PortalVFX_C::ExecuteUbergraph_BP_Structure_PortalVFX(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_PortalVFX_C", "ExecuteUbergraph_BP_Structure_PortalVFX");

	Params::ABP_Structure_PortalVFX_C_ExecuteUbergraph_BP_Structure_PortalVFX_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


