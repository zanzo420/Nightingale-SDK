#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_HMB_Template_Fae_Assassin.ABP_HMB_Template_Fae_Assassin_C
// (None)

class UClass* UABP_HMB_Template_Fae_Assassin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_HMB_Template_Fae_Assassin_C");

	return Clss;
}


// ABP_HMB_Template_Fae_Assassin_C ABP_HMB_Template_Fae_Assassin.Default__ABP_HMB_Template_Fae_Assassin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_HMB_Template_Fae_Assassin_C* UABP_HMB_Template_Fae_Assassin_C::GetDefaultObj()
{
	static class UABP_HMB_Template_Fae_Assassin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_HMB_Template_Fae_Assassin_C*>(UABP_HMB_Template_Fae_Assassin_C::StaticClass()->DefaultObject);

	return Default;
}

}


