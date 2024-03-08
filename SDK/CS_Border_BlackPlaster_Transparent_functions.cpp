#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Border_BlackPlaster_Transparent.CS_Border_BlackPlaster_Transparent_C
// (None)

class UClass* UCS_Border_BlackPlaster_Transparent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Border_BlackPlaster_Transparent_C");

	return Clss;
}


// CS_Border_BlackPlaster_Transparent_C CS_Border_BlackPlaster_Transparent.Default__CS_Border_BlackPlaster_Transparent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Border_BlackPlaster_Transparent_C* UCS_Border_BlackPlaster_Transparent_C::GetDefaultObj()
{
	static class UCS_Border_BlackPlaster_Transparent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Border_BlackPlaster_Transparent_C*>(UCS_Border_BlackPlaster_Transparent_C::StaticClass()->DefaultObject);

	return Default;
}

}


