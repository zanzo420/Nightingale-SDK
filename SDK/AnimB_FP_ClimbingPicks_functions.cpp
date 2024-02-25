#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimB_FP_ClimbingPicks.AnimB_FP_ClimbingPicks_C
// (None)

class UClass* UAnimB_FP_ClimbingPicks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimB_FP_ClimbingPicks_C");

	return Clss;
}


// AnimB_FP_ClimbingPicks_C AnimB_FP_ClimbingPicks.Default__AnimB_FP_ClimbingPicks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimB_FP_ClimbingPicks_C* UAnimB_FP_ClimbingPicks_C::GetDefaultObj()
{
	static class UAnimB_FP_ClimbingPicks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimB_FP_ClimbingPicks_C*>(UAnimB_FP_ClimbingPicks_C::StaticClass()->DefaultObject);

	return Default;
}

}


