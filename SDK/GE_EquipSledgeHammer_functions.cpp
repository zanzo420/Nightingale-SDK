#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipSledgeHammer.GE_EquipSledgehammer_C
// (None)

class UClass* UGE_EquipSledgehammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipSledgehammer_C");

	return Clss;
}


// GE_EquipSledgehammer_C GE_EquipSledgeHammer.Default__GE_EquipSledgehammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipSledgehammer_C* UGE_EquipSledgehammer_C::GetDefaultObj()
{
	static class UGE_EquipSledgehammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipSledgehammer_C*>(UGE_EquipSledgehammer_C::StaticClass()->DefaultObject);

	return Default;
}

}


