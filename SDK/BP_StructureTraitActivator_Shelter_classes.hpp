#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x72 (0xC2 - 0x50)
// BlueprintGeneratedClass BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C
class UBP_StructureTraitActivator_Shelter_C : public UStructureTraitActivator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FStructureTrait                       Trait;                                             // 0x58(0x68)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         ActiveByMinorCard;                                 // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSheltered;                                       // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_StructureTraitActivator_Shelter_C* GetDefaultObj();

	void CheckActiveByMinorCard(TArray<struct FStructureTrait>& CallFunc_GetActiveRealmCardTraits_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void OnSheltered(bool IsSheltered);
	void CheckSheltered(class UObject* CallFunc_GetOwningStructure_ReturnValue, TScriptInterface<class IShelterableEntityInterface> K2Node_DynamicCast_AsShelterable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UShelterComponent* CallFunc_GetShelterComponent_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void InitializeActivator(struct FStructureTrait& Trait);
	void ExecuteUbergraph_BP_StructureTraitActivator_Shelter(int32 EntryPoint, const struct FStructureTrait& K2Node_Event_Trait, class UObject* CallFunc_GetOwningStructure_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IShelterableEntityInterface> K2Node_DynamicCast_AsShelterable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UShelterComponent* CallFunc_GetShelterComponentForModify_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


