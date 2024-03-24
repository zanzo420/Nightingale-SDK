#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ItemGrant_Woodaxe.GE_ItemGrant_Woodaxe_C
// (None)

class UClass* UGE_ItemGrant_Woodaxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ItemGrant_Woodaxe_C");

	return Clss;
}


// GE_ItemGrant_Woodaxe_C GE_ItemGrant_Woodaxe.Default__GE_ItemGrant_Woodaxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ItemGrant_Woodaxe_C* UGE_ItemGrant_Woodaxe_C::GetDefaultObj()
{
	static class UGE_ItemGrant_Woodaxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ItemGrant_Woodaxe_C*>(UGE_ItemGrant_Woodaxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


