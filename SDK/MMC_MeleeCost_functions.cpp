#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MMC_MeleeCost.MMC_MeleeCost_C
// (None)

class UClass* UMMC_MeleeCost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MMC_MeleeCost_C");

	return Clss;
}


// MMC_MeleeCost_C MMC_MeleeCost.Default__MMC_MeleeCost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMMC_MeleeCost_C* UMMC_MeleeCost_C::GetDefaultObj()
{
	static class UMMC_MeleeCost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMMC_MeleeCost_C*>(UMMC_MeleeCost_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MMC_MeleeCost.MMC_MeleeCost_C.BaseCost
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Cost                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InstigatorActor                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Edit, BlueprintVisible)
// struct FGameplayAttribute          Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_GetEffectContext_ReturnValue                            (None)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          Temp_struct_Variable_1                                           (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateItemAttributeValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_CalculateItemAttributeValue_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_StandardBonusFormulaInverted_Total                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_EffectContextGetInstigatorActor_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeArray__0__ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_StandardBonusFormulaInverted_Base_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMMC_MeleeCost_C::BaseCost(const struct FGameplayEffectSpec& Spec, double* Cost, class AActor* InstigatorActor, const struct FGameplayEffectContextHandle& EffectContext, const struct FGameplayAttribute& Temp_struct_Variable, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, class AEquippableItem* Temp_object_Variable, const struct FGameplayAttribute& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_CalculateItemAttributeValue_ReturnValue, TArray<double>& K2Node_MakeArray_Array, float CallFunc_CalculateItemAttributeValue_ReturnValue_1, double CallFunc_StandardBonusFormulaInverted_Total, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, double K2Node_MakeArray__0__ImplicitCast, double CallFunc_StandardBonusFormulaInverted_Base_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MMC_MeleeCost_C", "BaseCost");

	Params::UMMC_MeleeCost_C_BaseCost_Params Parms{};

	Parms.Spec = Spec;
	Parms.InstigatorActor = InstigatorActor;
	Parms.EffectContext = EffectContext;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetEffectContext_ReturnValue = CallFunc_GetEffectContext_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CalculateItemAttributeValue_ReturnValue = CallFunc_CalculateItemAttributeValue_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_CalculateItemAttributeValue_ReturnValue_1 = CallFunc_CalculateItemAttributeValue_ReturnValue_1;
	Parms.CallFunc_StandardBonusFormulaInverted_Total = CallFunc_StandardBonusFormulaInverted_Total;
	Parms.CallFunc_EffectContextGetInstigatorActor_ReturnValue = CallFunc_EffectContextGetInstigatorActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.K2Node_MakeArray__0__ImplicitCast = K2Node_MakeArray__0__ImplicitCast;
	Parms.CallFunc_StandardBonusFormulaInverted_Base_ImplicitCast = CallFunc_StandardBonusFormulaInverted_Base_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Cost != nullptr)
		*Cost = Parms.Cost;

}


// Function MMC_MeleeCost.MMC_MeleeCost_C.NWXCalculateBaseMagnitude
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTagValueContainer          MMCIntermediateOutputs                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BaseCost_Cost                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMMC_MeleeCost_C::NWXCalculateBaseMagnitude(struct FGameplayEffectSpec& Spec, struct FTagValueContainer& MMCIntermediateOutputs, double CallFunc_BaseCost_Cost, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MMC_MeleeCost_C", "NWXCalculateBaseMagnitude");

	Params::UMMC_MeleeCost_C_NWXCalculateBaseMagnitude_Params Parms{};

	Parms.Spec = Spec;
	Parms.MMCIntermediateOutputs = MMCIntermediateOutputs;
	Parms.CallFunc_BaseCost_Cost = CallFunc_BaseCost_Cost;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


