#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StrengthResistanceEvent.GE_StrengthResistanceEvent_C
// (None)

class UClass* UGE_StrengthResistanceEvent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StrengthResistanceEvent_C");

	return Clss;
}


// GE_StrengthResistanceEvent_C GE_StrengthResistanceEvent.Default__GE_StrengthResistanceEvent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StrengthResistanceEvent_C* UGE_StrengthResistanceEvent_C::GetDefaultObj()
{
	static class UGE_StrengthResistanceEvent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StrengthResistanceEvent_C*>(UGE_StrengthResistanceEvent_C::StaticClass()->DefaultObject);

	return Default;
}

}


