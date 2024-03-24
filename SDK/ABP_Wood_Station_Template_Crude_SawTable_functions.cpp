#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Wood_Station_Template_Crude_SawTable.ABP_Wood_Station_Template_Crude_SawTable_C
// (None)

class UClass* UABP_Wood_Station_Template_Crude_SawTable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Wood_Station_Template_Crude_SawTable_C");

	return Clss;
}


// ABP_Wood_Station_Template_Crude_SawTable_C ABP_Wood_Station_Template_Crude_SawTable.Default__ABP_Wood_Station_Template_Crude_SawTable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Wood_Station_Template_Crude_SawTable_C* UABP_Wood_Station_Template_Crude_SawTable_C::GetDefaultObj()
{
	static class UABP_Wood_Station_Template_Crude_SawTable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Wood_Station_Template_Crude_SawTable_C*>(UABP_Wood_Station_Template_Crude_SawTable_C::StaticClass()->DefaultObject);

	return Default;
}

}


