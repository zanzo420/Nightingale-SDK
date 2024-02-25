#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimB_FP_Sling_Bow.AnimB_FP_Sling_Bow_C
// (None)

class UClass* UAnimB_FP_Sling_Bow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimB_FP_Sling_Bow_C");

	return Clss;
}


// AnimB_FP_Sling_Bow_C AnimB_FP_Sling_Bow.Default__AnimB_FP_Sling_Bow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimB_FP_Sling_Bow_C* UAnimB_FP_Sling_Bow_C::GetDefaultObj()
{
	static class UAnimB_FP_Sling_Bow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimB_FP_Sling_Bow_C*>(UAnimB_FP_Sling_Bow_C::StaticClass()->DefaultObject);

	return Default;
}

}


