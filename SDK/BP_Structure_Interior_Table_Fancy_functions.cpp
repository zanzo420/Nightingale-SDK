#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_Interior_Table_Fancy.BP_Structure_Interior_Table_Fancy_C
// (Actor)

class UClass* ABP_Structure_Interior_Table_Fancy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_Interior_Table_Fancy_C");

	return Clss;
}


// BP_Structure_Interior_Table_Fancy_C BP_Structure_Interior_Table_Fancy.Default__BP_Structure_Interior_Table_Fancy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_Interior_Table_Fancy_C* ABP_Structure_Interior_Table_Fancy_C::GetDefaultObj()
{
	static class ABP_Structure_Interior_Table_Fancy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_Interior_Table_Fancy_C*>(ABP_Structure_Interior_Table_Fancy_C::StaticClass()->DefaultObject);

	return Default;
}

}


