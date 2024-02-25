#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RecipeResult_SetCharacteristic.BP_RecipeResult_SetCharacteristic_C
// (None)

class UClass* UBP_RecipeResult_SetCharacteristic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RecipeResult_SetCharacteristic_C");

	return Clss;
}


// BP_RecipeResult_SetCharacteristic_C BP_RecipeResult_SetCharacteristic.Default__BP_RecipeResult_SetCharacteristic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RecipeResult_SetCharacteristic_C* UBP_RecipeResult_SetCharacteristic_C::GetDefaultObj()
{
	static class UBP_RecipeResult_SetCharacteristic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RecipeResult_SetCharacteristic_C*>(UBP_RecipeResult_SetCharacteristic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RecipeResult_SetCharacteristic.BP_RecipeResult_SetCharacteristic_C.CanProcessData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InstigatingActor                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     InputItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UItemProcessingDataAsset*>ProcessingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_RecipeResult_SetCharacteristic_C::CanProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_SetCharacteristic_C", "CanProcessData");

	Params::UBP_RecipeResult_SetCharacteristic_C_CanProcessData_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.TargetActor = TargetActor;
	Parms.Context = Context;
	Parms.InputItems = InputItems;
	Parms.ProcessingData = ProcessingData;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RecipeResult_SetCharacteristic.BP_RecipeResult_SetCharacteristic_C.ProcessData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InstigatingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     InputItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UItemProcessingDataAsset*>ProcessingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// class UCrafting_Result_Items_DataAsset*CurrentOutput                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     ReturnItems                                                      (Edit, BlueprintVisible)
// struct FInventoryEntry             CurrentItem                                                      (Edit, BlueprintVisible)
// class UObject*                     CharacteristicData                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// class UBP_RecipeResult_SetCharacteristic_C*CallFunc_GetDefaultObject_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemProcessingObjectInterface>CallFunc_CanProcessData_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanProcessData_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCrafting_Result_Items_DataAsset*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<class UItemProcessingDataAsset*> UBP_RecipeResult_SetCharacteristic_C::ProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool* bSuccess, class UCrafting_Result_Items_DataAsset* CurrentOutput, const TArray<struct FInventoryEntry>& ReturnItems, const struct FInventoryEntry& CurrentItem, class UObject* CharacteristicData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UItemProcessingDataAsset*>& K2Node_MakeArray_Array, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class UItemProcessingDataAsset*>& K2Node_MakeArray_Array_1, class UBP_RecipeResult_SetCharacteristic_C* CallFunc_GetDefaultObject_ReturnValue, TScriptInterface<class IItemProcessingObjectInterface> CallFunc_CanProcessData_self_CastInput, bool CallFunc_CanProcessData_ReturnValue, class UCrafting_Result_Items_DataAsset* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_SetCharacteristic_C", "ProcessData");

	Params::UBP_RecipeResult_SetCharacteristic_C_ProcessData_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.TargetActor = TargetActor;
	Parms.Context = Context;
	Parms.InputItems = InputItems;
	Parms.ProcessingData = ProcessingData;
	Parms.CurrentOutput = CurrentOutput;
	Parms.ReturnItems = ReturnItems;
	Parms.CurrentItem = CurrentItem;
	Parms.CharacteristicData = CharacteristicData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.CallFunc_CanProcessData_self_CastInput = CallFunc_CanProcessData_self_CastInput;
	Parms.CallFunc_CanProcessData_ReturnValue = CallFunc_CanProcessData_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


