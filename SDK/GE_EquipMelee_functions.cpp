#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipMelee.GE_EquipMelee_C
// (None)

class UClass* UGE_EquipMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipMelee_C");

	return Clss;
}


// GE_EquipMelee_C GE_EquipMelee.Default__GE_EquipMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipMelee_C* UGE_EquipMelee_C::GetDefaultObj()
{
	static class UGE_EquipMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipMelee_C*>(UGE_EquipMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


