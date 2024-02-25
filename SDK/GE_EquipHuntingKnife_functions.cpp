#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipHuntingKnife.GE_EquipHuntingKnife_C
// (None)

class UClass* UGE_EquipHuntingKnife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipHuntingKnife_C");

	return Clss;
}


// GE_EquipHuntingKnife_C GE_EquipHuntingKnife.Default__GE_EquipHuntingKnife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipHuntingKnife_C* UGE_EquipHuntingKnife_C::GetDefaultObj()
{
	static class UGE_EquipHuntingKnife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipHuntingKnife_C*>(UGE_EquipHuntingKnife_C::StaticClass()->DefaultObject);

	return Default;
}

}


