#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Fibre_Station_Template_Fibre_Station01.ABP_Fibre_Station_Template_Fibre_Station01_C
// (None)

class UClass* UABP_Fibre_Station_Template_Fibre_Station01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Fibre_Station_Template_Fibre_Station01_C");

	return Clss;
}


// ABP_Fibre_Station_Template_Fibre_Station01_C ABP_Fibre_Station_Template_Fibre_Station01.Default__ABP_Fibre_Station_Template_Fibre_Station01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Fibre_Station_Template_Fibre_Station01_C* UABP_Fibre_Station_Template_Fibre_Station01_C::GetDefaultObj()
{
	static class UABP_Fibre_Station_Template_Fibre_Station01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Fibre_Station_Template_Fibre_Station01_C*>(UABP_Fibre_Station_Template_Fibre_Station01_C::StaticClass()->DefaultObject);

	return Default;
}

}


