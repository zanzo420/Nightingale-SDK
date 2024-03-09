#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7E (0x140 - 0xC2)
// BlueprintGeneratedClass BP_StructureTraitActivator_OnExposed.BP_StructureTraitActivator_OnExposed_C
class UBP_StructureTraitActivator_OnExposed_C : public UBP_StructureTraitActivator_Shelter_C
{
public:
	uint8                                        Pad_A5B2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsActiveByMinorCard;                               // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureTrait                       Trait_0;                                           // 0xD8(0x68)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_StructureTraitActivator_OnExposed_C* GetDefaultObj();

	void CheckActiveByMinorCard_0(TArray<struct FStructureTrait>& CallFunc_GetActiveRealmCardTraits_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void OnSheltered(bool IsSheltered);
	void InitializeActivator(struct FStructureTrait& Trait);
	void ExecuteUbergraph_BP_StructureTraitActivator_OnExposed(int32 EntryPoint, const struct FStructureTrait& K2Node_Event_Trait);
};

}


