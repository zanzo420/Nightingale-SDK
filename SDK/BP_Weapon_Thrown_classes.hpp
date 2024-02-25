#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x9F8 - 0x9F0)
// BlueprintGeneratedClass BP_Weapon_Thrown.BP_Weapon_Thrown_C
class ABP_Weapon_Thrown_C : public ABP_Weapon_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Weapon_Thrown_C* GetDefaultObj();

	void DestroyEquippedItem(class AEquippableItem* Item, int32 NumToDestroy, bool bDestroyAll);
	void GameStateReady();
	void ExecuteUbergraph_BP_Weapon_Thrown(int32 EntryPoint, class AEquippableItem* K2Node_Event_Item, int32 K2Node_Event_NumToDestroy, bool K2Node_Event_bDestroyAll);
};

}


