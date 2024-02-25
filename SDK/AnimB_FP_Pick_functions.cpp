#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimB_FP_Pick.AnimB_FP_Pick_C
// (None)

class UClass* UAnimB_FP_Pick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimB_FP_Pick_C");

	return Clss;
}


// AnimB_FP_Pick_C AnimB_FP_Pick.Default__AnimB_FP_Pick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimB_FP_Pick_C* UAnimB_FP_Pick_C::GetDefaultObj()
{
	static class UAnimB_FP_Pick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimB_FP_Pick_C*>(UAnimB_FP_Pick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimB_FP_Pick.AnimB_FP_Pick_C.ExecuteUbergraph_AnimB_FP_Pick
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimB_FP_Pick_C::ExecuteUbergraph_AnimB_FP_Pick(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimB_FP_Pick_C", "ExecuteUbergraph_AnimB_FP_Pick");

	Params::UAnimB_FP_Pick_C_ExecuteUbergraph_AnimB_FP_Pick_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


