#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TargetPoint_PuzzleMemory_Center.BP_TargetPoint_PuzzleMemory_Center_C
// (Actor)

class UClass* ABP_TargetPoint_PuzzleMemory_Center_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TargetPoint_PuzzleMemory_Center_C");

	return Clss;
}


// BP_TargetPoint_PuzzleMemory_Center_C BP_TargetPoint_PuzzleMemory_Center.Default__BP_TargetPoint_PuzzleMemory_Center_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TargetPoint_PuzzleMemory_Center_C* ABP_TargetPoint_PuzzleMemory_Center_C::GetDefaultObj()
{
	static class ABP_TargetPoint_PuzzleMemory_Center_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TargetPoint_PuzzleMemory_Center_C*>(ABP_TargetPoint_PuzzleMemory_Center_C::StaticClass()->DefaultObject);

	return Default;
}

}


