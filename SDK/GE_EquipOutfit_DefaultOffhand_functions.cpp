#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipOutfit_DefaultOffhand.GE_EquipOutfit_DefaultOffhand_C
// (None)

class UClass* UGE_EquipOutfit_DefaultOffhand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipOutfit_DefaultOffhand_C");

	return Clss;
}


// GE_EquipOutfit_DefaultOffhand_C GE_EquipOutfit_DefaultOffhand.Default__GE_EquipOutfit_DefaultOffhand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipOutfit_DefaultOffhand_C* UGE_EquipOutfit_DefaultOffhand_C::GetDefaultObj()
{
	static class UGE_EquipOutfit_DefaultOffhand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipOutfit_DefaultOffhand_C*>(UGE_EquipOutfit_DefaultOffhand_C::StaticClass()->DefaultObject);

	return Default;
}

}


