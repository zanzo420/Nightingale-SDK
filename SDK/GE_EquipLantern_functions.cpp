#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipLantern.GE_EquipLantern_C
// (None)

class UClass* UGE_EquipLantern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipLantern_C");

	return Clss;
}


// GE_EquipLantern_C GE_EquipLantern.Default__GE_EquipLantern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipLantern_C* UGE_EquipLantern_C::GetDefaultObj()
{
	static class UGE_EquipLantern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipLantern_C*>(UGE_EquipLantern_C::StaticClass()->DefaultObject);

	return Default;
}

}


