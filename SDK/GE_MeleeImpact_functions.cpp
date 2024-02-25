#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MeleeImpact.GE_MeleeImpact_C
// (None)

class UClass* UGE_MeleeImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MeleeImpact_C");

	return Clss;
}


// GE_MeleeImpact_C GE_MeleeImpact.Default__GE_MeleeImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MeleeImpact_C* UGE_MeleeImpact_C::GetDefaultObj()
{
	static class UGE_MeleeImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MeleeImpact_C*>(UGE_MeleeImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


