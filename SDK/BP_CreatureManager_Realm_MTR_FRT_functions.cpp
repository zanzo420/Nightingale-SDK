#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureManager_Realm_MTR_FRT.BP_CreatureManager_Realm_MTR_FRT_C
// (Actor)

class UClass* ABP_CreatureManager_Realm_MTR_FRT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureManager_Realm_MTR_FRT_C");

	return Clss;
}


// BP_CreatureManager_Realm_MTR_FRT_C BP_CreatureManager_Realm_MTR_FRT.Default__BP_CreatureManager_Realm_MTR_FRT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureManager_Realm_MTR_FRT_C* ABP_CreatureManager_Realm_MTR_FRT_C::GetDefaultObj()
{
	static class ABP_CreatureManager_Realm_MTR_FRT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureManager_Realm_MTR_FRT_C*>(ABP_CreatureManager_Realm_MTR_FRT_C::StaticClass()->DefaultObject);

	return Default;
}

}


