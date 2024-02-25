#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FullHope.GE_FullHope_C
// (None)

class UClass* UGE_FullHope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FullHope_C");

	return Clss;
}


// GE_FullHope_C GE_FullHope.Default__GE_FullHope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FullHope_C* UGE_FullHope_C::GetDefaultObj()
{
	static class UGE_FullHope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FullHope_C*>(UGE_FullHope_C::StaticClass()->DefaultObject);

	return Default;
}

}


