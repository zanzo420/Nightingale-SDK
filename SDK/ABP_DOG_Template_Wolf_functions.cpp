#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_DOG_Template_Wolf.ABP_DOG_Template_Wolf_C
// (None)

class UClass* UABP_DOG_Template_Wolf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_DOG_Template_Wolf_C");

	return Clss;
}


// ABP_DOG_Template_Wolf_C ABP_DOG_Template_Wolf.Default__ABP_DOG_Template_Wolf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_DOG_Template_Wolf_C* UABP_DOG_Template_Wolf_C::GetDefaultObj()
{
	static class UABP_DOG_Template_Wolf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_DOG_Template_Wolf_C*>(UABP_DOG_Template_Wolf_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_DOG_Template_Wolf.ABP_DOG_Template_Wolf_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DOG_Template_Wolf_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DOG_Template_Wolf_C", "BlueprintUpdateAnimation");

	Params::UABP_DOG_Template_Wolf_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_DOG_Template_Wolf.ABP_DOG_Template_Wolf_C.ExecuteUbergraph_ABP_DOG_Template_Wolf
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DOG_Template_Wolf_C::ExecuteUbergraph_ABP_DOG_Template_Wolf(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DOG_Template_Wolf_C", "ExecuteUbergraph_ABP_DOG_Template_Wolf");

	Params::UABP_DOG_Template_Wolf_C_ExecuteUbergraph_ABP_DOG_Template_Wolf_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


