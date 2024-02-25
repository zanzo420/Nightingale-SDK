#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SupportRulesEnforcer_Wall.BP_SupportRulesEnforcer_Wall_C
// (None)

class UClass* UBP_SupportRulesEnforcer_Wall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SupportRulesEnforcer_Wall_C");

	return Clss;
}


// BP_SupportRulesEnforcer_Wall_C BP_SupportRulesEnforcer_Wall.Default__BP_SupportRulesEnforcer_Wall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SupportRulesEnforcer_Wall_C* UBP_SupportRulesEnforcer_Wall_C::GetDefaultObj()
{
	static class UBP_SupportRulesEnforcer_Wall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SupportRulesEnforcer_Wall_C*>(UBP_SupportRulesEnforcer_Wall_C::StaticClass()->DefaultObject);

	return Default;
}

}


