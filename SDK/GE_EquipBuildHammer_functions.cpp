#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipBuildHammer.GE_EquipBuildHammer_C
// (None)

class UClass* UGE_EquipBuildHammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipBuildHammer_C");

	return Clss;
}


// GE_EquipBuildHammer_C GE_EquipBuildHammer.Default__GE_EquipBuildHammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipBuildHammer_C* UGE_EquipBuildHammer_C::GetDefaultObj()
{
	static class UGE_EquipBuildHammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipBuildHammer_C*>(UGE_EquipBuildHammer_C::StaticClass()->DefaultObject);

	return Default;
}

}


