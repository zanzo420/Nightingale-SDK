#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0xD8 - 0xC2)
// BlueprintGeneratedClass BP_StructureTraitActivator_OnSheltered.BP_StructureTraitActivator_OnSheltered_C
class UBP_StructureTraitActivator_OnSheltered_C : public UBP_StructureTraitActivator_Shelter_C
{
public:
	uint8                                        Pad_52D4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          ShelterTimer_0;                                    // 0xD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_StructureTraitActivator_OnSheltered_C* GetDefaultObj();

	void OnSheltered(bool IsSheltered);
	void InitializeActivator(struct FStructureTrait& Trait);
	void ExecuteUbergraph_BP_StructureTraitActivator_OnSheltered(int32 EntryPoint, const struct FStructureTrait& K2Node_Event_Trait);
};

}


