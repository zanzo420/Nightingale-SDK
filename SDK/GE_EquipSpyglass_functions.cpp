#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipSpyglass.GE_EquipSpyglass_C
// (None)

class UClass* UGE_EquipSpyglass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipSpyglass_C");

	return Clss;
}


// GE_EquipSpyglass_C GE_EquipSpyglass.Default__GE_EquipSpyglass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipSpyglass_C* UGE_EquipSpyglass_C::GetDefaultObj()
{
	static class UGE_EquipSpyglass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipSpyglass_C*>(UGE_EquipSpyglass_C::StaticClass()->DefaultObject);

	return Default;
}

}


