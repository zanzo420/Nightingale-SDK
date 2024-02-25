#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructurePartProxy.BP_StructurePartProxy_C
// (Actor)

class UClass* ABP_StructurePartProxy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructurePartProxy_C");

	return Clss;
}


// BP_StructurePartProxy_C BP_StructurePartProxy.Default__BP_StructurePartProxy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StructurePartProxy_C* ABP_StructurePartProxy_C::GetDefaultObj()
{
	static class ABP_StructurePartProxy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StructurePartProxy_C*>(ABP_StructurePartProxy_C::StaticClass()->DefaultObject);

	return Default;
}

}


