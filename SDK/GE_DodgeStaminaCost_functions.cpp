#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DodgeStaminaCost.GE_DodgeStaminaCost_C
// (None)

class UClass* UGE_DodgeStaminaCost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DodgeStaminaCost_C");

	return Clss;
}


// GE_DodgeStaminaCost_C GE_DodgeStaminaCost.Default__GE_DodgeStaminaCost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DodgeStaminaCost_C* UGE_DodgeStaminaCost_C::GetDefaultObj()
{
	static class UGE_DodgeStaminaCost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DodgeStaminaCost_C*>(UGE_DodgeStaminaCost_C::StaticClass()->DefaultObject);

	return Default;
}

}


