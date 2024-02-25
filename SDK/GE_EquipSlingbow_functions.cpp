#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipSlingbow.GE_EquipSlingbow_C
// (None)

class UClass* UGE_EquipSlingbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipSlingbow_C");

	return Clss;
}


// GE_EquipSlingbow_C GE_EquipSlingbow.Default__GE_EquipSlingbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipSlingbow_C* UGE_EquipSlingbow_C::GetDefaultObj()
{
	static class UGE_EquipSlingbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipSlingbow_C*>(UGE_EquipSlingbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


