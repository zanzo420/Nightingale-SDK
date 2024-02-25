#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Cooking_Station_Template_Campfire01.ABP_Cooking_Station_Template_Campfire01_C
// (None)

class UClass* UABP_Cooking_Station_Template_Campfire01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Cooking_Station_Template_Campfire01_C");

	return Clss;
}


// ABP_Cooking_Station_Template_Campfire01_C ABP_Cooking_Station_Template_Campfire01.Default__ABP_Cooking_Station_Template_Campfire01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Cooking_Station_Template_Campfire01_C* UABP_Cooking_Station_Template_Campfire01_C::GetDefaultObj()
{
	static class UABP_Cooking_Station_Template_Campfire01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Cooking_Station_Template_Campfire01_C*>(UABP_Cooking_Station_Template_Campfire01_C::StaticClass()->DefaultObject);

	return Default;
}

}


