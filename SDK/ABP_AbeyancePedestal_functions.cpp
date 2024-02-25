#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_AbeyancePedestal.ABP_AbeyancePedestal_C
// (None)

class UClass* UABP_AbeyancePedestal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_AbeyancePedestal_C");

	return Clss;
}


// ABP_AbeyancePedestal_C ABP_AbeyancePedestal.Default__ABP_AbeyancePedestal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_AbeyancePedestal_C* UABP_AbeyancePedestal_C::GetDefaultObj()
{
	static class UABP_AbeyancePedestal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_AbeyancePedestal_C*>(UABP_AbeyancePedestal_C::StaticClass()->DefaultObject);

	return Default;
}

}


