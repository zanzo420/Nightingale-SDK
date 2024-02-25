#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HUM_NAU_WhaleSkeleton02B.BP_HUM_NAU_WhaleSkeleton02B_C
// (Actor)

class UClass* ABP_HUM_NAU_WhaleSkeleton02B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HUM_NAU_WhaleSkeleton02B_C");

	return Clss;
}


// BP_HUM_NAU_WhaleSkeleton02B_C BP_HUM_NAU_WhaleSkeleton02B.Default__BP_HUM_NAU_WhaleSkeleton02B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HUM_NAU_WhaleSkeleton02B_C* ABP_HUM_NAU_WhaleSkeleton02B_C::GetDefaultObj()
{
	static class ABP_HUM_NAU_WhaleSkeleton02B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HUM_NAU_WhaleSkeleton02B_C*>(ABP_HUM_NAU_WhaleSkeleton02B_C::StaticClass()->DefaultObject);

	return Default;
}

}


