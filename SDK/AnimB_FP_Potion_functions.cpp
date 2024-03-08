#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimB_FP_Potion.AnimB_FP_Potion_C
// (None)

class UClass* UAnimB_FP_Potion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimB_FP_Potion_C");

	return Clss;
}


// AnimB_FP_Potion_C AnimB_FP_Potion.Default__AnimB_FP_Potion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimB_FP_Potion_C* UAnimB_FP_Potion_C::GetDefaultObj()
{
	static class UAnimB_FP_Potion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimB_FP_Potion_C*>(UAnimB_FP_Potion_C::StaticClass()->DefaultObject);

	return Default;
}

}


