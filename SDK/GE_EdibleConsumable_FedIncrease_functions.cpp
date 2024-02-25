#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EdibleConsumable_FedIncrease.GE_EdibleConsumable_FedIncrease_C
// (None)

class UClass* UGE_EdibleConsumable_FedIncrease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EdibleConsumable_FedIncrease_C");

	return Clss;
}


// GE_EdibleConsumable_FedIncrease_C GE_EdibleConsumable_FedIncrease.Default__GE_EdibleConsumable_FedIncrease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EdibleConsumable_FedIncrease_C* UGE_EdibleConsumable_FedIncrease_C::GetDefaultObj()
{
	static class UGE_EdibleConsumable_FedIncrease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EdibleConsumable_FedIncrease_C*>(UGE_EdibleConsumable_FedIncrease_C::StaticClass()->DefaultObject);

	return Default;
}

}


