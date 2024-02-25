#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_BOX_FaeToolbox.ABP_BOX_FaeToolbox_C
// (None)

class UClass* UABP_BOX_FaeToolbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_BOX_FaeToolbox_C");

	return Clss;
}


// ABP_BOX_FaeToolbox_C ABP_BOX_FaeToolbox.Default__ABP_BOX_FaeToolbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_BOX_FaeToolbox_C* UABP_BOX_FaeToolbox_C::GetDefaultObj()
{
	static class UABP_BOX_FaeToolbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_BOX_FaeToolbox_C*>(UABP_BOX_FaeToolbox_C::StaticClass()->DefaultObject);

	return Default;
}

}


