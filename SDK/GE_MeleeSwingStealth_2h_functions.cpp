#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MeleeSwingStealth_2h.GE_MeleeSwingStealth_2h_C
// (None)

class UClass* UGE_MeleeSwingStealth_2h_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MeleeSwingStealth_2h_C");

	return Clss;
}


// GE_MeleeSwingStealth_2h_C GE_MeleeSwingStealth_2h.Default__GE_MeleeSwingStealth_2h_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MeleeSwingStealth_2h_C* UGE_MeleeSwingStealth_2h_C::GetDefaultObj()
{
	static class UGE_MeleeSwingStealth_2h_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MeleeSwingStealth_2h_C*>(UGE_MeleeSwingStealth_2h_C::StaticClass()->DefaultObject);

	return Default;
}

}


