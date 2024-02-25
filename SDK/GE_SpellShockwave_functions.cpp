#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpellShockwave.GE_SpellShockwave_C
// (None)

class UClass* UGE_SpellShockwave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpellShockwave_C");

	return Clss;
}


// GE_SpellShockwave_C GE_SpellShockwave.Default__GE_SpellShockwave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpellShockwave_C* UGE_SpellShockwave_C::GetDefaultObj()
{
	static class UGE_SpellShockwave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpellShockwave_C*>(UGE_SpellShockwave_C::StaticClass()->DefaultObject);

	return Default;
}

}


