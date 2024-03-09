#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass BP_RecipeResult_AddSpell.BP_RecipeResult_AddSpell_C
class UBP_RecipeResult_AddSpell_C : public UBP_RecipeResult_GrantItem_C
{
public:
	int32                                        SlotToImbue;                                       // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UTechniqueDataAsset>> SpellTechniques;                                   // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_RecipeResult_AddSpell_C* GetDefaultObj();

	bool CanProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	TArray<class UItemProcessingDataAsset*> ProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool* bSuccess, const struct FInventoryEntry& ItemToGrant, const TArray<class UItemProcessingDataAsset*>& ResultsArray, const TArray<struct FS_Crafting_Recipe_Result_Loaded>& LoadedCraftingOutputs, class UCrafting_Result_Items_DataAsset* CraftingOutputData, const TArray<struct FInventoryEntry>& ItemsToGrant, int32 Quantity, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class UCrafting_Result_Items_DataAsset*>& CallFunc_CreateGrantResults_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


