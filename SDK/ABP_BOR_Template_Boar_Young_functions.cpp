#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_BOR_Template_Boar_Young.ABP_BOR_Template_Boar_Young_C
// (None)

class UClass* UABP_BOR_Template_Boar_Young_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_BOR_Template_Boar_Young_C");

	return Clss;
}


// ABP_BOR_Template_Boar_Young_C ABP_BOR_Template_Boar_Young.Default__ABP_BOR_Template_Boar_Young_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_BOR_Template_Boar_Young_C* UABP_BOR_Template_Boar_Young_C::GetDefaultObj()
{
	static class UABP_BOR_Template_Boar_Young_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_BOR_Template_Boar_Young_C*>(UABP_BOR_Template_Boar_Young_C::StaticClass()->DefaultObject);

	return Default;
}

}


