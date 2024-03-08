#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_Rock.BP_Projectile_Rock_C
// (Actor)

class UClass* ABP_Projectile_Rock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_Rock_C");

	return Clss;
}


// BP_Projectile_Rock_C BP_Projectile_Rock.Default__BP_Projectile_Rock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_Rock_C* ABP_Projectile_Rock_C::GetDefaultObj()
{
	static class ABP_Projectile_Rock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_Rock_C*>(ABP_Projectile_Rock_C::StaticClass()->DefaultObject);

	return Default;
}

}


