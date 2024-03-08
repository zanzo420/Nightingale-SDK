#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ProjectilePassThrough_FaeReturningBlade.GA_ProjectilePassThrough_FaeReturningBlade_C
// (None)

class UClass* UGA_ProjectilePassThrough_FaeReturningBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ProjectilePassThrough_FaeReturningBlade_C");

	return Clss;
}


// GA_ProjectilePassThrough_FaeReturningBlade_C GA_ProjectilePassThrough_FaeReturningBlade.Default__GA_ProjectilePassThrough_FaeReturningBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ProjectilePassThrough_FaeReturningBlade_C* UGA_ProjectilePassThrough_FaeReturningBlade_C::GetDefaultObj()
{
	static class UGA_ProjectilePassThrough_FaeReturningBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ProjectilePassThrough_FaeReturningBlade_C*>(UGA_ProjectilePassThrough_FaeReturningBlade_C::StaticClass()->DefaultObject);

	return Default;
}

}


