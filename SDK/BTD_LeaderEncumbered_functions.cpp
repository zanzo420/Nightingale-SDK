#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_LeaderEncumbered.BTD_LeaderEncumbered_C
// (None)

class UClass* UBTD_LeaderEncumbered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_LeaderEncumbered_C");

	return Clss;
}


// BTD_LeaderEncumbered_C BTD_LeaderEncumbered.Default__BTD_LeaderEncumbered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_LeaderEncumbered_C* UBTD_LeaderEncumbered_C::GetDefaultObj()
{
	static class UBTD_LeaderEncumbered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_LeaderEncumbered_C*>(UBTD_LeaderEncumbered_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_LeaderEncumbered.BTD_LeaderEncumbered_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAICompanionComponent*       CompanionComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          LCreature                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   LSpawner                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAICompanionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               CallFunc_GetLeader_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBTD_LeaderEncumbered_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class UAICompanionComponent* CompanionComponent, class ABP_CreatureBase_C* LCreature, class ABP_CreatureSpawnerBase_C* LSpawner, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class UAICompanionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXCharacter* CallFunc_GetLeader_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_LeaderEncumbered_C", "PerformConditionCheckAI");

	Params::UBTD_LeaderEncumbered_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.CompanionComponent = CompanionComponent;
	Parms.LCreature = LCreature;
	Parms.LSpawner = LSpawner;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLeader_ReturnValue = CallFunc_GetLeader_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


