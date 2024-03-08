#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_AnnouncementBanner.WBP_AnnouncementBanner_C
// (None)

class UClass* UWBP_AnnouncementBanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AnnouncementBanner_C");

	return Clss;
}


// WBP_AnnouncementBanner_C WBP_AnnouncementBanner.Default__WBP_AnnouncementBanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AnnouncementBanner_C* UWBP_AnnouncementBanner_C::GetDefaultObj()
{
	static class UWBP_AnnouncementBanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AnnouncementBanner_C*>(UWBP_AnnouncementBanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_AnnouncementBanner.WBP_AnnouncementBanner_C.Update Announcement Message from String Table
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Announcement_String_ID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Announcement             CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetKeysFromStringTable_ReturnValue                      (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AnnouncementBanner_C::Update_Announcement_Message_from_String_Table(const class FString& Announcement_String_ID, class FText CallFunc_Conv_StringToText_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_Announcement& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FString>& CallFunc_GetKeysFromStringTable_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AnnouncementBanner_C", "Update Announcement Message from String Table");

	Params::UWBP_AnnouncementBanner_C_Update_Announcement_Message_from_String_Table_Params Parms{};

	Parms.Announcement_String_ID = Announcement_String_ID;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetKeysFromStringTable_ReturnValue = CallFunc_GetKeysFromStringTable_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AnnouncementBanner.WBP_AnnouncementBanner_C.HideBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AnnouncementBanner_C::HideBanner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AnnouncementBanner_C", "HideBanner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AnnouncementBanner.WBP_AnnouncementBanner_C.ShowBanner
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsTimerActive                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AnnouncementBanner_C::ShowBanner(bool bIsTimerActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AnnouncementBanner_C", "ShowBanner");

	Params::UWBP_AnnouncementBanner_C_ShowBanner_Params Parms{};

	Parms.bIsTimerActive = bIsTimerActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AnnouncementBanner.WBP_AnnouncementBanner_C.OnAnnouncementMessageReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_AnnouncementBanner_C::OnAnnouncementMessageReceived(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AnnouncementBanner_C", "OnAnnouncementMessageReceived");

	Params::UWBP_AnnouncementBanner_C_OnAnnouncementMessageReceived_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AnnouncementBanner.WBP_AnnouncementBanner_C.ExecuteUbergraph_WBP_AnnouncementBanner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Message                                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWBP_AnnouncementBanner_C::ExecuteUbergraph_WBP_AnnouncementBanner(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_Event_Message, float CallFunc_GetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AnnouncementBanner_C", "ExecuteUbergraph_WBP_AnnouncementBanner");

	Params::UWBP_AnnouncementBanner_C_ExecuteUbergraph_WBP_AnnouncementBanner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Message = K2Node_Event_Message;
	Parms.CallFunc_GetTimer_ReturnValue = CallFunc_GetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


