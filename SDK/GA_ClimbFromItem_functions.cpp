#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ClimbFromItem.GA_ClimbFromItem_C
// (None)

class UClass* UGA_ClimbFromItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ClimbFromItem_C");

	return Clss;
}


// GA_ClimbFromItem_C GA_ClimbFromItem.Default__GA_ClimbFromItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ClimbFromItem_C* UGA_ClimbFromItem_C::GetDefaultObj()
{
	static class UGA_ClimbFromItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ClimbFromItem_C*>(UGA_ClimbFromItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ClimbFromItem.GA_ClimbFromItem_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWX_CharacterMovementComponent*K2Node_DynamicCast_AsNWX_Character_Movement_Component            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClimbing_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_ClimbFromItem_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, class UNWX_CharacterMovementComponent* K2Node_DynamicCast_AsNWX_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsClimbing_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ClimbFromItem_C", "K2_ShouldAbilityRespondToEvent");

	Params::UGA_ClimbFromItem_C_K2_ShouldAbilityRespondToEvent_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;
	Parms.K2Node_DynamicCast_AsNWX_Character_Movement_Component = K2Node_DynamicCast_AsNWX_Character_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsClimbing_ReturnValue = CallFunc_IsClimbing_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_ClimbFromItem.GA_ClimbFromItem_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_ClimbFromItem_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ClimbFromItem_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_ClimbFromItem_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ClimbFromItem.GA_ClimbFromItem_C.ExecuteUbergraph_GA_ClimbFromItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXTraversalComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTraversalTraceResult       CallFunc_TraversalTrace_OutResult                                (NoDestructor)
// bool                               CallFunc_TraversalTrace_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AbilityPayloadFromVector_ReturnValue                    (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// class UAbilitySystemComponent*     CallFunc_GetOwningActorAbilitySystem_ReturnValue                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryActivateAbilityByClass_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ClimbFromItem_C::ExecuteUbergraph_GA_ClimbFromItem(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UNWXTraversalComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTraversalTraceResult& CallFunc_TraversalTrace_OutResult, bool CallFunc_TraversalTrace_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromVector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class UAbilitySystemComponent* CallFunc_GetOwningActorAbilitySystem_ReturnValue, bool CallFunc_TryActivateAbilityByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ClimbFromItem_C", "ExecuteUbergraph_GA_ClimbFromItem");

	Params::UGA_ClimbFromItem_C_ExecuteUbergraph_GA_ClimbFromItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_TraversalTrace_OutResult = CallFunc_TraversalTrace_OutResult;
	Parms.CallFunc_TraversalTrace_ReturnValue = CallFunc_TraversalTrace_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_AbilityPayloadFromVector_ReturnValue = CallFunc_AbilityPayloadFromVector_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_GetOwningActorAbilitySystem_ReturnValue = CallFunc_GetOwningActorAbilitySystem_ReturnValue;
	Parms.CallFunc_TryActivateAbilityByClass_ReturnValue = CallFunc_TryActivateAbilityByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


