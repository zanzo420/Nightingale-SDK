#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_BOR_Template_Boar_Adult.ABP_BOR_Template_Boar_Adult_C
// (None)

class UClass* UABP_BOR_Template_Boar_Adult_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_BOR_Template_Boar_Adult_C");

	return Clss;
}


// ABP_BOR_Template_Boar_Adult_C ABP_BOR_Template_Boar_Adult.Default__ABP_BOR_Template_Boar_Adult_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_BOR_Template_Boar_Adult_C* UABP_BOR_Template_Boar_Adult_C::GetDefaultObj()
{
	static class UABP_BOR_Template_Boar_Adult_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_BOR_Template_Boar_Adult_C*>(UABP_BOR_Template_Boar_Adult_C::StaticClass()->DefaultObject);

	return Default;
}

}


