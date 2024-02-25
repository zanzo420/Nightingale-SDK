#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass MMC_MeleeCost.MMC_MeleeCost_C
class UMMC_MeleeCost_C : public UNWXGameplayModMagnitudeCalculation
{
public:

	static class UClass* StaticClass();
	static class UMMC_MeleeCost_C* GetDefaultObj();

	void BaseCost(const struct FGameplayEffectSpec& Spec, double* Cost, class AActor* InstigatorActor, const struct FGameplayEffectContextHandle& EffectContext, const struct FGameplayAttribute& Temp_struct_Variable, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, class AEquippableItem* Temp_object_Variable, const struct FGameplayAttribute& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_CalculateItemAttributeValue_ReturnValue, TArray<double>& K2Node_MakeArray_Array, float CallFunc_CalculateItemAttributeValue_ReturnValue_1, double CallFunc_StandardBonusFormulaInverted_Total, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, double K2Node_MakeArray__0__ImplicitCast, double CallFunc_StandardBonusFormulaInverted_Base_ImplicitCast);
	float NWXCalculateBaseMagnitude(struct FGameplayEffectSpec& Spec, struct FTagValueContainer& MMCIntermediateOutputs, double CallFunc_BaseCost_Cost, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
};

}


