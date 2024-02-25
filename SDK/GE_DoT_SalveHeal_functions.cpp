#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DoT_SalveHeal.GE_DoT_SalveHeal_C
// (None)

class UClass* UGE_DoT_SalveHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DoT_SalveHeal_C");

	return Clss;
}


// GE_DoT_SalveHeal_C GE_DoT_SalveHeal.Default__GE_DoT_SalveHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DoT_SalveHeal_C* UGE_DoT_SalveHeal_C::GetDefaultObj()
{
	static class UGE_DoT_SalveHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DoT_SalveHeal_C*>(UGE_DoT_SalveHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


