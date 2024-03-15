#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureTraitActivator_OnExposed.BP_StructureTraitActivator_OnExposed_C
// (None)

class UClass* UBP_StructureTraitActivator_OnExposed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureTraitActivator_OnExposed_C");

	return Clss;
}


// BP_StructureTraitActivator_OnExposed_C BP_StructureTraitActivator_OnExposed.Default__BP_StructureTraitActivator_OnExposed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureTraitActivator_OnExposed_C* UBP_StructureTraitActivator_OnExposed_C::GetDefaultObj()
{
	static class UBP_StructureTraitActivator_OnExposed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureTraitActivator_OnExposed_C*>(UBP_StructureTraitActivator_OnExposed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureTraitActivator_OnExposed.BP_StructureTraitActivator_OnExposed_C.OnSheltered
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSheltered                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitActivator_OnExposed_C::OnSheltered(bool IsSheltered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_OnExposed_C", "OnSheltered");

	Params::UBP_StructureTraitActivator_OnExposed_C_OnSheltered_Params Parms{};

	Parms.IsSheltered = IsSheltered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_OnExposed.BP_StructureTraitActivator_OnExposed_C.InitializeActivator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureTrait             Trait                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_StructureTraitActivator_OnExposed_C::InitializeActivator(struct FStructureTrait& Trait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_OnExposed_C", "InitializeActivator");

	Params::UBP_StructureTraitActivator_OnExposed_C_InitializeActivator_Params Parms{};

	Parms.Trait = Trait;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_OnExposed.BP_StructureTraitActivator_OnExposed_C.ExecuteUbergraph_BP_StructureTraitActivator_OnExposed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             K2Node_Event_Trait                                               (ConstParm, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_StructureTraitActivator_OnExposed_C::ExecuteUbergraph_BP_StructureTraitActivator_OnExposed(int32 EntryPoint, const struct FStructureTrait& K2Node_Event_Trait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_OnExposed_C", "ExecuteUbergraph_BP_StructureTraitActivator_OnExposed");

	Params::UBP_StructureTraitActivator_OnExposed_C_ExecuteUbergraph_BP_StructureTraitActivator_OnExposed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Trait = K2Node_Event_Trait;

	UObject::ProcessEvent(Func, &Parms);

}

}


