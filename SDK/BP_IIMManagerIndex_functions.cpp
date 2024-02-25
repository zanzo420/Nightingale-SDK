#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IIMManagerIndex.BP_IIMManagerIndex_C
// (Actor)

class UClass* ABP_IIMManagerIndex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IIMManagerIndex_C");

	return Clss;
}


// BP_IIMManagerIndex_C BP_IIMManagerIndex.Default__BP_IIMManagerIndex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IIMManagerIndex_C* ABP_IIMManagerIndex_C::GetDefaultObj()
{
	static class ABP_IIMManagerIndex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IIMManagerIndex_C*>(ABP_IIMManagerIndex_C::StaticClass()->DefaultObject);

	return Default;
}

}


