#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PerkEffect_VegetarianMoveSpeed.GE_PerkEffect_VegetarianMoveSpeed_C
// (None)

class UClass* UGE_PerkEffect_VegetarianMoveSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PerkEffect_VegetarianMoveSpeed_C");

	return Clss;
}


// GE_PerkEffect_VegetarianMoveSpeed_C GE_PerkEffect_VegetarianMoveSpeed.Default__GE_PerkEffect_VegetarianMoveSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PerkEffect_VegetarianMoveSpeed_C* UGE_PerkEffect_VegetarianMoveSpeed_C::GetDefaultObj()
{
	static class UGE_PerkEffect_VegetarianMoveSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PerkEffect_VegetarianMoveSpeed_C*>(UGE_PerkEffect_VegetarianMoveSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}

