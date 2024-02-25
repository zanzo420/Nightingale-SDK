#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAR_AggressiveToTarget_NPC.AIAR_AggressiveToTarget_NPC_C
// (None)

class UClass* UAIAR_AggressiveToTarget_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAR_AggressiveToTarget_NPC_C");

	return Clss;
}


// AIAR_AggressiveToTarget_NPC_C AIAR_AggressiveToTarget_NPC.Default__AIAR_AggressiveToTarget_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAR_AggressiveToTarget_NPC_C* UAIAR_AggressiveToTarget_NPC_C::GetDefaultObj()
{
	static class UAIAR_AggressiveToTarget_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAR_AggressiveToTarget_NPC_C*>(UAIAR_AggressiveToTarget_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAR_AggressiveToTarget_NPC.AIAR_AggressiveToTarget_NPC_C.CheckTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CombatDistance                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             CallFunc_GetCreature_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckTargetRequirements_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAICompanionInterface>K2Node_DynamicCast_AsAICompanion_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasLeader_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCompanionSearchParameters_SearchLocation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCompanionSearchParameters_SearchRadius               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIAR_AggressiveToTarget_NPC_C::CheckTargetRequirements(class AActor* Target, float CombatDistance, class ANWXAICharacter* CallFunc_GetCreature_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_CheckTargetRequirements_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasLeader_ReturnValue, const struct FVector& CallFunc_GetCompanionSearchParameters_SearchLocation, float CallFunc_GetCompanionSearchParameters_SearchRadius, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAR_AggressiveToTarget_NPC_C", "CheckTargetRequirements");

	Params::UAIAR_AggressiveToTarget_NPC_C_CheckTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CombatDistance = CombatDistance;
	Parms.CallFunc_GetCreature_ReturnValue = CallFunc_GetCreature_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_CheckTargetRequirements_ReturnValue = CallFunc_CheckTargetRequirements_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsAICompanion_Interface = K2Node_DynamicCast_AsAICompanion_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasLeader_ReturnValue = CallFunc_HasLeader_ReturnValue;
	Parms.CallFunc_GetCompanionSearchParameters_SearchLocation = CallFunc_GetCompanionSearchParameters_SearchLocation;
	Parms.CallFunc_GetCompanionSearchParameters_SearchRadius = CallFunc_GetCompanionSearchParameters_SearchRadius;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_B_ImplicitCast = CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAR_AggressiveToTarget_NPC.AIAR_AggressiveToTarget_NPC_C.IsHostileTowardsTarget
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InCreature                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Targeter_C>K2Node_DynamicCast_AsBPI_Targeter                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTarget_Target                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIAR_AggressiveToTarget_NPC_C::IsHostileTowardsTarget(class AActor* TargetActor, class AActor* InCreature, const struct FGameplayTag& Temp_struct_Variable, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetTarget_Target, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAR_AggressiveToTarget_NPC_C", "IsHostileTowardsTarget");

	Params::UAIAR_AggressiveToTarget_NPC_C_IsHostileTowardsTarget_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.InCreature = InCreature;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsBPI_Targeter = K2Node_DynamicCast_AsBPI_Targeter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTarget_Target = CallFunc_GetTarget_Target;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_ActorHasTag_ReturnValue_2 = CallFunc_ActorHasTag_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_3 = CallFunc_ActorHasTag_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAR_AggressiveToTarget_NPC.AIAR_AggressiveToTarget_NPC_C.Initialize
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Initialize_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             CallFunc_GetCreature_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAICompanionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

bool UAIAR_AggressiveToTarget_NPC_C::Initialize(bool CallFunc_Initialize_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXAICharacter* CallFunc_GetCreature_ReturnValue, class UAICompanionComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAR_AggressiveToTarget_NPC_C", "Initialize");

	Params::UAIAR_AggressiveToTarget_NPC_C_Initialize_Params Parms{};

	Parms.CallFunc_Initialize_ReturnValue = CallFunc_Initialize_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCreature_ReturnValue = CallFunc_GetCreature_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


