#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MeleeCost.GE_MeleeCost_C
// (None)

class UClass* UGE_MeleeCost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MeleeCost_C");

	return Clss;
}


// GE_MeleeCost_C GE_MeleeCost.Default__GE_MeleeCost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MeleeCost_C* UGE_MeleeCost_C::GetDefaultObj()
{
	static class UGE_MeleeCost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MeleeCost_C*>(UGE_MeleeCost_C::StaticClass()->DefaultObject);

	return Default;
}

}


