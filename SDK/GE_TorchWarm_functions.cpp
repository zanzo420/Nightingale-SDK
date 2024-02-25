#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TorchWarm.GE_TorchWarm_C
// (None)

class UClass* UGE_TorchWarm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TorchWarm_C");

	return Clss;
}


// GE_TorchWarm_C GE_TorchWarm.Default__GE_TorchWarm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TorchWarm_C* UGE_TorchWarm_C::GetDefaultObj()
{
	static class UGE_TorchWarm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TorchWarm_C*>(UGE_TorchWarm_C::StaticClass()->DefaultObject);

	return Default;
}

}


