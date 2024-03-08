#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RangedImpact.GE_RangedImpact_C
// (None)

class UClass* UGE_RangedImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RangedImpact_C");

	return Clss;
}


// GE_RangedImpact_C GE_RangedImpact.Default__GE_RangedImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RangedImpact_C* UGE_RangedImpact_C::GetDefaultObj()
{
	static class UGE_RangedImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RangedImpact_C*>(UGE_RangedImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


