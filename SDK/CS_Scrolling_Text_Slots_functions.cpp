#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Scrolling_Text_Slots.CS_Scrolling_Text_Slots_C
// (None)

class UClass* UCS_Scrolling_Text_Slots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Scrolling_Text_Slots_C");

	return Clss;
}


// CS_Scrolling_Text_Slots_C CS_Scrolling_Text_Slots.Default__CS_Scrolling_Text_Slots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Scrolling_Text_Slots_C* UCS_Scrolling_Text_Slots_C::GetDefaultObj()
{
	static class UCS_Scrolling_Text_Slots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Scrolling_Text_Slots_C*>(UCS_Scrolling_Text_Slots_C::StaticClass()->DefaultObject);

	return Default;
}

}


