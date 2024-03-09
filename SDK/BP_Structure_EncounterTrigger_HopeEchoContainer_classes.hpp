#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0xBD1 - 0xB18)
// BlueprintGeneratedClass BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C
class ABP_Structure_EncounterTrigger_HopeEchoContainer_C : public ABP_Structure_EncounterTrigger_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB18(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Fae_Cage_Anchor;                                   // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       FaeCageTrapped;                                    // 0xB28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FaeCageAgitated;                                   // 0xB30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FaeCageCalm;                                       // 0xB38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CageOpenDelayTimer;                                // 0xB40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FaeCageVFXKey;                                     // 0xB48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FaeRewardKey;                                      // 0xB50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          FaeCageOpenTableRow;                               // 0xB58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          FaeCageIdleTableRow;                               // 0xB60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EssenceBundleTrappedIdle;                          // 0xB68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          HopeEchoTrappedIdle;                               // 0xB70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     HopeEchoEscapeNiagaraComponent;                    // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  TargetStaticMesh;                                  // 0xB80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AEncounterBase*                        Owning_Encounter;                                  // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EFaeCageState                     Fae_Cage_State;                                    // 0xB90(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	enum class EEncounterRewardActor             Encounter_Reward_Actor_Type;                       // 0xB91(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3CF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Reward_Class_Reference;                            // 0xB98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Hope_Echo_Discovery_Class_Reference;               // 0xBA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Essence_Bundle_Class_Reference;                    // 0xBA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Reveal_Cage_AVFX;                                  // 0xBB0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       InstabilityCache;                                  // 0xBB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkSwitchValue*                        FaeCageAudioSwitch;                                // 0xBC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Encounter_HopeEcho_Base_C*         CachedHopeEcho;                                    // 0xBC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, NoDestructor, HasGetValueTypeHash)
	enum class EEncounterRewardType              Encounter_Reward_Type;                             // 0xBD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* GetDefaultObj();

	void ClearCachedHopeEcho(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetFaeCageAudioSwitch(class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, bool CallFunc_IsValid_ReturnValue);
	void StopTrappedRewardLoops(const struct FGameplayTag& StopEssBundleIdle, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams);
	void OnRep_Reveal_Cage_AVFX(bool CallFunc_HasAuthority_ReturnValue);
	void Set_Fae_Cage_On_Encounter_Complete(class AEncounterBase* Encounter, class UClass* Encounter_Reward_Actor_Class, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_Encounter_HopeEcho_Base_C* K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Base, bool K2Node_DynamicCast_bSuccess);
	void OnRep_Encounter_Reward_Actor_Type(bool CallFunc_HasAuthority_ReturnValue);
	void Set_Fae_Cage_State_On_Combat_Ended(class AEncounterBase* Encounter);
	void Set_Fae_Cage_State_On_Combat_Started(class AEncounterBase* Encounter);
	void Set_Fae_Cage_State_On_Encounter_Started();
	void OnRep_Fae_Cage_State(bool CallFunc_HasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Create_Cage_Open_AVFX_When_Time_Out(const struct FGameplayTag& LoopStopTag, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1);
	void Trigger_Open_Fae_Cage_AVFX(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void Trigger_Agitated_Fae_Cage_AVFX(float CallFunc_Update_Fae_Cage_AVFX_Param_ImplicitCast);
	void Trigger_Trapped_Fae_Cage_AVFX(float CallFunc_Update_Fae_Cage_AVFX_Param_ImplicitCast);
	void Trigger_Idle_Fae_Cage_AVFX();
	void Initialize_Trapped_Fae_Reward_Idle_AVFX(const struct FGameplayTag& Affinity_Table_Row, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams);
	void Initialize_Idle_Fae_Cage_AVFX(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams);
	void Update_Fae_Cage_AVFX(float Param, const struct FGameplayTag& HostileToCalmTransitionTag, class UScopedAkComponent* EncounterScopedAk, class UNiagaraComponent* Fae_Cage_AVFX, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, class UAkSwitchValue* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UAkSwitchValue* Temp_object_Variable_1, class UAkSwitchValue* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, double K2Node_VariableSet_InstabilityCache_ImplicitCast, double K2Node_VariableSet_InstabilityCache_ImplicitCast_1, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1);
	void OnDestroyedEvent();
	void Initialize_Hope_Echo_Container(class AEncounterBase* Owning_Encounter, bool Is_Essence_Bundle, bool Is_Combat_Encounter);
	void Unbind_from_Encounter_Events();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_Structure_EncounterTrigger_HopeEchoContainer(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AEncounterBase* K2Node_CustomEvent_Owning_Encounter, bool K2Node_CustomEvent_Is_Essence_Bundle, bool K2Node_CustomEvent_Is_Combat_Encounter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
};

}


