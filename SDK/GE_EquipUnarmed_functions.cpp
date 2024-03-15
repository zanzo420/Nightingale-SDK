#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipUnarmed.GE_EquipUnarmed_C
// (None)

class UClass* UGE_EquipUnarmed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipUnarmed_C");

	return Clss;
}


// GE_EquipUnarmed_C GE_EquipUnarmed.Default__GE_EquipUnarmed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipUnarmed_C* UGE_EquipUnarmed_C::GetDefaultObj()
{
	static class UGE_EquipUnarmed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipUnarmed_C*>(UGE_EquipUnarmed_C::StaticClass()->DefaultObject);

	return Default;
}

}


