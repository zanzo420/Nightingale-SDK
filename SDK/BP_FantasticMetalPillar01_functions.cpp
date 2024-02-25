#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FantasticMetalPillar01.BP_FantasticMetalPillar01_C
// (Actor)

class UClass* ABP_FantasticMetalPillar01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FantasticMetalPillar01_C");

	return Clss;
}


// BP_FantasticMetalPillar01_C BP_FantasticMetalPillar01.Default__BP_FantasticMetalPillar01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FantasticMetalPillar01_C* ABP_FantasticMetalPillar01_C::GetDefaultObj()
{
	static class ABP_FantasticMetalPillar01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FantasticMetalPillar01_C*>(ABP_FantasticMetalPillar01_C::StaticClass()->DefaultObject);

	return Default;
}

}


