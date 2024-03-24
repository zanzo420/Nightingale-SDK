#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x68 - 0x50)
// BlueprintGeneratedClass BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C
class UBP_StructureTraitActivator_OnLandscape_C : public UStructureTraitActivator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         OverriddenByArtisanCard;                           // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureTraitAsset*                  ArtisanTrait;                                      // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_StructureTraitActivator_OnLandscape_C* GetDefaultObj();

	void OnOwnerTraitsChanged(struct FStructureTraitChangedContext& TraitChangedContext, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1);
	void BindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_GetOwningStructure_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* CallFunc_GetSupportObjectFromStructure_ReturnValue, class UObject* CallFunc_GetOwningStructure_ReturnValue_1, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void CheckOverriddenByArtisanCard(class UObject* CallFunc_GetOwningStructure_ReturnValue, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, bool CallFunc_HasActiveTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CheckSupport(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_GetOwningStructure_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UObject*>& CallFunc_GetAllSupportingObjectsOfType_OutSupportingObjects, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsHitObjectLandscape_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void InitializeActivator(struct FStructureTrait& Trait);
	void ExecuteUbergraph_BP_StructureTraitActivator_OnLandscape(int32 EntryPoint, const struct FStructureTrait& K2Node_Event_Trait, class UObject* CallFunc_GetOwningStructure_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


