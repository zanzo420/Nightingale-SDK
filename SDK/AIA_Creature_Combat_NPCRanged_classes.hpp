#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x178 - 0x16C)
// BlueprintGeneratedClass AIA_Creature_Combat_NPCRanged.AIA_Creature_Combat_NPCRanged_C
class UAIA_Creature_Combat_NPCRanged_C : public UAIA_Creature_Combat_C
{
public:
	uint8                                        Pad_A7B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_NPCRanged_C* GetDefaultObj();

	void Stop(class AActor* Target);
	void ExecuteUbergraph_AIA_Creature_Combat_NPCRanged(int32 EntryPoint, class AActor* K2Node_Event_Target);
};

}


