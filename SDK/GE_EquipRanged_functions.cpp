#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipRanged.GE_EquipRanged_C
// (None)

class UClass* UGE_EquipRanged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipRanged_C");

	return Clss;
}


// GE_EquipRanged_C GE_EquipRanged.Default__GE_EquipRanged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipRanged_C* UGE_EquipRanged_C::GetDefaultObj()
{
	static class UGE_EquipRanged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipRanged_C*>(UGE_EquipRanged_C::StaticClass()->DefaultObject);

	return Default;
}

}


