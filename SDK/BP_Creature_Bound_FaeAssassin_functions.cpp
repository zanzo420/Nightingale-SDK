#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Creature_Bound_FaeAssassin.BP_Creature_Bound_FaeAssassin_C
// (Actor, Pawn)

class UClass* ABP_Creature_Bound_FaeAssassin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Creature_Bound_FaeAssassin_C");

	return Clss;
}


// BP_Creature_Bound_FaeAssassin_C BP_Creature_Bound_FaeAssassin.Default__BP_Creature_Bound_FaeAssassin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Creature_Bound_FaeAssassin_C* ABP_Creature_Bound_FaeAssassin_C::GetDefaultObj()
{
	static class ABP_Creature_Bound_FaeAssassin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Creature_Bound_FaeAssassin_C*>(ABP_Creature_Bound_FaeAssassin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Creature_Bound_FaeAssassin.BP_Creature_Bound_FaeAssassin_C.Start_WP_Indicator
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_Bound_FaeAssassin_C::Start_WP_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Bound_FaeAssassin_C", "Start_WP_Indicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_Bound_FaeAssassin.BP_Creature_Bound_FaeAssassin_C.StopBladeSFXRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Bound_FaeAssassin_C::StopBladeSFXRight(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Bound_FaeAssassin_C", "StopBladeSFXRight");

	Params::ABP_Creature_Bound_FaeAssassin_C_StopBladeSFXRight_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Bound_FaeAssassin.BP_Creature_Bound_FaeAssassin_C.StopBladeSFXLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Bound_FaeAssassin_C::StopBladeSFXLeft(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Bound_FaeAssassin_C", "StopBladeSFXLeft");

	Params::ABP_Creature_Bound_FaeAssassin_C_StopBladeSFXLeft_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Bound_FaeAssassin.BP_Creature_Bound_FaeAssassin_C.EliteGuardDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Bound_FaeAssassin_C::EliteGuardDeath(class ANWXAICharacter* Creature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Bound_FaeAssassin_C", "EliteGuardDeath");

	Params::ABP_Creature_Bound_FaeAssassin_C_EliteGuardDeath_Params Parms{};

	Parms.Creature = Creature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Bound_FaeAssassin.BP_Creature_Bound_FaeAssassin_C.EliteGuardDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Bound_FaeAssassin_C::EliteGuardDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Bound_FaeAssassin_C", "EliteGuardDestroyed");

	Params::ABP_Creature_Bound_FaeAssassin_C_EliteGuardDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Bound_FaeAssassin.BP_Creature_Bound_FaeAssassin_C.ExecuteUbergraph_BP_Creature_Bound_FaeAssassin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             K2Node_CustomEvent_Creature                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Bound_FaeAssassin_C::ExecuteUbergraph_BP_Creature_Bound_FaeAssassin(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool Temp_bool_IsClosed_Variable, class ANWXAICharacter* K2Node_CustomEvent_Creature, class AActor* K2Node_CustomEvent_DestroyedActor, bool Temp_bool_Has_Been_Initd_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Bound_FaeAssassin_C", "ExecuteUbergraph_BP_Creature_Bound_FaeAssassin");

	Params::ABP_Creature_Bound_FaeAssassin_C_ExecuteUbergraph_BP_Creature_Bound_FaeAssassin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_Creature = K2Node_CustomEvent_Creature;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


