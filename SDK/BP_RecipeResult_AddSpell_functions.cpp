#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RecipeResult_AddSpell.BP_RecipeResult_AddSpell_C
// (None)

class UClass* UBP_RecipeResult_AddSpell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RecipeResult_AddSpell_C");

	return Clss;
}


// BP_RecipeResult_AddSpell_C BP_RecipeResult_AddSpell.Default__BP_RecipeResult_AddSpell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RecipeResult_AddSpell_C* UBP_RecipeResult_AddSpell_C::GetDefaultObj()
{
	static class UBP_RecipeResult_AddSpell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RecipeResult_AddSpell_C*>(UBP_RecipeResult_AddSpell_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RecipeResult_AddSpell.BP_RecipeResult_AddSpell_C.CanProcessData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InstigatingActor                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     InputItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UItemProcessingDataAsset*>ProcessingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_RecipeResult_AddSpell_C::CanProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_AddSpell_C", "CanProcessData");

	Params::UBP_RecipeResult_AddSpell_C_CanProcessData_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.TargetActor = TargetActor;
	Parms.Context = Context;
	Parms.InputItems = InputItems;
	Parms.ProcessingData = ProcessingData;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RecipeResult_AddSpell.BP_RecipeResult_AddSpell_C.ProcessData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InstigatingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     InputItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UItemProcessingDataAsset*>ProcessingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// struct FInventoryEntry             ItemToGrant                                                      (Edit, BlueprintVisible)
// TArray<class UItemProcessingDataAsset*>ResultsArray                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FS_Crafting_Recipe_Result_Loaded>LoadedCraftingOutputs                                            (Edit, BlueprintVisible)
// class UCrafting_Result_Items_DataAsset*CraftingOutputData                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     ItemsToGrant                                                     (Edit, BlueprintVisible)
// int32                              Quantity                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCrafting_Result_Items_DataAsset*>CallFunc_CreateGrantResults_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<class UItemProcessingDataAsset*> UBP_RecipeResult_AddSpell_C::ProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool* bSuccess, const struct FInventoryEntry& ItemToGrant, const TArray<class UItemProcessingDataAsset*>& ResultsArray, const TArray<struct FS_Crafting_Recipe_Result_Loaded>& LoadedCraftingOutputs, class UCrafting_Result_Items_DataAsset* CraftingOutputData, const TArray<struct FInventoryEntry>& ItemsToGrant, int32 Quantity, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class UCrafting_Result_Items_DataAsset*>& CallFunc_CreateGrantResults_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_AddSpell_C", "ProcessData");

	Params::UBP_RecipeResult_AddSpell_C_ProcessData_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.TargetActor = TargetActor;
	Parms.Context = Context;
	Parms.InputItems = InputItems;
	Parms.ProcessingData = ProcessingData;
	Parms.ItemToGrant = ItemToGrant;
	Parms.ResultsArray = ResultsArray;
	Parms.LoadedCraftingOutputs = LoadedCraftingOutputs;
	Parms.CraftingOutputData = CraftingOutputData;
	Parms.ItemsToGrant = ItemsToGrant;
	Parms.Quantity = Quantity;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_CreateGrantResults_ReturnValue = CallFunc_CreateGrantResults_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


