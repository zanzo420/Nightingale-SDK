#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0xD94 - 0xC6C)
// BlueprintGeneratedClass BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C
class ABP_Structure_EncounterTrigger_Pedestal_C : public ABP_Structure_EncounterTrigger_ArenaContainer_C
{
public:
	uint8                                        Pad_60C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  PedestalTagertVFXAnchor;                           // 0xC78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BeamAnchor2;                                       // 0xC80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BeamAnchor1;                                       // 0xC88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SphereAnchor2;                                     // 0xC90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SphereAnchor0;                                     // 0xC98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SphereAnchor1;                                     // 0xCA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BeamAnchor0;                                       // 0xCA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SphereAnchors;                                     // 0xCB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       BeamAnchors;                                       // 0xCB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_7359F2EA465526E19FC7558AA5200D27; // 0xCC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_7359F2EA465526E19FC7558AA5200D27; // 0xCC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0xCC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  PedastalVFXKey;                                    // 0xCD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          PedestalBeamRow;                                   // 0xCD8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   PedestalBeamBones;                                 // 0xCE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          PedestalSphereRow;                                 // 0xCF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          PedestalTargetRow;                                 // 0xCF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  PedestalTarget;                                    // 0xD00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InitializePedestal;                                // 0xD08(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PedestalBeam;                                      // 0xD10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                PedestalSphere;                                    // 0xD20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                          PedestalBeamKeys;                                  // 0xD30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          PedestalSphereKeys;                                // 0xD40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        New_Hope_Echo_Quality_Level;                       // 0xD50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        New_Hope_Echo_Scale;                               // 0xD54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetAnchor;                                      // 0xD58(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BeamALocation;                                     // 0xD70(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VFXSpawned;                                        // 0xD88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Glyph_Number;                                      // 0xD8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Open_Presentation_Delay;                           // 0xD90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_EncounterTrigger_Pedestal_C* GetDefaultObj();

	void StopBeamLoop(class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams);
	void Initialize_Pedestal_VFX(const TArray<struct FVector>& BeamAudioLocations, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UNiagaraComponent* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_1, class USceneComponent* CallFunc_Array_Get_Item_1, class UNiagaraComponent* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Initialize_Trapped_Fae_Reward_Idle_AVFX();
	void Initialize_Idle_Fae_Cage_AVFX();
	void Trigger_Trapped_Fae_Cage_AVFX();
	void Trigger_Open_Fae_Cage_AVFX();
	void Trigger_Idle_Fae_Cage_AVFX();
	void Trigger_Agitated_Fae_Cage_AVFX();
	void HopeEchoParametersSetUp(bool CallFunc_IsValid_ReturnValue);
	void On_Idle_Pedestal_FX_Update(class AEncounterBase* Encounter);
	void On_Combat_End_Pedestal_FX_Update(class AEncounterBase* Encounter);
	void On_Combat_Start_Pedestal_FX_Update(class AEncounterBase* Encounter, class UScopedAkComponent* EncounterScopedAk, bool CallFunc_IsValid_ReturnValue, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk);
	void ClearPedestalVFXs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Advertise_Enum();
	void Activated_Enum();
	void Reset_Enum();
	void Layer_VFX();
	void RemoveShieldLayerVFX();
	void Completed_Enum();
	void PedastalVFXTransitionOverTime();
	void Reset();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Initialize_Hope_Echo_Container(class AEncounterBase* Owning_Encounter, bool Is_Essence_Bundle, bool Is_Combat_Encounter);
	void Set_Fae_Cage_On_Encounter_Complete(class AEncounterBase* Encounter);
	void PedestalAudioSequence();
	void ExecuteUbergraph_BP_Structure_EncounterTrigger_Pedestal(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AEncounterBase* K2Node_Event_Owning_Encounter, bool K2Node_Event_Is_Essence_Bundle, bool K2Node_Event_Is_Combat_Encounter, class AEncounterBase* K2Node_Event_Encounter, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams);
};

}


