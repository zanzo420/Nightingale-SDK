#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FantasticShellGem01.BP_FantasticShellGem01_C
// (Actor)

class UClass* ABP_FantasticShellGem01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FantasticShellGem01_C");

	return Clss;
}


// BP_FantasticShellGem01_C BP_FantasticShellGem01.Default__BP_FantasticShellGem01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FantasticShellGem01_C* ABP_FantasticShellGem01_C::GetDefaultObj()
{
	static class ABP_FantasticShellGem01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FantasticShellGem01_C*>(ABP_FantasticShellGem01_C::StaticClass()->DefaultObject);

	return Default;
}

}


