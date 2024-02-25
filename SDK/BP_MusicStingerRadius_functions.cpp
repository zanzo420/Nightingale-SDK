#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MusicStingerRadius.BP_MusicStingerRadius_C
// (Actor)

class UClass* ABP_MusicStingerRadius_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MusicStingerRadius_C");

	return Clss;
}


// BP_MusicStingerRadius_C BP_MusicStingerRadius.Default__BP_MusicStingerRadius_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MusicStingerRadius_C* ABP_MusicStingerRadius_C::GetDefaultObj()
{
	static class ABP_MusicStingerRadius_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MusicStingerRadius_C*>(ABP_MusicStingerRadius_C::StaticClass()->DefaultObject);

	return Default;
}

}


