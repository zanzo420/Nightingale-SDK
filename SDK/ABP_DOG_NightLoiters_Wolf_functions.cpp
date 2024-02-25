#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_DOG_NightLoiters_Wolf.ABP_DOG_NightLoiters_Wolf_C
// (None)

class UClass* UABP_DOG_NightLoiters_Wolf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_DOG_NightLoiters_Wolf_C");

	return Clss;
}


// ABP_DOG_NightLoiters_Wolf_C ABP_DOG_NightLoiters_Wolf.Default__ABP_DOG_NightLoiters_Wolf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_DOG_NightLoiters_Wolf_C* UABP_DOG_NightLoiters_Wolf_C::GetDefaultObj()
{
	static class UABP_DOG_NightLoiters_Wolf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_DOG_NightLoiters_Wolf_C*>(UABP_DOG_NightLoiters_Wolf_C::StaticClass()->DefaultObject);

	return Default;
}

}


