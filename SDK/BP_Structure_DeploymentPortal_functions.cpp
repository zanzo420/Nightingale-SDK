#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_DeploymentPortal.BP_Structure_DeploymentPortal_C
// (Actor)

class UClass* ABP_Structure_DeploymentPortal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_DeploymentPortal_C");

	return Clss;
}


// BP_Structure_DeploymentPortal_C BP_Structure_DeploymentPortal.Default__BP_Structure_DeploymentPortal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_DeploymentPortal_C* ABP_Structure_DeploymentPortal_C::GetDefaultObj()
{
	static class ABP_Structure_DeploymentPortal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_DeploymentPortal_C*>(ABP_Structure_DeploymentPortal_C::StaticClass()->DefaultObject);

	return Default;
}

}


