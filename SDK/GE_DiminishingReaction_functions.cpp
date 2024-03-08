#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DiminishingReaction.GE_DiminishingReaction_C
// (None)

class UClass* UGE_DiminishingReaction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DiminishingReaction_C");

	return Clss;
}


// GE_DiminishingReaction_C GE_DiminishingReaction.Default__GE_DiminishingReaction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DiminishingReaction_C* UGE_DiminishingReaction_C::GetDefaultObj()
{
	static class UGE_DiminishingReaction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DiminishingReaction_C*>(UGE_DiminishingReaction_C::StaticClass()->DefaultObject);

	return Default;
}

}


