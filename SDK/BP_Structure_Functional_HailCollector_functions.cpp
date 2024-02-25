#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_Functional_HailCollector.BP_Structure_Functional_HailCollector_C
// (Actor)

class UClass* ABP_Structure_Functional_HailCollector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_Functional_HailCollector_C");

	return Clss;
}


// BP_Structure_Functional_HailCollector_C BP_Structure_Functional_HailCollector.Default__BP_Structure_Functional_HailCollector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_Functional_HailCollector_C* ABP_Structure_Functional_HailCollector_C::GetDefaultObj()
{
	static class ABP_Structure_Functional_HailCollector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_Functional_HailCollector_C*>(ABP_Structure_Functional_HailCollector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_Functional_HailCollector.BP_Structure_Functional_HailCollector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_HailCollector_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_HailCollector_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_HailCollector.BP_Structure_Functional_HailCollector_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_HailCollector_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_HailCollector_C", "ReceiveEndPlay");

	Params::ABP_Structure_Functional_HailCollector_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_HailCollector.BP_Structure_Functional_HailCollector_C.WeatherStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WeatherState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_HailCollector_C::WeatherStateChanged(int32 WeatherState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_HailCollector_C", "WeatherStateChanged");

	Params::ABP_Structure_Functional_HailCollector_C_WeatherStateChanged_Params Parms{};

	Parms.WeatherState = WeatherState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_HailCollector.BP_Structure_Functional_HailCollector_C.ExecuteUbergraph_BP_Structure_Functional_HailCollector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureWeatherComponent*  CallFunc_GetStructureWeatherComponent_ReturnValue                (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasWeatheredState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureWeatherComponent*  CallFunc_GetStructureWeatherComponentForModify_ReturnValue       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureWeatherComponent*  CallFunc_GetStructureWeatherComponentForModify_ReturnValue_1     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_WeatherState                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_HailCollector_C::ExecuteUbergraph_BP_Structure_Functional_HailCollector(int32 EntryPoint, class UStructureWeatherComponent* CallFunc_GetStructureWeatherComponent_ReturnValue, bool CallFunc_HasWeatheredState_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasAuthority_ReturnValue, class UStructureWeatherComponent* CallFunc_GetStructureWeatherComponentForModify_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UStructureWeatherComponent* CallFunc_GetStructureWeatherComponentForModify_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_WeatherState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_HailCollector_C", "ExecuteUbergraph_BP_Structure_Functional_HailCollector");

	Params::ABP_Structure_Functional_HailCollector_C_ExecuteUbergraph_BP_Structure_Functional_HailCollector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetStructureWeatherComponent_ReturnValue = CallFunc_GetStructureWeatherComponent_ReturnValue;
	Parms.CallFunc_HasWeatheredState_ReturnValue = CallFunc_HasWeatheredState_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetStructureWeatherComponentForModify_ReturnValue = CallFunc_GetStructureWeatherComponentForModify_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStructureWeatherComponentForModify_ReturnValue_1 = CallFunc_GetStructureWeatherComponentForModify_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_WeatherState = K2Node_CustomEvent_WeatherState;

	UObject::ProcessEvent(Func, &Parms);

}

}


