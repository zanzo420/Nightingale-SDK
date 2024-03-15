#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestRewardPresentationBuilder_HopeGate.BP_QuestRewardPresentationBuilder_HopeGate_C
// (None)

class UClass* UBP_QuestRewardPresentationBuilder_HopeGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestRewardPresentationBuilder_HopeGate_C");

	return Clss;
}


// BP_QuestRewardPresentationBuilder_HopeGate_C BP_QuestRewardPresentationBuilder_HopeGate.Default__BP_QuestRewardPresentationBuilder_HopeGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuestRewardPresentationBuilder_HopeGate_C* UBP_QuestRewardPresentationBuilder_HopeGate_C::GetDefaultObj()
{
	static class UBP_QuestRewardPresentationBuilder_HopeGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuestRewardPresentationBuilder_HopeGate_C*>(UBP_QuestRewardPresentationBuilder_HopeGate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestRewardPresentationBuilder_HopeGate.BP_QuestRewardPresentationBuilder_HopeGate_C.MakeQuestRewardPresentationData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URewardBehaviour*            RewardBehaviour                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FQuestRewardPresentationDataOutPresentationData                                              (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestRewardPresentationDataK2Node_MakeStruct_QuestRewardPresentationData                    (None)

bool UBP_QuestRewardPresentationBuilder_HopeGate_C::MakeQuestRewardPresentationData(class URewardBehaviour* RewardBehaviour, struct FQuestRewardPresentationData* OutPresentationData, const struct FQuestRewardPresentationData& K2Node_MakeStruct_QuestRewardPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestRewardPresentationBuilder_HopeGate_C", "MakeQuestRewardPresentationData");

	Params::UBP_QuestRewardPresentationBuilder_HopeGate_C_MakeQuestRewardPresentationData_Params Parms{};

	Parms.RewardBehaviour = RewardBehaviour;
	Parms.K2Node_MakeStruct_QuestRewardPresentationData = K2Node_MakeStruct_QuestRewardPresentationData;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPresentationData != nullptr)
		*OutPresentationData = std::move(Parms.OutPresentationData);

	return Parms.ReturnValue;

}

}


