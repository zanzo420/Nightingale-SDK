#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TargetPoint_Buff.BP_TargetPoint_Buff_C
// (Actor)

class UClass* ABP_TargetPoint_Buff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TargetPoint_Buff_C");

	return Clss;
}


// BP_TargetPoint_Buff_C BP_TargetPoint_Buff.Default__BP_TargetPoint_Buff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TargetPoint_Buff_C* ABP_TargetPoint_Buff_C::GetDefaultObj()
{
	static class ABP_TargetPoint_Buff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TargetPoint_Buff_C*>(ABP_TargetPoint_Buff_C::StaticClass()->DefaultObject);

	return Default;
}

}


