#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Button_Clear.CS_Button_Clear_C
// (None)

class UClass* UCS_Button_Clear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Button_Clear_C");

	return Clss;
}


// CS_Button_Clear_C CS_Button_Clear.Default__CS_Button_Clear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Button_Clear_C* UCS_Button_Clear_C::GetDefaultObj()
{
	static class UCS_Button_Clear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Button_Clear_C*>(UCS_Button_Clear_C::StaticClass()->DefaultObject);

	return Default;
}

}


