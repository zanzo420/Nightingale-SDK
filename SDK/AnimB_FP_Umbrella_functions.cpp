#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimB_FP_Umbrella.AnimB_FP_Umbrella_C
// (None)

class UClass* UAnimB_FP_Umbrella_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimB_FP_Umbrella_C");

	return Clss;
}


// AnimB_FP_Umbrella_C AnimB_FP_Umbrella.Default__AnimB_FP_Umbrella_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimB_FP_Umbrella_C* UAnimB_FP_Umbrella_C::GetDefaultObj()
{
	static class UAnimB_FP_Umbrella_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimB_FP_Umbrella_C*>(UAnimB_FP_Umbrella_C::StaticClass()->DefaultObject);

	return Default;
}

}


