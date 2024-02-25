#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_ComboWindow.ANS_ComboWindow_C
// (None)

class UClass* UANS_ComboWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_ComboWindow_C");

	return Clss;
}


// ANS_ComboWindow_C ANS_ComboWindow.Default__ANS_ComboWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_ComboWindow_C* UANS_ComboWindow_C::GetDefaultObj()
{
	static class UANS_ComboWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_ComboWindow_C*>(UANS_ComboWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANS_ComboWindow.ANS_ComboWindow_C.IncrementCounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IncrementCounter                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_ComboWindow_C::IncrementCounter(bool* IncrementCounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_ComboWindow_C", "IncrementCounter");

	Params::UANS_ComboWindow_C_IncrementCounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IncrementCounter != nullptr)
		*IncrementCounter = Parms.IncrementCounter;

}


// Function ANS_ComboWindow.ANS_ComboWindow_C.BlendIntoSection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               BlendIntoSection                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_ComboWindow_C::BlendIntoSection(bool* BlendIntoSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_ComboWindow_C", "BlendIntoSection");

	Params::UANS_ComboWindow_C_BlendIntoSection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BlendIntoSection != nullptr)
		*BlendIntoSection = Parms.BlendIntoSection;

}


// Function ANS_ComboWindow.ANS_ComboWindow_C.ComboOnInput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ComboOnInput                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_ComboWindow_C::ComboOnInput(bool* ComboOnInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_ComboWindow_C", "ComboOnInput");

	Params::UANS_ComboWindow_C_ComboOnInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ComboOnInput != nullptr)
		*ComboOnInput = Parms.ComboOnInput;

}


// Function ANS_ComboWindow.ANS_ComboWindow_C.Received_NotifyBegin
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UANS_ComboWindow_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_ComboWindow_C", "Received_NotifyBegin");

	Params::UANS_ComboWindow_C_Received_NotifyBegin_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = EventReference;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


