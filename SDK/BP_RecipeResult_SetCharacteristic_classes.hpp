#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0xF0 - 0x30)
// BlueprintGeneratedClass BP_RecipeResult_SetCharacteristic.BP_RecipeResult_SetCharacteristic_C
class UBP_RecipeResult_SetCharacteristic_C : public UBP_RecipeResult_Base_C
{
public:
	struct FInstanceData_CharacteristicInfo      CharacteristicInfo;                                // 0x30(0xC0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_RecipeResult_SetCharacteristic_C* GetDefaultObj();

	bool CanProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	TArray<class UItemProcessingDataAsset*> ProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool* bSuccess, class UCrafting_Result_Items_DataAsset* CurrentOutput, const TArray<struct FInventoryEntry>& ReturnItems, const struct FInventoryEntry& CurrentItem, class UObject* CharacteristicData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UItemProcessingDataAsset*>& K2Node_MakeArray_Array, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class UItemProcessingDataAsset*>& K2Node_MakeArray_Array_1, class UBP_RecipeResult_SetCharacteristic_C* CallFunc_GetDefaultObject_ReturnValue, TScriptInterface<class IItemProcessingObjectInterface> CallFunc_CanProcessData_self_CastInput, bool CallFunc_CanProcessData_ReturnValue, class UCrafting_Result_Items_DataAsset* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


