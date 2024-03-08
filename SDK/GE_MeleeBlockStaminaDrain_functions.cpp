#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MeleeBlockStaminaDrain.GE_MeleeBlockStaminaDrain_C
// (None)

class UClass* UGE_MeleeBlockStaminaDrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MeleeBlockStaminaDrain_C");

	return Clss;
}


// GE_MeleeBlockStaminaDrain_C GE_MeleeBlockStaminaDrain.Default__GE_MeleeBlockStaminaDrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MeleeBlockStaminaDrain_C* UGE_MeleeBlockStaminaDrain_C::GetDefaultObj()
{
	static class UGE_MeleeBlockStaminaDrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MeleeBlockStaminaDrain_C*>(UGE_MeleeBlockStaminaDrain_C::StaticClass()->DefaultObject);

	return Default;
}

}


