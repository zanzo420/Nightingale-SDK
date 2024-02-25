#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x530 - 0x528)
// BlueprintGeneratedClass BP_Structure_PortalVFX.BP_Structure_PortalVFX_C
class ABP_Structure_PortalVFX_C : public ABP_PortalArchVFX_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x528(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Structure_PortalVFX_C* GetDefaultObj();

	bool ShouldOptOutOfPersistenceStore();
	void OnLinkedReferencesRestored();
	void OnPersistentDataRestored();
	void ExecuteUbergraph_BP_Structure_PortalVFX(int32 EntryPoint);
};

}


