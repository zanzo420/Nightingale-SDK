#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FaeAssassinReturningBladeCooldownRight.GE_FaeAssassinReturningBladeCooldownRight_C
// (None)

class UClass* UGE_FaeAssassinReturningBladeCooldownRight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FaeAssassinReturningBladeCooldownRight_C");

	return Clss;
}


// GE_FaeAssassinReturningBladeCooldownRight_C GE_FaeAssassinReturningBladeCooldownRight.Default__GE_FaeAssassinReturningBladeCooldownRight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FaeAssassinReturningBladeCooldownRight_C* UGE_FaeAssassinReturningBladeCooldownRight_C::GetDefaultObj()
{
	static class UGE_FaeAssassinReturningBladeCooldownRight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FaeAssassinReturningBladeCooldownRight_C*>(UGE_FaeAssassinReturningBladeCooldownRight_C::StaticClass()->DefaultObject);

	return Default;
}

}


