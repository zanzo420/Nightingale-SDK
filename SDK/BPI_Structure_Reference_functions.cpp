#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Structure_Reference.BPI_Structure_Reference_C
// (None)

class UClass* IBPI_Structure_Reference_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Structure_Reference_C");

	return Clss;
}


// BPI_Structure_Reference_C BPI_Structure_Reference.Default__BPI_Structure_Reference_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Structure_Reference_C* IBPI_Structure_Reference_C::GetDefaultObj()
{
	static class IBPI_Structure_Reference_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Structure_Reference_C*>(IBPI_Structure_Reference_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Structure_Reference.BPI_Structure_Reference_C.SetStructureRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Structure_Reference_C::SetStructureRef(class AActor* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Structure_Reference_C", "SetStructureRef");

	Params::IBPI_Structure_Reference_C_SetStructureRef_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Structure_Reference.BPI_Structure_Reference_C.GetStructureRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Structure                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Structure_Reference_C::GetStructureRef(class AActor** Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Structure_Reference_C", "GetStructureRef");

	Params::IBPI_Structure_Reference_C_GetStructureRef_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Structure != nullptr)
		*Structure = Parms.Structure;

}

}


