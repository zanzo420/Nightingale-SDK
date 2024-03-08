#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ProjectilePayload_NoObstructionCheck.GA_ProjectilePayload_NoObstructionCheck_C
// (None)

class UClass* UGA_ProjectilePayload_NoObstructionCheck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ProjectilePayload_NoObstructionCheck_C");

	return Clss;
}


// GA_ProjectilePayload_NoObstructionCheck_C GA_ProjectilePayload_NoObstructionCheck.Default__GA_ProjectilePayload_NoObstructionCheck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ProjectilePayload_NoObstructionCheck_C* UGA_ProjectilePayload_NoObstructionCheck_C::GetDefaultObj()
{
	static class UGA_ProjectilePayload_NoObstructionCheck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ProjectilePayload_NoObstructionCheck_C*>(UGA_ProjectilePayload_NoObstructionCheck_C::StaticClass()->DefaultObject);

	return Default;
}

}


