#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Curse_InvertedMovementControls.GE_Curse_InvertedMovementControls_C
// (None)

class UClass* UGE_Curse_InvertedMovementControls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Curse_InvertedMovementControls_C");

	return Clss;
}


// GE_Curse_InvertedMovementControls_C GE_Curse_InvertedMovementControls.Default__GE_Curse_InvertedMovementControls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Curse_InvertedMovementControls_C* UGE_Curse_InvertedMovementControls_C::GetDefaultObj()
{
	static class UGE_Curse_InvertedMovementControls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Curse_InvertedMovementControls_C*>(UGE_Curse_InvertedMovementControls_C::StaticClass()->DefaultObject);

	return Default;
}

}

