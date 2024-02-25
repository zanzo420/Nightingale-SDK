#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Structure_GrantInteraction.GE_Structure_GrantInteraction_C
// (None)

class UClass* UGE_Structure_GrantInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Structure_GrantInteraction_C");

	return Clss;
}


// GE_Structure_GrantInteraction_C GE_Structure_GrantInteraction.Default__GE_Structure_GrantInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Structure_GrantInteraction_C* UGE_Structure_GrantInteraction_C::GetDefaultObj()
{
	static class UGE_Structure_GrantInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Structure_GrantInteraction_C*>(UGE_Structure_GrantInteraction_C::StaticClass()->DefaultObject);

	return Default;
}

}


