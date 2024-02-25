#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Tooltip_EncounterMapMarker.WBP_Tooltip_EncounterMapMarker_C
// (None)

class UClass* UWBP_Tooltip_EncounterMapMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Tooltip_EncounterMapMarker_C");

	return Clss;
}


// WBP_Tooltip_EncounterMapMarker_C WBP_Tooltip_EncounterMapMarker.Default__WBP_Tooltip_EncounterMapMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Tooltip_EncounterMapMarker_C* UWBP_Tooltip_EncounterMapMarker_C::GetDefaultObj()
{
	static class UWBP_Tooltip_EncounterMapMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Tooltip_EncounterMapMarker_C*>(UWBP_Tooltip_EncounterMapMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Tooltip_EncounterMapMarker.WBP_Tooltip_EncounterMapMarker_C.InitializeView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Tooltip_EncounterMapMarker_C::InitializeView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_EncounterMapMarker_C", "InitializeView");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Tooltip_EncounterMapMarker.WBP_Tooltip_EncounterMapMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Tooltip_EncounterMapMarker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_EncounterMapMarker_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Tooltip_EncounterMapMarker.WBP_Tooltip_EncounterMapMarker_C.ExecuteUbergraph_WBP_Tooltip_EncounterMapMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tooltip_EncounterMapMarker_C::ExecuteUbergraph_WBP_Tooltip_EncounterMapMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_EncounterMapMarker_C", "ExecuteUbergraph_WBP_Tooltip_EncounterMapMarker");

	Params::UWBP_Tooltip_EncounterMapMarker_C_ExecuteUbergraph_WBP_Tooltip_EncounterMapMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


