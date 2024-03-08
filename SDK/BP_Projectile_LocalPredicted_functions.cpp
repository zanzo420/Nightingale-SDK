#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_LocalPredicted.BP_Projectile_LocalPredicted_C
// (Actor)

class UClass* ABP_Projectile_LocalPredicted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_LocalPredicted_C");

	return Clss;
}


// BP_Projectile_LocalPredicted_C BP_Projectile_LocalPredicted.Default__BP_Projectile_LocalPredicted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_LocalPredicted_C* ABP_Projectile_LocalPredicted_C::GetDefaultObj()
{
	static class ABP_Projectile_LocalPredicted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_LocalPredicted_C*>(ABP_Projectile_LocalPredicted_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Projectile_LocalPredicted.BP_Projectile_LocalPredicted_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Projectile_LocalPredicted_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_LocalPredicted_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Projectile_LocalPredicted.BP_Projectile_LocalPredicted_C.ExecuteUbergraph_BP_Projectile_LocalPredicted
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Projectile_Instigator_Locally_Controlled_IsLocallyControlled(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_LocalPredicted_C::ExecuteUbergraph_BP_Projectile_LocalPredicted(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Is_Projectile_Instigator_Locally_Controlled_IsLocallyControlled, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_LocalPredicted_C", "ExecuteUbergraph_BP_Projectile_LocalPredicted");

	Params::ABP_Projectile_LocalPredicted_C_ExecuteUbergraph_BP_Projectile_LocalPredicted_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Is_Projectile_Instigator_Locally_Controlled_IsLocallyControlled = CallFunc_Is_Projectile_Instigator_Locally_Controlled_IsLocallyControlled;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


