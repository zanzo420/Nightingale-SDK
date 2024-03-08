#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ProjectileFlight_FaeReturningBlade.GA_ProjectileFlight_FaeReturningBlade_C
// (None)

class UClass* UGA_ProjectileFlight_FaeReturningBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ProjectileFlight_FaeReturningBlade_C");

	return Clss;
}


// GA_ProjectileFlight_FaeReturningBlade_C GA_ProjectileFlight_FaeReturningBlade.Default__GA_ProjectileFlight_FaeReturningBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ProjectileFlight_FaeReturningBlade_C* UGA_ProjectileFlight_FaeReturningBlade_C::GetDefaultObj()
{
	static class UGA_ProjectileFlight_FaeReturningBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ProjectileFlight_FaeReturningBlade_C*>(UGA_ProjectileFlight_FaeReturningBlade_C::StaticClass()->DefaultObject);

	return Default;
}

}


