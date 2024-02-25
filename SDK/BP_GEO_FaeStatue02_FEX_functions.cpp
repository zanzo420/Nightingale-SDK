#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GEO_FaeStatue02_FEX.BP_GEO_FaeStatue02_FEX_C
// (Actor)

class UClass* ABP_GEO_FaeStatue02_FEX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GEO_FaeStatue02_FEX_C");

	return Clss;
}


// BP_GEO_FaeStatue02_FEX_C BP_GEO_FaeStatue02_FEX.Default__BP_GEO_FaeStatue02_FEX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GEO_FaeStatue02_FEX_C* ABP_GEO_FaeStatue02_FEX_C::GetDefaultObj()
{
	static class ABP_GEO_FaeStatue02_FEX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GEO_FaeStatue02_FEX_C*>(ABP_GEO_FaeStatue02_FEX_C::StaticClass()->DefaultObject);

	return Default;
}

}


