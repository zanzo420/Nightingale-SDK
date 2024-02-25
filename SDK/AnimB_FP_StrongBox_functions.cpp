#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimB_FP_StrongBox.AnimB_FP_StrongBox_C
// (None)

class UClass* UAnimB_FP_StrongBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimB_FP_StrongBox_C");

	return Clss;
}


// AnimB_FP_StrongBox_C AnimB_FP_StrongBox.Default__AnimB_FP_StrongBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimB_FP_StrongBox_C* UAnimB_FP_StrongBox_C::GetDefaultObj()
{
	static class UAnimB_FP_StrongBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimB_FP_StrongBox_C*>(UAnimB_FP_StrongBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


