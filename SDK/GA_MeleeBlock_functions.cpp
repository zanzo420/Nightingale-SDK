#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_MeleeBlock.GA_MeleeBlock_C
// (None)

class UClass* UGA_MeleeBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_MeleeBlock_C");

	return Clss;
}


// GA_MeleeBlock_C GA_MeleeBlock.Default__GA_MeleeBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_MeleeBlock_C* UGA_MeleeBlock_C::GetDefaultObj()
{
	static class UGA_MeleeBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_MeleeBlock_C*>(UGA_MeleeBlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_MeleeBlock.GA_MeleeBlock_C.BlockReaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 StrengthCurve                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          LTagValue                                                        (Edit, BlueprintVisible)
// struct FGameplayTagContainer       LEffectTags                                                      (Edit, BlueprintVisible)
// TArray<struct FGameplayEffectCue>  Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// TScriptInterface<class IDamageEventInterface>K2Node_DynamicCast_AsDamage_Event_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           CallFunc_GetGameState_GameState                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentRealmPower_RealmPower                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_StrengthTag_StrengthTag                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_MakeHitResult_ReturnValue                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// struct FTagValueContainer          CallFunc_DamageActor_AggregatedDamageTags                        (None)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_Value_ImplicitCast                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MeleeBlock_C::BlockReaction(class AActor* Actor, class UCurveFloat* StrengthCurve, const struct FTagValueContainer& LTagValue, const struct FGameplayTagContainer& LEffectTags, TArray<struct FGameplayEffectCue>& Temp_struct_Variable, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ANWXGameStateBase* CallFunc_GetGameState_GameState, int32 CallFunc_GetCurrentRealmPower_RealmPower, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FGameplayTag& CallFunc_StrengthTag_StrengthTag, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_Add_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MeleeBlock_C", "BlockReaction");

	Params::UGA_MeleeBlock_C_BlockReaction_Params Parms{};

	Parms.Actor = Actor;
	Parms.StrengthCurve = StrengthCurve;
	Parms.LTagValue = LTagValue;
	Parms.LEffectTags = LEffectTags;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsDamage_Event_Interface = K2Node_DynamicCast_AsDamage_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameState_GameState = CallFunc_GetGameState_GameState;
	Parms.CallFunc_GetCurrentRealmPower_RealmPower = CallFunc_GetCurrentRealmPower_RealmPower;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_StrengthTag_StrengthTag = CallFunc_StrengthTag_StrengthTag;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeHitResult_ReturnValue = CallFunc_MakeHitResult_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_DamageActor_AggregatedDamageTags = CallFunc_DamageActor_AggregatedDamageTags;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_Value_ImplicitCast = CallFunc_Add_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MeleeBlock.GA_MeleeBlock_C.PlayBlockReactionAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DamageBlocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetPlayerControllerFromCharacter_PlayerController       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMontageSetForAction_bFoundMontageSet                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityMontages            CallFunc_GetMontageSetForAction_MontageSetForAction              (None)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_A_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClientStartCameraShake_Scale_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MeleeBlock_C::PlayBlockReactionAnimation(double DamageBlocked, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, class ANWXPlayerController* CallFunc_GetPlayerControllerFromCharacter_PlayerController, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_SafeDivide_ReturnValue_1, double CallFunc_FMax_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_GetMontageSetForAction_bFoundMontageSet, const struct FAbilityMontages& CallFunc_GetMontageSetForAction_MontageSetForAction, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_SafeDivide_A_ImplicitCast, float CallFunc_ClientStartCameraShake_Scale_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MeleeBlock_C", "PlayBlockReactionAnimation");

	Params::UGA_MeleeBlock_C_PlayBlockReactionAnimation_Params Parms{};

	Parms.DamageBlocked = DamageBlocked;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_GetPlayerControllerFromCharacter_PlayerController = CallFunc_GetPlayerControllerFromCharacter_PlayerController;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue_1 = CallFunc_SafeDivide_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetMontageSetForAction_bFoundMontageSet = CallFunc_GetMontageSetForAction_bFoundMontageSet;
	Parms.CallFunc_GetMontageSetForAction_MontageSetForAction = CallFunc_GetMontageSetForAction_MontageSetForAction;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem = CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter = CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem = CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter = CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SafeDivide_A_ImplicitCast = CallFunc_SafeDivide_A_ImplicitCast;
	Parms.CallFunc_ClientStartCameraShake_Scale_ImplicitCast = CallFunc_ClientStartCameraShake_Scale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MeleeBlock.GA_MeleeBlock_C.ApplyBlockStaminaCost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DamageBlocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MeleeBlock_C::ApplyBlockStaminaCost(double DamageBlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MeleeBlock_C", "ApplyBlockStaminaCost");

	Params::UGA_MeleeBlock_C_ApplyBlockStaminaCost_Params Parms{};

	Parms.DamageBlocked = DamageBlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MeleeBlock.GA_MeleeBlock_C.CharacterEndBlockEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MeleeBlock_C::CharacterEndBlockEvent(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MeleeBlock_C", "CharacterEndBlockEvent");

	Params::UGA_MeleeBlock_C_CharacterEndBlockEvent_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MeleeBlock.GA_MeleeBlock_C.CharacterStartBlockEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void UGA_MeleeBlock_C::CharacterStartBlockEvent(bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MeleeBlock_C", "CharacterStartBlockEvent");

	Params::UGA_MeleeBlock_C_CharacterStartBlockEvent_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MeleeBlock.GA_MeleeBlock_C.ShouldGiveShoveTechnique
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemDataReference_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_MeleeBlock_C::ShouldGiveShoveTechnique(bool CallFunc_EqualEqual_FItemDataReference_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MeleeBlock_C", "ShouldGiveShoveTechnique");

	Params::UGA_MeleeBlock_C_ShouldGiveShoveTechnique_Params Parms{};

	Parms.CallFunc_EqualEqual_FItemDataReference_ReturnValue = CallFunc_EqualEqual_FItemDataReference_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_MeleeBlock.GA_MeleeBlock_C.EventReceived_1FBA6C404E89DE32912F50AC2BF22923
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MeleeBlock_C::EventReceived_1FBA6C404E89DE32912F50AC2BF22923(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MeleeBlock_C", "EventReceived_1FBA6C404E89DE32912F50AC2BF22923");

	Params::UGA_MeleeBlock_C_EventReceived_1FBA6C404E89DE32912F50AC2BF22923_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MeleeBlock.GA_MeleeBlock_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_MeleeBlock_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MeleeBlock_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_MeleeBlock_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MeleeBlock.GA_MeleeBlock_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MeleeBlock_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MeleeBlock_C", "K2_OnEndAbility");

	Params::UGA_MeleeBlock_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MeleeBlock.GA_MeleeBlock_C.DamageBlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AmountBlocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AttackingActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_MeleeBlock_C::DamageBlocked(double AmountBlocked, class AActor* AttackingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MeleeBlock_C", "DamageBlocked");

	Params::UGA_MeleeBlock_C_DamageBlocked_Params Parms{};

	Parms.AmountBlocked = AmountBlocked;
	Parms.AttackingActor = AttackingActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MeleeBlock.GA_MeleeBlock_C.ExecuteUbergraph_GA_MeleeBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ObjectToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_AmountBlocked                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_AttackingActor                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldGiveShoveTechnique_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// bool                               CallFunc_ShouldGiveShoveTechnique_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MeleeBlock_C::ExecuteUbergraph_GA_MeleeBlock(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_Event_bWasCancelled, double K2Node_CustomEvent_AmountBlocked, class AActor* K2Node_CustomEvent_AttackingActor, bool CallFunc_ShouldGiveShoveTechnique_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, bool CallFunc_ShouldGiveShoveTechnique_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, const struct FGameplayEventData& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MeleeBlock_C", "ExecuteUbergraph_GA_MeleeBlock");

	Params::UGA_MeleeBlock_C_ExecuteUbergraph_GA_MeleeBlock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_Conv_ObjectToString_ReturnValue = CallFunc_Conv_ObjectToString_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_CustomEvent_AmountBlocked = K2Node_CustomEvent_AmountBlocked;
	Parms.K2Node_CustomEvent_AttackingActor = K2Node_CustomEvent_AttackingActor;
	Parms.CallFunc_ShouldGiveShoveTechnique_ReturnValue = CallFunc_ShouldGiveShoveTechnique_ReturnValue;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.CallFunc_ShouldGiveShoveTechnique_ReturnValue_1 = CallFunc_ShouldGiveShoveTechnique_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


