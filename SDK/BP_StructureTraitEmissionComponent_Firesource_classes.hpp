#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x708 - 0x700)
// BlueprintGeneratedClass BP_StructureTraitEmissionComponent_Firesource.BP_StructureTraitEmissionComponent_Firesource_C
class UBP_StructureTraitEmissionComponent_Firesource_C : public UStructureTraitEmissionComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_StructureTraitEmissionComponent_Firesource_C* GetDefaultObj();

	void OnIgnite();
	void OnExtinguish();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void PostInitializeEmissionTraits();
	void ExecuteUbergraph_BP_StructureTraitEmissionComponent_Firesource(int32 EntryPoint, class UStructureFireComponent* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IStructureFireInterface> K2Node_DynamicCast_AsStructure_Fire_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureFireComponent* CallFunc_GetStructureFireComponent_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


