#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_VFX_Spell_Charge.ANS_VFX_Spell_Charge_C
// (None)

class UClass* UANS_VFX_Spell_Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_VFX_Spell_Charge_C");

	return Clss;
}


// ANS_VFX_Spell_Charge_C ANS_VFX_Spell_Charge.Default__ANS_VFX_Spell_Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_VFX_Spell_Charge_C* UANS_VFX_Spell_Charge_C::GetDefaultObj()
{
	static class UANS_VFX_Spell_Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_VFX_Spell_Charge_C*>(UANS_VFX_Spell_Charge_C::StaticClass()->DefaultObject);

	return Default;
}

}


