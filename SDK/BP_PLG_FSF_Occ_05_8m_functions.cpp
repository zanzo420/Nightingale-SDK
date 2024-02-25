#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PLG_FSF_Occ_05_8m.BP_PLG_FSF_Occ_05_8m_C
// (Actor)

class UClass* ABP_PLG_FSF_Occ_05_8m_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PLG_FSF_Occ_05_8m_C");

	return Clss;
}


// BP_PLG_FSF_Occ_05_8m_C BP_PLG_FSF_Occ_05_8m.Default__BP_PLG_FSF_Occ_05_8m_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PLG_FSF_Occ_05_8m_C* ABP_PLG_FSF_Occ_05_8m_C::GetDefaultObj()
{
	static class ABP_PLG_FSF_Occ_05_8m_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PLG_FSF_Occ_05_8m_C*>(ABP_PLG_FSF_Occ_05_8m_C::StaticClass()->DefaultObject);

	return Default;
}

}


