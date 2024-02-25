#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipSickle.GE_EquipSickle_C
// (None)

class UClass* UGE_EquipSickle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipSickle_C");

	return Clss;
}


// GE_EquipSickle_C GE_EquipSickle.Default__GE_EquipSickle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipSickle_C* UGE_EquipSickle_C::GetDefaultObj()
{
	static class UGE_EquipSickle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipSickle_C*>(UGE_EquipSickle_C::StaticClass()->DefaultObject);

	return Default;
}

}


