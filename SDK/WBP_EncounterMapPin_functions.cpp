#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EncounterMapPin.WBP_EncounterMapPin_C
// (None)

class UClass* UWBP_EncounterMapPin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EncounterMapPin_C");

	return Clss;
}


// WBP_EncounterMapPin_C WBP_EncounterMapPin.Default__WBP_EncounterMapPin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EncounterMapPin_C* UWBP_EncounterMapPin_C::GetDefaultObj()
{
	static class UWBP_EncounterMapPin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EncounterMapPin_C*>(UWBP_EncounterMapPin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_EncounterMapPin.WBP_EncounterMapPin_C.TryGet Encounter Status Enum
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEncounterStatus        EncountStatusEnum                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterProgressTracker*   EncounterProgressTracker                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterProgressTracker*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Parse_StringToGuid_OutGuid                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Parse_StringToGuid_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterDynamicData       CallFunc_TryGetEncounterDynamicData_OutData                      (None)
// bool                               CallFunc_TryGetEncounterDynamicData_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncounterMapPin_C::TryGet_Encounter_Status_Enum(enum class EEncounterStatus* EncountStatusEnum, bool* Success, class UEncounterProgressTracker* EncounterProgressTracker, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UEncounterProgressTracker* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_Parse_StringToGuid_OutGuid, bool CallFunc_Parse_StringToGuid_Success, const struct FEncounterDynamicData& CallFunc_TryGetEncounterDynamicData_OutData, bool CallFunc_TryGetEncounterDynamicData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterMapPin_C", "TryGet Encounter Status Enum");

	Params::UWBP_EncounterMapPin_C_TryGet_Encounter_Status_Enum_Params Parms{};

	Parms.EncounterProgressTracker = EncounterProgressTracker;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Parse_StringToGuid_OutGuid = CallFunc_Parse_StringToGuid_OutGuid;
	Parms.CallFunc_Parse_StringToGuid_Success = CallFunc_Parse_StringToGuid_Success;
	Parms.CallFunc_TryGetEncounterDynamicData_OutData = CallFunc_TryGetEncounterDynamicData_OutData;
	Parms.CallFunc_TryGetEncounterDynamicData_ReturnValue = CallFunc_TryGetEncounterDynamicData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EncountStatusEnum != nullptr)
		*EncountStatusEnum = Parms.EncountStatusEnum;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function WBP_EncounterMapPin.WBP_EncounterMapPin_C.Get Encounter State Text
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEncounterStatus        Enumerator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        StateString                                                      (Parm, OutParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterStatusDataRow     CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncounterMapPin_C::Get_Encounter_State_Text(enum class EEncounterStatus Enumerator, class FText* StateString, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FEncounterStatusDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterMapPin_C", "Get Encounter State Text");

	Params::UWBP_EncounterMapPin_C_Get_Encounter_State_Text_Params Parms{};

	Parms.Enumerator = Enumerator;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (StateString != nullptr)
		*StateString = Parms.StateString;

}


// Function WBP_EncounterMapPin.WBP_EncounterMapPin_C.GetTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Tooltip_EncounterMapMarker_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMapWaypointInfo            CallFunc_GetMapPinInfo_ReturnValue                               (None)
// class FText                        CallFunc_Get_Encounter_State_Text_StateString                    (None)
// class FText                        CallFunc_Conv_VectorToText_ReturnValue                           (None)

class UWidget* UWBP_EncounterMapPin_C::GetTooltipWidget(class UWBP_Tooltip_EncounterMapMarker_C* CallFunc_Create_ReturnValue, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, class FText CallFunc_Get_Encounter_State_Text_StateString, class FText CallFunc_Conv_VectorToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterMapPin_C", "GetTooltipWidget");

	Params::UWBP_EncounterMapPin_C_GetTooltipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetMapPinInfo_ReturnValue = CallFunc_GetMapPinInfo_ReturnValue;
	Parms.CallFunc_Get_Encounter_State_Text_StateString = CallFunc_Get_Encounter_State_Text_StateString;
	Parms.CallFunc_Conv_VectorToText_ReturnValue = CallFunc_Conv_VectorToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_EncounterMapPin.WBP_EncounterMapPin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_EncounterMapPin_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterMapPin_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncounterMapPin.WBP_EncounterMapPin_C.ExecuteUbergraph_WBP_EncounterMapPin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterStatus        CallFunc_TryGet_Encounter_Status_Enum_EncountStatusEnum          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGet_Encounter_Status_Enum_Success                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncounterMapPin_C::ExecuteUbergraph_WBP_EncounterMapPin(int32 EntryPoint, enum class EEncounterStatus CallFunc_TryGet_Encounter_Status_Enum_EncountStatusEnum, bool CallFunc_TryGet_Encounter_Status_Enum_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterMapPin_C", "ExecuteUbergraph_WBP_EncounterMapPin");

	Params::UWBP_EncounterMapPin_C_ExecuteUbergraph_WBP_EncounterMapPin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGet_Encounter_Status_Enum_EncountStatusEnum = CallFunc_TryGet_Encounter_Status_Enum_EncountStatusEnum;
	Parms.CallFunc_TryGet_Encounter_Status_Enum_Success = CallFunc_TryGet_Encounter_Status_Enum_Success;

	UObject::ProcessEvent(Func, &Parms);

}

}


