#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPP_FRT_Antiquarian_Exterior.BPP_FRT_Antiquarian_Exterior_C
// (Actor)

class UClass* ABPP_FRT_Antiquarian_Exterior_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPP_FRT_Antiquarian_Exterior_C");

	return Clss;
}


// BPP_FRT_Antiquarian_Exterior_C BPP_FRT_Antiquarian_Exterior.Default__BPP_FRT_Antiquarian_Exterior_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPP_FRT_Antiquarian_Exterior_C* ABPP_FRT_Antiquarian_Exterior_C::GetDefaultObj()
{
	static class ABPP_FRT_Antiquarian_Exterior_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPP_FRT_Antiquarian_Exterior_C*>(ABPP_FRT_Antiquarian_Exterior_C::StaticClass()->DefaultObject);

	return Default;
}

}


