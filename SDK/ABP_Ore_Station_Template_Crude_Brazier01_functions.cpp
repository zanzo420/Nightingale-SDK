#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Ore_Station_Template_Crude_Brazier01.ABP_Ore_Station_Template_Crude_Brazier01_C
// (None)

class UClass* UABP_Ore_Station_Template_Crude_Brazier01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Ore_Station_Template_Crude_Brazier01_C");

	return Clss;
}


// ABP_Ore_Station_Template_Crude_Brazier01_C ABP_Ore_Station_Template_Crude_Brazier01.Default__ABP_Ore_Station_Template_Crude_Brazier01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Ore_Station_Template_Crude_Brazier01_C* UABP_Ore_Station_Template_Crude_Brazier01_C::GetDefaultObj()
{
	static class UABP_Ore_Station_Template_Crude_Brazier01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Ore_Station_Template_Crude_Brazier01_C*>(UABP_Ore_Station_Template_Crude_Brazier01_C::StaticClass()->DefaultObject);

	return Default;
}

}


