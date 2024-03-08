#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left.GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C
// (None)

class UClass* UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C");

	return Clss;
}


// GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left.Default__GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C* UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C*>(UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left.GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left.GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left.GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C.ExecuteUbergraph_GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C::ExecuteUbergraph_GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C", "ExecuteUbergraph_GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left");

	Params::UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C_ExecuteUbergraph_GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


