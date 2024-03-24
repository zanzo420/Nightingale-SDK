#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipGlider.GE_EquipGlider_C
// (None)

class UClass* UGE_EquipGlider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipGlider_C");

	return Clss;
}


// GE_EquipGlider_C GE_EquipGlider.Default__GE_EquipGlider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipGlider_C* UGE_EquipGlider_C::GetDefaultObj()
{
	static class UGE_EquipGlider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipGlider_C*>(UGE_EquipGlider_C::StaticClass()->DefaultObject);

	return Default;
}

}


