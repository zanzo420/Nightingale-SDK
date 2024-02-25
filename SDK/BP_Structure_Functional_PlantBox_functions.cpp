#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_Functional_PlantBox.BP_Structure_Functional_PlantBox_C
// (Actor)

class UClass* ABP_Structure_Functional_PlantBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_Functional_PlantBox_C");

	return Clss;
}


// BP_Structure_Functional_PlantBox_C BP_Structure_Functional_PlantBox.Default__BP_Structure_Functional_PlantBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_Functional_PlantBox_C* ABP_Structure_Functional_PlantBox_C::GetDefaultObj()
{
	static class ABP_Structure_Functional_PlantBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_Functional_PlantBox_C*>(ABP_Structure_Functional_PlantBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_Functional_PlantBox.BP_Structure_Functional_PlantBox_C.UpdateCraftingDisciplines
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvironmentalInfluenceDataDisciplines*EnvironmentalInfluenceData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               AddDisciplines                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_PlantBox_C::UpdateCraftingDisciplines(class UEnvironmentalInfluenceDataDisciplines* EnvironmentalInfluenceData, bool AddDisciplines)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_PlantBox_C", "UpdateCraftingDisciplines");

	Params::ABP_Structure_Functional_PlantBox_C_UpdateCraftingDisciplines_Params Parms{};

	Parms.EnvironmentalInfluenceData = EnvironmentalInfluenceData;
	Parms.AddDisciplines = AddDisciplines;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_PlantBox.BP_Structure_Functional_PlantBox_C.UpdateCraftingModifiers
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvironmentalInfluenceDataCraftingModifiers*EnvironmentalInfluenceData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               AddModifier                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_PlantBox_C::UpdateCraftingModifiers(class UEnvironmentalInfluenceDataCraftingModifiers* EnvironmentalInfluenceData, bool AddModifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_PlantBox_C", "UpdateCraftingModifiers");

	Params::ABP_Structure_Functional_PlantBox_C_UpdateCraftingModifiers_Params Parms{};

	Parms.EnvironmentalInfluenceData = EnvironmentalInfluenceData;
	Parms.AddModifier = AddModifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_PlantBox.BP_Structure_Functional_PlantBox_C.UpdateRefinementModifier
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_PlantBox_C::UpdateRefinementModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_PlantBox_C", "UpdateRefinementModifier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_PlantBox.BP_Structure_Functional_PlantBox_C.UpdateGrowthTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvironmentalInfluenceDataGrowthRate*EnvironmentalInfluenceData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               AddModifier                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_PlantBox_C::UpdateGrowthTime(class UEnvironmentalInfluenceDataGrowthRate* EnvironmentalInfluenceData, bool AddModifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_PlantBox_C", "UpdateGrowthTime");

	Params::ABP_Structure_Functional_PlantBox_C_UpdateGrowthTime_Params Parms{};

	Parms.EnvironmentalInfluenceData = EnvironmentalInfluenceData;
	Parms.AddModifier = AddModifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_PlantBox.BP_Structure_Functional_PlantBox_C.ExecuteUbergraph_BP_Structure_Functional_PlantBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvironmentalInfluenceDataGrowthRate*K2Node_Event_EnvironmentalInfluenceData                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_AddModifier                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvironmentalInfluenceDataDisciplines*K2Node_Event_EnvironmentalInfluenceData_2                        (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_AddDisciplines                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvironmentalInfluenceDataCraftingModifiers*K2Node_Event_EnvironmentalInfluenceData_1                        (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_AddModifier_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_PlantBox_C::ExecuteUbergraph_BP_Structure_Functional_PlantBox(int32 EntryPoint, class UEnvironmentalInfluenceDataGrowthRate* K2Node_Event_EnvironmentalInfluenceData, bool K2Node_Event_AddModifier, bool CallFunc_IsValid_ReturnValue, class UEnvironmentalInfluenceDataDisciplines* K2Node_Event_EnvironmentalInfluenceData_2, bool K2Node_Event_AddDisciplines, class UEnvironmentalInfluenceDataCraftingModifiers* K2Node_Event_EnvironmentalInfluenceData_1, bool K2Node_Event_AddModifier_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_PlantBox_C", "ExecuteUbergraph_BP_Structure_Functional_PlantBox");

	Params::ABP_Structure_Functional_PlantBox_C_ExecuteUbergraph_BP_Structure_Functional_PlantBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EnvironmentalInfluenceData = K2Node_Event_EnvironmentalInfluenceData;
	Parms.K2Node_Event_AddModifier = K2Node_Event_AddModifier;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_EnvironmentalInfluenceData_2 = K2Node_Event_EnvironmentalInfluenceData_2;
	Parms.K2Node_Event_AddDisciplines = K2Node_Event_AddDisciplines;
	Parms.K2Node_Event_EnvironmentalInfluenceData_1 = K2Node_Event_EnvironmentalInfluenceData_1;
	Parms.K2Node_Event_AddModifier_1 = K2Node_Event_AddModifier_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


