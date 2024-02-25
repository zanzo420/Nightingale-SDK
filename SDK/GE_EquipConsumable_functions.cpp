#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipConsumable.GE_EquipConsumable_C
// (None)

class UClass* UGE_EquipConsumable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipConsumable_C");

	return Clss;
}


// GE_EquipConsumable_C GE_EquipConsumable.Default__GE_EquipConsumable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipConsumable_C* UGE_EquipConsumable_C::GetDefaultObj()
{
	static class UGE_EquipConsumable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipConsumable_C*>(UGE_EquipConsumable_C::StaticClass()->DefaultObject);

	return Default;
}

}


