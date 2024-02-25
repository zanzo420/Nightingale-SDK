#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Wood_Flr_Deco02.BP_Wood_Flr_Deco02_C
// (Actor)

class UClass* ABP_Wood_Flr_Deco02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Wood_Flr_Deco02_C");

	return Clss;
}


// BP_Wood_Flr_Deco02_C BP_Wood_Flr_Deco02.Default__BP_Wood_Flr_Deco02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Wood_Flr_Deco02_C* ABP_Wood_Flr_Deco02_C::GetDefaultObj()
{
	static class ABP_Wood_Flr_Deco02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Wood_Flr_Deco02_C*>(ABP_Wood_Flr_Deco02_C::StaticClass()->DefaultObject);

	return Default;
}

}


