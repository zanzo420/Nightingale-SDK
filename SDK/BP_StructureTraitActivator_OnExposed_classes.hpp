#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x70 - 0x68)
// BlueprintGeneratedClass BP_StructureTraitActivator_OnExposed.BP_StructureTraitActivator_OnExposed_C
class UBP_StructureTraitActivator_OnExposed_C : public UBP_StructureTraitActivator_Shelter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_StructureTraitActivator_OnExposed_C* GetDefaultObj();

	void OnSheltered(bool IsSheltered);
	void InitializeActivator(struct FStructureTrait& Trait);
	void ExecuteUbergraph_BP_StructureTraitActivator_OnExposed(int32 EntryPoint, const struct FStructureTrait& K2Node_Event_Trait);
};

}


