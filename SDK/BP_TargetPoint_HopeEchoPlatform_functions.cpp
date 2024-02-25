#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TargetPoint_HopeEchoPlatform.BP_TargetPoint_HopeEchoPlatform_C
// (Actor)

class UClass* ABP_TargetPoint_HopeEchoPlatform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TargetPoint_HopeEchoPlatform_C");

	return Clss;
}


// BP_TargetPoint_HopeEchoPlatform_C BP_TargetPoint_HopeEchoPlatform.Default__BP_TargetPoint_HopeEchoPlatform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TargetPoint_HopeEchoPlatform_C* ABP_TargetPoint_HopeEchoPlatform_C::GetDefaultObj()
{
	static class ABP_TargetPoint_HopeEchoPlatform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TargetPoint_HopeEchoPlatform_C*>(ABP_TargetPoint_HopeEchoPlatform_C::StaticClass()->DefaultObject);

	return Default;
}

}


