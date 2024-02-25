#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB20 - 0xB18)
// BlueprintGeneratedClass BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C
class ABP_Structure_EncounterTrigger_Button_C : public ABP_Structure_EncounterTrigger_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB18(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Structure_EncounterTrigger_Button_C* GetDefaultObj();

	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void AVFXParams(struct FS_EncounterAVFXParams* S_EncounterAVFXParams, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams);
	void Activated_Enum();
	void Advertise_Enum();
	void Completed_Enum();
	void Deactivated_Enum();
	void Initialize_Enum();
	void InteractVFX();
	void AdvertiseButton();
	void EncounterComplete();
	void DeactivatedButton();
	void ReceiveBeginPlay();
	void Call_Interact_VFX(class ABP_Structure_EncounterTrigger_C* Triggering_Structure);
	void PerformDirtyRealmReset();
	void ExecuteUbergraph_BP_Structure_EncounterTrigger_Button(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_Structure_EncounterTrigger_C* K2Node_CustomEvent_Triggering_Structure, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


