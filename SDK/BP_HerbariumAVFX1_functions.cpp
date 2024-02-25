#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HerbariumAVFX1.BP_HerbariumAVFX1_C
// (Actor)

class UClass* ABP_HerbariumAVFX1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HerbariumAVFX1_C");

	return Clss;
}


// BP_HerbariumAVFX1_C BP_HerbariumAVFX1.Default__BP_HerbariumAVFX1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HerbariumAVFX1_C* ABP_HerbariumAVFX1_C::GetDefaultObj()
{
	static class ABP_HerbariumAVFX1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HerbariumAVFX1_C*>(ABP_HerbariumAVFX1_C::StaticClass()->DefaultObject);

	return Default;
}

}


