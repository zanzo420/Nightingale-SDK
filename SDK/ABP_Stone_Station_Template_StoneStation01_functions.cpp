#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Stone_Station_Template_StoneStation01.ABP_Stone_Station_Template_StoneStation01_C
// (None)

class UClass* UABP_Stone_Station_Template_StoneStation01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Stone_Station_Template_StoneStation01_C");

	return Clss;
}


// ABP_Stone_Station_Template_StoneStation01_C ABP_Stone_Station_Template_StoneStation01.Default__ABP_Stone_Station_Template_StoneStation01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Stone_Station_Template_StoneStation01_C* UABP_Stone_Station_Template_StoneStation01_C::GetDefaultObj()
{
	static class UABP_Stone_Station_Template_StoneStation01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Stone_Station_Template_StoneStation01_C*>(UABP_Stone_Station_Template_StoneStation01_C::StaticClass()->DefaultObject);

	return Default;
}

}


