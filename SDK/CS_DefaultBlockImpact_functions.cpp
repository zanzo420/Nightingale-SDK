#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_DefaultBlockImpact.CS_DefaultBlockImpact_C
// (None)

class UClass* UCS_DefaultBlockImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_DefaultBlockImpact_C");

	return Clss;
}


// CS_DefaultBlockImpact_C CS_DefaultBlockImpact.Default__CS_DefaultBlockImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_DefaultBlockImpact_C* UCS_DefaultBlockImpact_C::GetDefaultObj()
{
	static class UCS_DefaultBlockImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_DefaultBlockImpact_C*>(UCS_DefaultBlockImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


