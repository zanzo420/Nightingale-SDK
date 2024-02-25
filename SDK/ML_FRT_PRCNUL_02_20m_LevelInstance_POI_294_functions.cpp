#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ML_FRT_PRCNUL_02_20m_LevelInstance_POI_294.ML_FRT_PRCNUL_02_20m_C
// (Actor)

class UClass* AML_FRT_PRCNUL_02_20m_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ML_FRT_PRCNUL_02_20m_C");

	return Clss;
}


// ML_FRT_PRCNUL_02_20m_C ML_FRT_PRCNUL_02_20m_LevelInstance_POI_294.Default__ML_FRT_PRCNUL_02_20m_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AML_FRT_PRCNUL_02_20m_C* AML_FRT_PRCNUL_02_20m_C::GetDefaultObj()
{
	static class AML_FRT_PRCNUL_02_20m_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AML_FRT_PRCNUL_02_20m_C*>(AML_FRT_PRCNUL_02_20m_C::StaticClass()->DefaultObject);

	return Default;
}

}


