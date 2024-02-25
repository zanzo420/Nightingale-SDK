#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Carry.GE_Carry_C
// (None)

class UClass* UGE_Carry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Carry_C");

	return Clss;
}


// GE_Carry_C GE_Carry.Default__GE_Carry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Carry_C* UGE_Carry_C::GetDefaultObj()
{
	static class UGE_Carry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Carry_C*>(UGE_Carry_C::StaticClass()->DefaultObject);

	return Default;
}

}


