#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x458 - 0x450)
// BlueprintGeneratedClass BP_StructureFarmingComponent.BP_StructureFarmingComponent_C
class UBP_StructureFarmingComponent_C : public UStructureFarmingComponent
{
public:
	double                                       GrowthRateModifier;                                // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_StructureFarmingComponent_C* GetDefaultObj();

	double GetCurrentGrowthModifier();
	void SubtractGrowthModifier(double GrowthPercentage, double MIN_GROWTH_MODIFIER, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue);
	void AddGrowthModifier(double GrowthPercentage, double MAX_GROWTH_MODIFIER, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue);
	void ChangeGrowthModifier(class UEnvironmentalInfluenceDataGrowthRate* GrowthInfluence, bool Add, int32 MIN_GROWTH_MODIFIER, int32 MAX_GROWTH_MODIFIER, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, double CallFunc_AddGrowthModifier_GrowthPercentage_ImplicitCast, double CallFunc_SubtractGrowthModifier_GrowthPercentage_ImplicitCast, double CallFunc_SubtractGrowthModifier_GrowthPercentage_ImplicitCast_1, double CallFunc_AddGrowthModifier_GrowthPercentage_ImplicitCast_1);
	float CalculateGrowTime(float Grow_Time, double CallFunc_GetCurrentGrowthModifier_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_CalculateGrowTime_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_Grow_Time_ImplicitCast);
};

}


