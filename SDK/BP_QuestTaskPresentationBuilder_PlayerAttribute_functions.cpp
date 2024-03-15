#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestTaskPresentationBuilder_PlayerAttribute.BP_QuestTaskPresentationBuilder_PlayerAttribute_C
// (None)

class UClass* UBP_QuestTaskPresentationBuilder_PlayerAttribute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestTaskPresentationBuilder_PlayerAttribute_C");

	return Clss;
}


// BP_QuestTaskPresentationBuilder_PlayerAttribute_C BP_QuestTaskPresentationBuilder_PlayerAttribute.Default__BP_QuestTaskPresentationBuilder_PlayerAttribute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuestTaskPresentationBuilder_PlayerAttribute_C* UBP_QuestTaskPresentationBuilder_PlayerAttribute_C::GetDefaultObj()
{
	static class UBP_QuestTaskPresentationBuilder_PlayerAttribute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuestTaskPresentationBuilder_PlayerAttribute_C*>(UBP_QuestTaskPresentationBuilder_PlayerAttribute_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestTaskPresentationBuilder_PlayerAttribute.BP_QuestTaskPresentationBuilder_PlayerAttribute_C.GetConditionTextAndIcon
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UConditionPlayerAttribute*   PlayerAttributeCondition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
// class UAttributeUIDataRegistry*    DataRegistry                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttributeUIData    CallFunc_TryGetAttributeUIData_OutData                           (None)
// enum class EGetResult              CallFunc_TryGetAttributeUIData_OutBranches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayAttribute_ReturnValue         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatTaskName_ReturnValue                              (None)

void UBP_QuestTaskPresentationBuilder_PlayerAttribute_C::GetConditionTextAndIcon(class UConditionPlayerAttribute* PlayerAttributeCondition, class FText* Result, TSoftObjectPtr<class UTexture2D>* Icon, class UAttributeUIDataRegistry* DataRegistry, const struct FGameplayAttributeUIData& CallFunc_TryGetAttributeUIData_OutData, enum class EGetResult CallFunc_TryGetAttributeUIData_OutBranches, const class FString& CallFunc_GetDebugStringFromGameplayAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_FormatTaskName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_PlayerAttribute_C", "GetConditionTextAndIcon");

	Params::UBP_QuestTaskPresentationBuilder_PlayerAttribute_C_GetConditionTextAndIcon_Params Parms{};

	Parms.PlayerAttributeCondition = PlayerAttributeCondition;
	Parms.DataRegistry = DataRegistry;
	Parms.CallFunc_TryGetAttributeUIData_OutData = CallFunc_TryGetAttributeUIData_OutData;
	Parms.CallFunc_TryGetAttributeUIData_OutBranches = CallFunc_TryGetAttributeUIData_OutBranches;
	Parms.CallFunc_GetDebugStringFromGameplayAttribute_ReturnValue = CallFunc_GetDebugStringFromGameplayAttribute_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_FormatTaskName_ReturnValue = CallFunc_FormatTaskName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function BP_QuestTaskPresentationBuilder_PlayerAttribute.BP_QuestTaskPresentationBuilder_PlayerAttribute_C.GetTargetValue
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UConditionPlayerAttribute*   PlayerAttributeCondition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              TargetValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttributeThresholdType ThresholdType                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FFloor_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestTaskPresentationBuilder_PlayerAttribute_C::GetTargetValue(class UConditionPlayerAttribute* PlayerAttributeCondition, int32* TargetValue, enum class EAttributeThresholdType ThresholdType, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_PlayerAttribute_C", "GetTargetValue");

	Params::UBP_QuestTaskPresentationBuilder_PlayerAttribute_C_GetTargetValue_Params Parms{};

	Parms.PlayerAttributeCondition = PlayerAttributeCondition;
	Parms.ThresholdType = ThresholdType;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_FFloor_A_ImplicitCast = CallFunc_FFloor_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetValue != nullptr)
		*TargetValue = Parms.TargetValue;

}


// Function BP_QuestTaskPresentationBuilder_PlayerAttribute.BP_QuestTaskPresentationBuilder_PlayerAttribute_C.MakePlayerAttributeConditionData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UConditionPlayerAttribute*   PlayerAttributeCondition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataQuestTaskConditionPresentationData                               (Parm, OutParm)
// int32                              TargetValue                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttributeUIDataRegistry*    DataRegistry                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTargetValue_TargetValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetConditionTextAndIcon_Result                          (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetConditionTextAndIcon_Icon                            (UObjectWrapper, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataK2Node_MakeStruct_QuestTaskConditionPresentationData             (None)

void UBP_QuestTaskPresentationBuilder_PlayerAttribute_C::MakePlayerAttributeConditionData(class UConditionPlayerAttribute* PlayerAttributeCondition, int32 CurrentValue, bool* Success, struct FQuestTaskConditionPresentationData* QuestTaskConditionPresentationData, int32 TargetValue, class UAttributeUIDataRegistry* DataRegistry, int32 CallFunc_GetTargetValue_TargetValue, class FText CallFunc_GetConditionTextAndIcon_Result, TSoftObjectPtr<class UTexture2D> CallFunc_GetConditionTextAndIcon_Icon, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_PlayerAttribute_C", "MakePlayerAttributeConditionData");

	Params::UBP_QuestTaskPresentationBuilder_PlayerAttribute_C_MakePlayerAttributeConditionData_Params Parms{};

	Parms.PlayerAttributeCondition = PlayerAttributeCondition;
	Parms.CurrentValue = CurrentValue;
	Parms.TargetValue = TargetValue;
	Parms.DataRegistry = DataRegistry;
	Parms.CallFunc_GetTargetValue_TargetValue = CallFunc_GetTargetValue_TargetValue;
	Parms.CallFunc_GetConditionTextAndIcon_Result = CallFunc_GetConditionTextAndIcon_Result;
	Parms.CallFunc_GetConditionTextAndIcon_Icon = CallFunc_GetConditionTextAndIcon_Icon;
	Parms.K2Node_MakeStruct_QuestTaskConditionPresentationData = K2Node_MakeStruct_QuestTaskConditionPresentationData;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (QuestTaskConditionPresentationData != nullptr)
		*QuestTaskConditionPresentationData = std::move(Parms.QuestTaskConditionPresentationData);

}


// Function BP_QuestTaskPresentationBuilder_PlayerAttribute.BP_QuestTaskPresentationBuilder_PlayerAttribute_C.MakeTaskConditionPresentationData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UConditionBehaviour*         Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasCreated                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataConditionPresentationData                                        (Parm, OutParm)
// class UAttributeUIDataRegistry*    DataRegistry                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UConditionPlayerAttribute*   K2Node_DynamicCast_AsCondition_Player_Attribute                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakePlayerAttributeConditionData_Success                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataCallFunc_MakePlayerAttributeConditionData_QuestTaskConditionPresentationData(None)

void UBP_QuestTaskPresentationBuilder_PlayerAttribute_C::MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, class UAttributeUIDataRegistry* DataRegistry, class UConditionPlayerAttribute* K2Node_DynamicCast_AsCondition_Player_Attribute, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MakePlayerAttributeConditionData_Success, const struct FQuestTaskConditionPresentationData& CallFunc_MakePlayerAttributeConditionData_QuestTaskConditionPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_PlayerAttribute_C", "MakeTaskConditionPresentationData");

	Params::UBP_QuestTaskPresentationBuilder_PlayerAttribute_C_MakeTaskConditionPresentationData_Params Parms{};

	Parms.Condition = Condition;
	Parms.CurrentValue = CurrentValue;
	Parms.DataRegistry = DataRegistry;
	Parms.K2Node_DynamicCast_AsCondition_Player_Attribute = K2Node_DynamicCast_AsCondition_Player_Attribute;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakePlayerAttributeConditionData_Success = CallFunc_MakePlayerAttributeConditionData_Success;
	Parms.CallFunc_MakePlayerAttributeConditionData_QuestTaskConditionPresentationData = CallFunc_MakePlayerAttributeConditionData_QuestTaskConditionPresentationData;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasCreated != nullptr)
		*bWasCreated = Parms.bWasCreated;

	if (ConditionPresentationData != nullptr)
		*ConditionPresentationData = std::move(Parms.ConditionPresentationData);

}

}


