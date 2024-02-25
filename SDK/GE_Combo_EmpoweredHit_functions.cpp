#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Combo_EmpoweredHit.GE_Combo_EmpoweredHit_C
// (None)

class UClass* UGE_Combo_EmpoweredHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Combo_EmpoweredHit_C");

	return Clss;
}


// GE_Combo_EmpoweredHit_C GE_Combo_EmpoweredHit.Default__GE_Combo_EmpoweredHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Combo_EmpoweredHit_C* UGE_Combo_EmpoweredHit_C::GetDefaultObj()
{
	static class UGE_Combo_EmpoweredHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Combo_EmpoweredHit_C*>(UGE_Combo_EmpoweredHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


