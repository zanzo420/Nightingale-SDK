#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RewardBehaviour_TutorialModalPopup.BP_RewardBehaviour_TutorialModalPopup_C
// (None)

class UClass* UBP_RewardBehaviour_TutorialModalPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RewardBehaviour_TutorialModalPopup_C");

	return Clss;
}


// BP_RewardBehaviour_TutorialModalPopup_C BP_RewardBehaviour_TutorialModalPopup.Default__BP_RewardBehaviour_TutorialModalPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RewardBehaviour_TutorialModalPopup_C* UBP_RewardBehaviour_TutorialModalPopup_C::GetDefaultObj()
{
	static class UBP_RewardBehaviour_TutorialModalPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RewardBehaviour_TutorialModalPopup_C*>(UBP_RewardBehaviour_TutorialModalPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RewardBehaviour_TutorialModalPopup.BP_RewardBehaviour_TutorialModalPopup_C.LoadData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTutorialDataAsset_SlideDeck*LoadedData                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTutorialDataAsset_SlideDeck*K2Node_DynamicCast_AsTutorial_Data_Asset_Slide_Deck              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_TutorialModalPopup_C::LoadData(class UTutorialDataAsset_SlideDeck** LoadedData, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTutorialDataAsset_SlideDeck* K2Node_DynamicCast_AsTutorial_Data_Asset_Slide_Deck, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_TutorialModalPopup_C", "LoadData");

	Params::UBP_RewardBehaviour_TutorialModalPopup_C_LoadData_Params Parms{};

	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTutorial_Data_Asset_Slide_Deck = K2Node_DynamicCast_AsTutorial_Data_Asset_Slide_Deck;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (LoadedData != nullptr)
		*LoadedData = Parms.LoadedData;

}


// Function BP_RewardBehaviour_TutorialModalPopup.BP_RewardBehaviour_TutorialModalPopup_C.GrantHintPopupReward
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ContextObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTutorialDataAsset_SlideDeck*TutorialData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_TutorialComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUID_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr                               (None)
// TArray<struct FMetricsEventAttr>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_TutorialModalPopup_C::GrantHintPopupReward(class APlayerState* PlayerState, class UObject* ContextObject, class UTutorialDataAsset_SlideDeck* TutorialData, class UBP_TutorialComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FGuid& CallFunc_GetUID_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr, TArray<struct FMetricsEventAttr>& K2Node_MakeArray_Array, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_TutorialModalPopup_C", "GrantHintPopupReward");

	Params::UBP_RewardBehaviour_TutorialModalPopup_C_GrantHintPopupReward_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.ContextObject = ContextObject;
	Parms.TutorialData = TutorialData;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetUID_ReturnValue = CallFunc_GetUID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.K2Node_MakeStruct_MetricsEventAttr = K2Node_MakeStruct_MetricsEventAttr;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RewardBehaviour_TutorialModalPopup.BP_RewardBehaviour_TutorialModalPopup_C.ApplyReward
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SenderContextObject                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_TutorialModalPopup_C::ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_TutorialModalPopup_C", "ApplyReward");

	Params::UBP_RewardBehaviour_TutorialModalPopup_C_ApplyReward_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.SenderContextObject = SenderContextObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RewardBehaviour_TutorialModalPopup.BP_RewardBehaviour_TutorialModalPopup_C.ExecuteUbergraph_BP_RewardBehaviour_TutorialModalPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTutorialDataAsset_SlideDeck*CallFunc_LoadData_LoadedData                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_Event_PlayerState                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_SenderContextObject                                 (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_TutorialModalPopup_C::ExecuteUbergraph_BP_RewardBehaviour_TutorialModalPopup(int32 EntryPoint, class UTutorialDataAsset_SlideDeck* CallFunc_LoadData_LoadedData, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_TutorialModalPopup_C", "ExecuteUbergraph_BP_RewardBehaviour_TutorialModalPopup");

	Params::UBP_RewardBehaviour_TutorialModalPopup_C_ExecuteUbergraph_BP_RewardBehaviour_TutorialModalPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_LoadData_LoadedData = CallFunc_LoadData_LoadedData;
	Parms.K2Node_Event_PlayerState = K2Node_Event_PlayerState;
	Parms.K2Node_Event_SenderContextObject = K2Node_Event_SenderContextObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


