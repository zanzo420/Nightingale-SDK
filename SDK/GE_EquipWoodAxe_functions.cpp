#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipWoodAxe.GE_EquipWoodAxe_C
// (None)

class UClass* UGE_EquipWoodAxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipWoodAxe_C");

	return Clss;
}


// GE_EquipWoodAxe_C GE_EquipWoodAxe.Default__GE_EquipWoodAxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipWoodAxe_C* UGE_EquipWoodAxe_C::GetDefaultObj()
{
	static class UGE_EquipWoodAxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipWoodAxe_C*>(UGE_EquipWoodAxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


