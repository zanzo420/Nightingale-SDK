#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FRT_WTF_Waterfall01_10m.BP_FRT_WTF_Waterfall01_10m_C
// (Actor)

class UClass* ABP_FRT_WTF_Waterfall01_10m_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FRT_WTF_Waterfall01_10m_C");

	return Clss;
}


// BP_FRT_WTF_Waterfall01_10m_C BP_FRT_WTF_Waterfall01_10m.Default__BP_FRT_WTF_Waterfall01_10m_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FRT_WTF_Waterfall01_10m_C* ABP_FRT_WTF_Waterfall01_10m_C::GetDefaultObj()
{
	static class ABP_FRT_WTF_Waterfall01_10m_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FRT_WTF_Waterfall01_10m_C*>(ABP_FRT_WTF_Waterfall01_10m_C::StaticClass()->DefaultObject);

	return Default;
}

}


