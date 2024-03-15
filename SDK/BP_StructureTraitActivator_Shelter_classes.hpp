#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x68 - 0x50)
// BlueprintGeneratedClass BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C
class UBP_StructureTraitActivator_Shelter_C : public UStructureTraitActivator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         OverriddenByArtisanCard;                           // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureTraitAsset*                  ArtisanTrait;                                      // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_StructureTraitActivator_Shelter_C* GetDefaultObj();

	void OnOverriddenByArtisanCardChanged();
	void OnOwnerTraitsChanged(struct FStructureTraitChangedContext& TraitChangedContext, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1);
	void BindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_GetOwningStructure_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetOwningStructure_ReturnValue_1, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, TScriptInterface<class IShelterableEntityInterface> K2Node_DynamicCast_AsShelterable_Entity_Interface, bool K2Node_DynamicCast_bSuccess_1, class UShelterComponent* CallFunc_GetShelterComponentForModify_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void CheckOverriddenByArtisanCard(class UObject* CallFunc_GetOwningStructure_ReturnValue, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, bool CallFunc_HasActiveTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnSheltered(bool IsSheltered);
	void CheckSheltered(class UObject* CallFunc_GetOwningStructure_ReturnValue, TScriptInterface<class IShelterableEntityInterface> K2Node_DynamicCast_AsShelterable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UShelterComponent* CallFunc_GetShelterComponent_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void InitializeActivator(struct FStructureTrait& Trait);
	void ExecuteUbergraph_BP_StructureTraitActivator_Shelter(int32 EntryPoint, const struct FStructureTrait& K2Node_Event_Trait);
};

}


