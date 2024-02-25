#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureFarmingComponent.BP_StructureFarmingComponent_C
// (None)

class UClass* UBP_StructureFarmingComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureFarmingComponent_C");

	return Clss;
}


// BP_StructureFarmingComponent_C BP_StructureFarmingComponent.Default__BP_StructureFarmingComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureFarmingComponent_C* UBP_StructureFarmingComponent_C::GetDefaultObj()
{
	static class UBP_StructureFarmingComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureFarmingComponent_C*>(UBP_StructureFarmingComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureFarmingComponent.BP_StructureFarmingComponent_C.GetCurrentGrowthModifier
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UBP_StructureFarmingComponent_C::GetCurrentGrowthModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureFarmingComponent_C", "GetCurrentGrowthModifier");

	Params::UBP_StructureFarmingComponent_C_GetCurrentGrowthModifier_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureFarmingComponent.BP_StructureFarmingComponent_C.SubtractGrowthModifier
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             GrowthPercentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MIN_GROWTH_MODIFIER                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureFarmingComponent_C::SubtractGrowthModifier(double GrowthPercentage, double MIN_GROWTH_MODIFIER, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureFarmingComponent_C", "SubtractGrowthModifier");

	Params::UBP_StructureFarmingComponent_C_SubtractGrowthModifier_Params Parms{};

	Parms.GrowthPercentage = GrowthPercentage;
	Parms.MIN_GROWTH_MODIFIER = MIN_GROWTH_MODIFIER;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureFarmingComponent.BP_StructureFarmingComponent_C.AddGrowthModifier
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             GrowthPercentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MAX_GROWTH_MODIFIER                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureFarmingComponent_C::AddGrowthModifier(double GrowthPercentage, double MAX_GROWTH_MODIFIER, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureFarmingComponent_C", "AddGrowthModifier");

	Params::UBP_StructureFarmingComponent_C_AddGrowthModifier_Params Parms{};

	Parms.GrowthPercentage = GrowthPercentage;
	Parms.MAX_GROWTH_MODIFIER = MAX_GROWTH_MODIFIER;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureFarmingComponent.BP_StructureFarmingComponent_C.ChangeGrowthModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvironmentalInfluenceDataGrowthRate*GrowthInfluence                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MIN_GROWTH_MODIFIER                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MAX_GROWTH_MODIFIER                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_AddGrowthModifier_GrowthPercentage_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SubtractGrowthModifier_GrowthPercentage_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SubtractGrowthModifier_GrowthPercentage_ImplicitCast_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AddGrowthModifier_GrowthPercentage_ImplicitCast_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureFarmingComponent_C::ChangeGrowthModifier(class UEnvironmentalInfluenceDataGrowthRate* GrowthInfluence, bool Add, int32 MIN_GROWTH_MODIFIER, int32 MAX_GROWTH_MODIFIER, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, double CallFunc_AddGrowthModifier_GrowthPercentage_ImplicitCast, double CallFunc_SubtractGrowthModifier_GrowthPercentage_ImplicitCast, double CallFunc_SubtractGrowthModifier_GrowthPercentage_ImplicitCast_1, double CallFunc_AddGrowthModifier_GrowthPercentage_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureFarmingComponent_C", "ChangeGrowthModifier");

	Params::UBP_StructureFarmingComponent_C_ChangeGrowthModifier_Params Parms{};

	Parms.GrowthInfluence = GrowthInfluence;
	Parms.Add = Add;
	Parms.MIN_GROWTH_MODIFIER = MIN_GROWTH_MODIFIER;
	Parms.MAX_GROWTH_MODIFIER = MAX_GROWTH_MODIFIER;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_AddGrowthModifier_GrowthPercentage_ImplicitCast = CallFunc_AddGrowthModifier_GrowthPercentage_ImplicitCast;
	Parms.CallFunc_SubtractGrowthModifier_GrowthPercentage_ImplicitCast = CallFunc_SubtractGrowthModifier_GrowthPercentage_ImplicitCast;
	Parms.CallFunc_SubtractGrowthModifier_GrowthPercentage_ImplicitCast_1 = CallFunc_SubtractGrowthModifier_GrowthPercentage_ImplicitCast_1;
	Parms.CallFunc_AddGrowthModifier_GrowthPercentage_ImplicitCast_1 = CallFunc_AddGrowthModifier_GrowthPercentage_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureFarmingComponent.BP_StructureFarmingComponent_C.CalculateGrowTime
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Grow_Time                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetCurrentGrowthModifier_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateGrowTime_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_Grow_Time_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_StructureFarmingComponent_C::CalculateGrowTime(float Grow_Time, double CallFunc_GetCurrentGrowthModifier_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_CalculateGrowTime_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_Grow_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureFarmingComponent_C", "CalculateGrowTime");

	Params::UBP_StructureFarmingComponent_C_CalculateGrowTime_Params Parms{};

	Parms.Grow_Time = Grow_Time;
	Parms.CallFunc_GetCurrentGrowthModifier_ReturnValue = CallFunc_GetCurrentGrowthModifier_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_CalculateGrowTime_ReturnValue = CallFunc_CalculateGrowTime_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_Grow_Time_ImplicitCast = K2Node_VariableSet_Grow_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


