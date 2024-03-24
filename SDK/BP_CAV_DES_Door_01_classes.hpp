#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x3F8 - 0x300)
// BlueprintGeneratedClass BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C
class ABP_CAV_DES_Door_01_C : public AGateActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScopedAkComponent*                    DoorIndicatorAk;                                   // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  GPR_FAE_Button01_WB1;                              // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    DoorAudioScopedAK;                                 // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CompleteMeshes;                                    // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  VFXAnchor;                                         // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  VFXAdvertisementAnchor;                            // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  BP_TargetPoint_Buff1;                              // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  BP_TargetPoint_Buff;                               // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  GTS_FAE_TWR_INT_Door_01_C;                         // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SharedRoot;                                        // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Timeline_NewTrack_2_79C84038471B95271C21929700DDAD2C; // 0x358(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Timeline_NewTrack_1_79C84038471B95271C21929700DDAD2C; // 0x370(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Timeline_NewTrack_0_79C84038471B95271C21929700DDAD2C; // 0x388(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline__Direction_79C84038471B95271C21929700DDAD2C; // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline;                                          // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara_System_Spawned;                            // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         GateIsOpen;                                        // 0x3B8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         DoorAudioPlayed;                                   // 0x3B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoorAudioStopped;                                  // 0x3BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EC9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAcousticOpeningComponent*             AcousticOpening;                                   // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     DoorAnchorIdleVfx;                                 // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     DoorAnchorPingVfx;                                 // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       VfxRedState;                                       // 0x3D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VfxBlueState;                                      // 0x3E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Ak_Event_Open_Start;                               // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Ak_Event_Open_Stop;                                // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CAV_DES_Door_01_C* GetDefaultObj();

	void TriggerDoorIndicatorAudio(bool CallFunc_PostAkEventScoped_ReturnValue);
	void SetDoorIndicatorAudioSwitch(class UAkSwitchValue* SwitchValue, bool CallFunc_IsValid_ReturnValue);
	void DeactivateVFX(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ResetDoorAnchorIdleAVFX(bool CallFunc_IsValid_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast);
	void OnAcousticOpeningsUpdated(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UAcousticOpeningComponent* CallFunc_GetNearestAcousticOpening_ReturnValue);
	void DestroyAudio(bool CallFunc_IsDedicatedServer_ReturnValue, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitAudio(bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue);
	void UpdateAcousticOpeningState(const struct FVector& CentrePos, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool IsGateOpen();
	void DoorAudioStop(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void DoorAudioPlay(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnRep_GateIsOpen();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void PlayGateAnim();
	void OpenGate();
	void CloseGate();
	void ReceiveBeginPlay();
	void SSMReady(class AManagerBase* Manager, bool bIsReady);
	void PerformDirtyRealmReset();
	void OnGateFullyOpened();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnPersistentDataRestored();
	void PlayGateOpenAVFX();
	void ExecuteUbergraph_BP_CAV_DES_Door_01(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AManagerBase* K2Node_CustomEvent_Manager, bool K2Node_CustomEvent_bIsReady, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, bool CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterAVFX_NiagaraSystem, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1, bool CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned_1, class UNiagaraComponent* CallFunc_CreateEncounterAVFX_NiagaraSystem_1, bool CallFunc_IsValid_ReturnValue_5, TSubclassOf<class AManagerBase> Temp_class_Variable, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, TSubclassOf<class IInterface> Temp_class_Variable_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, TScriptInterface<class IEncounterDirtyResetInterface> CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1);
};

}


