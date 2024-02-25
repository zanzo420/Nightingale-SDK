#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Volume_Glyph_HECU.BP_Volume_Glyph_HECU_C
// (Actor)

class UClass* ABP_Volume_Glyph_HECU_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Volume_Glyph_HECU_C");

	return Clss;
}


// BP_Volume_Glyph_HECU_C BP_Volume_Glyph_HECU.Default__BP_Volume_Glyph_HECU_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Volume_Glyph_HECU_C* ABP_Volume_Glyph_HECU_C::GetDefaultObj()
{
	static class ABP_Volume_Glyph_HECU_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Volume_Glyph_HECU_C*>(ABP_Volume_Glyph_HECU_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Volume_Glyph_HECU.BP_Volume_Glyph_HECU_C.ExecuteUbergraph_BP_Volume_Glyph_HECU
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Volume_Glyph_HECU_C::ExecuteUbergraph_BP_Volume_Glyph_HECU(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Volume_Glyph_HECU_C", "ExecuteUbergraph_BP_Volume_Glyph_HECU");

	Params::ABP_Volume_Glyph_HECU_C_ExecuteUbergraph_BP_Volume_Glyph_HECU_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


