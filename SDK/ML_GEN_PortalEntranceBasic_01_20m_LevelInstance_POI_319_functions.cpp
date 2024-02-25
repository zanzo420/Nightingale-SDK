#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ML_GEN_PortalEntranceBasic_01_20m_LevelInstance_POI_319.ML_GEN_PortalEntranceBasic_01_20m_C
// (Actor)

class UClass* AML_GEN_PortalEntranceBasic_01_20m_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ML_GEN_PortalEntranceBasic_01_20m_C");

	return Clss;
}


// ML_GEN_PortalEntranceBasic_01_20m_C ML_GEN_PortalEntranceBasic_01_20m_LevelInstance_POI_319.Default__ML_GEN_PortalEntranceBasic_01_20m_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AML_GEN_PortalEntranceBasic_01_20m_C* AML_GEN_PortalEntranceBasic_01_20m_C::GetDefaultObj()
{
	static class AML_GEN_PortalEntranceBasic_01_20m_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AML_GEN_PortalEntranceBasic_01_20m_C*>(AML_GEN_PortalEntranceBasic_01_20m_C::StaticClass()->DefaultObject);

	return Default;
}

}


