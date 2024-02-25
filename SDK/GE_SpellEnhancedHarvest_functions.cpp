#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpellEnhancedHarvest.GE_SpellEnhancedHarvest_C
// (None)

class UClass* UGE_SpellEnhancedHarvest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpellEnhancedHarvest_C");

	return Clss;
}


// GE_SpellEnhancedHarvest_C GE_SpellEnhancedHarvest.Default__GE_SpellEnhancedHarvest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpellEnhancedHarvest_C* UGE_SpellEnhancedHarvest_C::GetDefaultObj()
{
	static class UGE_SpellEnhancedHarvest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpellEnhancedHarvest_C*>(UGE_SpellEnhancedHarvest_C::StaticClass()->DefaultObject);

	return Default;
}

}


