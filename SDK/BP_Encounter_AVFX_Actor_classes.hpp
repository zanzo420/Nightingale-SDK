#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2F8 - 0x2A0)
// BlueprintGeneratedClass BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C
class ABP_Encounter_AVFX_Actor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScopedAkComponent*                    ScopedAkComponent;                                 // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Palette_and_Faction;                               // 0x2B8(0x8)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FGameplayTag                          Affinity_Table_Row;                                // 0x2C0(0x8)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UNiagaraComponent*                     Spawned_VFX;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    IdleAkComponent;                                   // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         StopAkAudio;                                       // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OwnerActorObj;                                     // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            DestroyActor;                                      // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_Encounter_AVFX_Actor_C* GetDefaultObj();

	void DestroyAfterTimeOut(double DestroyTimer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void OnNiagaraComponentDestroy(class UActorComponent* Component, bool CallFunc_PostAkEventScoped_ReturnValue);
	void Clear_AVFX(bool CallFunc_IsValid_ReturnValue);
	void Create_New_Encounter_AVFX(const struct FGameplayTag& New_Affinity_Table_Row, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, bool CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterAVFX_NiagaraSystem);
	void OnLoaded_DC0D00EE4B2FDE5117FDB9970E8552AC(class UObject* Loaded);
	void ReceiveBeginPlay();
	void Spawn_New_Encounter_AVFX(const struct FGameplayTag& Affinity_Table_Row);
	void StopIdleLoopingSFX(const struct FGameplayTag& LoopRowHandle);
	void DestroyActorItself();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_Encounter_AVFX_Actor(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const struct FGameplayTag& K2Node_CustomEvent_Affinity_Table_Row, bool CallFunc_HasAuthority_ReturnValue_2, const struct FGameplayTag& K2Node_CustomEvent_LoopRowHandle, bool CallFunc_HasAuthority_ReturnValue_3, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FS_EncounterAudio& CallFunc_GetTableCellData_OutData, class UObject* Temp_object_Variable, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess, bool CallFunc_PostAkEventScoped_ReturnValue);
	void DestroyActor__DelegateSignature();
};

}


