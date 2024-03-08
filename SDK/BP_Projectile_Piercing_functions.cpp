#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_Piercing.BP_Projectile_Piercing_C
// (Actor)

class UClass* ABP_Projectile_Piercing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_Piercing_C");

	return Clss;
}


// BP_Projectile_Piercing_C BP_Projectile_Piercing.Default__BP_Projectile_Piercing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_Piercing_C* ABP_Projectile_Piercing_C::GetDefaultObj()
{
	static class ABP_Projectile_Piercing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_Piercing_C*>(ABP_Projectile_Piercing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.RegisterPassthrough
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Piercing_C::RegisterPassthrough(bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Piercing_C", "RegisterPassthrough");

	Params::ABP_Projectile_Piercing_C_RegisterPassthrough_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.GrantProjectileAbilities
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpecDef     CallFunc_CreateAbilitySpecDefFromClass_ReturnValue               (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpecHandle  CallFunc_GiveAbility_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Piercing_C::GrantProjectileAbilities(bool CallFunc_HasAuthority_ReturnValue, const struct FGameplayAbilitySpecDef& CallFunc_CreateAbilitySpecDefFromClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FGameplayAbilitySpecHandle& CallFunc_GiveAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Piercing_C", "GrantProjectileAbilities");

	Params::ABP_Projectile_Piercing_C_GrantProjectileAbilities_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_CreateAbilitySpecDefFromClass_ReturnValue = CallFunc_CreateAbilitySpecDefFromClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GiveAbility_ReturnValue = CallFunc_GiveAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.GetPassthroughCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              PassthroughCount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Piercing_C::GetPassthroughCount(int32* PassthroughCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Piercing_C", "GetPassthroughCount");

	Params::ABP_Projectile_Piercing_C_GetPassthroughCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassthroughCount != nullptr)
		*PassthroughCount = Parms.PassthroughCount;

}


// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.HandleMaxPassthroughCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Projectile_Piercing_C::HandleMaxPassthroughCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Piercing_C", "HandleMaxPassthroughCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.HandlePassthrough
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Projectile_Piercing_C::HandlePassthrough()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Piercing_C", "HandlePassthrough");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.ValidatePassthrough
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ValidPassthrough                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Piercing_C::ValidatePassthrough(bool* ValidPassthrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Piercing_C", "ValidatePassthrough");

	Params::ABP_Projectile_Piercing_C_ValidatePassthrough_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ValidPassthrough != nullptr)
		*ValidPassthrough = Parms.ValidPassthrough;

}


// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.ValidateImpactDetection
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ValidTraceImpact                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ValidateImpactDetection_ValidTraceImpact                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Piercing_C::ValidateImpactDetection(bool* ValidTraceImpact, bool CallFunc_ValidateImpactDetection_ValidTraceImpact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Piercing_C", "ValidateImpactDetection");

	Params::ABP_Projectile_Piercing_C_ValidateImpactDetection_Params Parms{};

	Parms.CallFunc_ValidateImpactDetection_ValidTraceImpact = CallFunc_ValidateImpactDetection_ValidTraceImpact;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidTraceImpact != nullptr)
		*ValidTraceImpact = Parms.ValidTraceImpact;

}


// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.HandleImpactDetected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ValidatePassthrough_ValidPassthrough                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Piercing_C::HandleImpactDetected(bool CallFunc_ValidatePassthrough_ValidPassthrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Piercing_C", "HandleImpactDetected");

	Params::ABP_Projectile_Piercing_C_HandleImpactDetected_Params Parms{};

	Parms.CallFunc_ValidatePassthrough_ValidPassthrough = CallFunc_ValidatePassthrough_ValidPassthrough;

	UObject::ProcessEvent(Func, &Parms);

}

}


