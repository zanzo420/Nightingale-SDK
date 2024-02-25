#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureTraitEffect_Stack.BP_StructureTraitEffect_Stack_C
// (None)

class UClass* UBP_StructureTraitEffect_Stack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureTraitEffect_Stack_C");

	return Clss;
}


// BP_StructureTraitEffect_Stack_C BP_StructureTraitEffect_Stack.Default__BP_StructureTraitEffect_Stack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureTraitEffect_Stack_C* UBP_StructureTraitEffect_Stack_C::GetDefaultObj()
{
	static class UBP_StructureTraitEffect_Stack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureTraitEffect_Stack_C*>(UBP_StructureTraitEffect_Stack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureTraitEffect_Stack.BP_StructureTraitEffect_Stack_C.OnTraitRemoved
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             Trait                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UEnvironmentalInfluenceDataTraitStackChange*StackInfluence                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_Stack_C::OnTraitRemoved(class AActor* OwningActor, struct FStructureTrait& Trait, class UEnvironmentalInfluenceDataTraitStackChange* StackInfluence, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_Stack_C", "OnTraitRemoved");

	Params::UBP_StructureTraitEffect_Stack_C_OnTraitRemoved_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.Trait = Trait;
	Parms.StackInfluence = StackInfluence;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEffect_Stack.BP_StructureTraitEffect_Stack_C.RemoveTraitStack
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     TargetStructure                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEnvironmentalInfluenceDataTraitStackChange*StackInfluence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureTrait>     AllTraitsToRemove                                                (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureTraitInterface>K2Node_DynamicCast_AsStructure_Trait_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitComponent*    CallFunc_GetStructureTraitComponentForModify_ReturnValue         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryRemoveBulkTraits_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             CallFunc_GetTargetTraitData_OutTrait                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetTargetTraitData_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_Stack_C::RemoveTraitStack(class UObject* TargetStructure, class UEnvironmentalInfluenceDataTraitStackChange* StackInfluence, const TArray<struct FStructureTrait>& AllTraitsToRemove, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureTraitComponent* CallFunc_GetStructureTraitComponentForModify_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_TryRemoveBulkTraits_ReturnValue, const struct FStructureTrait& CallFunc_GetTargetTraitData_OutTrait, bool CallFunc_GetTargetTraitData_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_Stack_C", "RemoveTraitStack");

	Params::UBP_StructureTraitEffect_Stack_C_RemoveTraitStack_Params Parms{};

	Parms.TargetStructure = TargetStructure;
	Parms.StackInfluence = StackInfluence;
	Parms.AllTraitsToRemove = AllTraitsToRemove;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsStructure_Trait_Interface = K2Node_DynamicCast_AsStructure_Trait_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureTraitComponentForModify_ReturnValue = CallFunc_GetStructureTraitComponentForModify_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_TryRemoveBulkTraits_ReturnValue = CallFunc_TryRemoveBulkTraits_ReturnValue;
	Parms.CallFunc_GetTargetTraitData_OutTrait = CallFunc_GetTargetTraitData_OutTrait;
	Parms.CallFunc_GetTargetTraitData_ReturnValue = CallFunc_GetTargetTraitData_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEffect_Stack.BP_StructureTraitEffect_Stack_C.AddTraitStack
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     TargetStructure                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEnvironmentalInfluenceDataTraitStackChange*StackInfluence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureTrait>     AllTraitsToAdd                                                   (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FStructureTrait             CallFunc_GetTargetTraitData_OutTrait                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetTargetTraitData_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureTraitInterface>K2Node_DynamicCast_AsStructure_Trait_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitComponent*    CallFunc_GetStructureTraitComponentForModify_ReturnValue         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryAddBulkTraits_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_Stack_C::AddTraitStack(class UObject* TargetStructure, class UEnvironmentalInfluenceDataTraitStackChange* StackInfluence, const TArray<struct FStructureTrait>& AllTraitsToAdd, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FStructureTrait& CallFunc_GetTargetTraitData_OutTrait, bool CallFunc_GetTargetTraitData_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureTraitComponent* CallFunc_GetStructureTraitComponentForModify_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TryAddBulkTraits_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_Stack_C", "AddTraitStack");

	Params::UBP_StructureTraitEffect_Stack_C_AddTraitStack_Params Parms{};

	Parms.TargetStructure = TargetStructure;
	Parms.StackInfluence = StackInfluence;
	Parms.AllTraitsToAdd = AllTraitsToAdd;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetTargetTraitData_OutTrait = CallFunc_GetTargetTraitData_OutTrait;
	Parms.CallFunc_GetTargetTraitData_ReturnValue = CallFunc_GetTargetTraitData_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsStructure_Trait_Interface = K2Node_DynamicCast_AsStructure_Trait_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureTraitComponentForModify_ReturnValue = CallFunc_GetStructureTraitComponentForModify_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryAddBulkTraits_ReturnValue = CallFunc_TryAddBulkTraits_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEffect_Stack.BP_StructureTraitEffect_Stack_C.OnTraitAdded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             Trait                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UEnvironmentalInfluenceDataTraitStackChange*StackInfluence                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_Stack_C::OnTraitAdded(class AActor* OwningActor, struct FStructureTrait& Trait, class UEnvironmentalInfluenceDataTraitStackChange* StackInfluence, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_Stack_C", "OnTraitAdded");

	Params::UBP_StructureTraitEffect_Stack_C_OnTraitAdded_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.Trait = Trait;
	Parms.StackInfluence = StackInfluence;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


