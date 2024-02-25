#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FRT_HRU_Rubble01.BP_FRT_HRU_Rubble01_C
// (Actor)

class UClass* ABP_FRT_HRU_Rubble01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FRT_HRU_Rubble01_C");

	return Clss;
}


// BP_FRT_HRU_Rubble01_C BP_FRT_HRU_Rubble01.Default__BP_FRT_HRU_Rubble01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FRT_HRU_Rubble01_C* ABP_FRT_HRU_Rubble01_C::GetDefaultObj()
{
	static class ABP_FRT_HRU_Rubble01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FRT_HRU_Rubble01_C*>(ABP_FRT_HRU_Rubble01_C::StaticClass()->DefaultObject);

	return Default;
}

}


