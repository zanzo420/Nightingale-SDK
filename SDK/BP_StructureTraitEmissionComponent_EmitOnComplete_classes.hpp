#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x708 - 0x700)
// BlueprintGeneratedClass BP_StructureTraitEmissionComponent_EmitOnComplete.BP_StructureTraitEmissionComponent_EmitOnComplete_C
class UBP_StructureTraitEmissionComponent_EmitOnComplete_C : public UStructureTraitEmissionComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_StructureTraitEmissionComponent_EmitOnComplete_C* GetDefaultObj();

	void OnOwningStructureInitialized(class UObject* Structure);
	void OnOwningStructureStateUpdated(class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_StructureTraitEmissionComponent_EmitOnComplete(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class AStructureConstructedBase* K2Node_DynamicCast_AsStructure_Constructed_Base, bool K2Node_DynamicCast_bSuccess, class AStructureConstructedBase* K2Node_DynamicCast_AsStructure_Constructed_Base_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


