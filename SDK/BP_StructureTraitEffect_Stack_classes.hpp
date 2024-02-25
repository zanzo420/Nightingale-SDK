#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_StructureTraitEffect_Stack.BP_StructureTraitEffect_Stack_C
class UBP_StructureTraitEffect_Stack_C : public UStructureTraitEffect
{
public:

	static class UClass* StaticClass();
	static class UBP_StructureTraitEffect_Stack_C* GetDefaultObj();

	void OnTraitRemoved(class AActor* OwningActor, struct FStructureTrait& Trait, class UEnvironmentalInfluenceDataTraitStackChange* StackInfluence, bool K2Node_SwitchEnum_CmpSuccess);
	void RemoveTraitStack(class UObject* TargetStructure, class UEnvironmentalInfluenceDataTraitStackChange* StackInfluence, const TArray<struct FStructureTrait>& AllTraitsToRemove, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureTraitComponent* CallFunc_GetStructureTraitComponentForModify_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_TryRemoveBulkTraits_ReturnValue, const struct FStructureTrait& CallFunc_GetTargetTraitData_OutTrait, bool CallFunc_GetTargetTraitData_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void AddTraitStack(class UObject* TargetStructure, class UEnvironmentalInfluenceDataTraitStackChange* StackInfluence, const TArray<struct FStructureTrait>& AllTraitsToAdd, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FStructureTrait& CallFunc_GetTargetTraitData_OutTrait, bool CallFunc_GetTargetTraitData_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureTraitComponent* CallFunc_GetStructureTraitComponentForModify_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TryAddBulkTraits_ReturnValue);
	void OnTraitAdded(class AActor* OwningActor, struct FStructureTrait& Trait, class UEnvironmentalInfluenceDataTraitStackChange* StackInfluence, bool K2Node_SwitchEnum_CmpSuccess);
};

}


