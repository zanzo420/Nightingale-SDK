#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Melee_01_NPC.GA_CreatureAbility_Melee_01_NPC_C
// (None)

class UClass* UGA_CreatureAbility_Melee_01_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Melee_01_NPC_C");

	return Clss;
}


// GA_CreatureAbility_Melee_01_NPC_C GA_CreatureAbility_Melee_01_NPC.Default__GA_CreatureAbility_Melee_01_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Melee_01_NPC_C* UGA_CreatureAbility_Melee_01_NPC_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Melee_01_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Melee_01_NPC_C*>(UGA_CreatureAbility_Melee_01_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Melee_01_NPC.GA_CreatureAbility_Melee_01_NPC_C.CreatureAbilityInitialize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// float                              CallFunc_CalculateItemAttributeValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAICompanionInterface>K2Node_DynamicCast_AsAICompanion_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreatureAbilityInitialize_bSuccess                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AbilityDamage_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Melee_01_NPC_C::CreatureAbilityInitialize(bool* bSuccess, class AEquippableItem* Temp_object_Variable, const struct FGameplayAttribute& Temp_struct_Variable, float CallFunc_CalculateItemAttributeValue_ReturnValue, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_CreatureAbilityInitialize_bSuccess, double K2Node_VariableSet_AbilityDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Melee_01_NPC_C", "CreatureAbilityInitialize");

	Params::UGA_CreatureAbility_Melee_01_NPC_C_CreatureAbilityInitialize_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_CalculateItemAttributeValue_ReturnValue = CallFunc_CalculateItemAttributeValue_ReturnValue;
	Parms.K2Node_DynamicCast_AsAICompanion_Interface = K2Node_DynamicCast_AsAICompanion_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_CreatureAbilityInitialize_bSuccess = CallFunc_CreatureAbilityInitialize_bSuccess;
	Parms.K2Node_VariableSet_AbilityDamage_ImplicitCast = K2Node_VariableSet_AbilityDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}

}


