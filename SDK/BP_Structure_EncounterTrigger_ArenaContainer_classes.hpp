#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9B (0xC6C - 0xBD1)
// BlueprintGeneratedClass BP_Structure_EncounterTrigger_ArenaContainer.BP_Structure_EncounterTrigger_ArenaContainer_C
class ABP_Structure_EncounterTrigger_ArenaContainer_C : public ABP_Structure_EncounterTrigger_HopeEchoContainer_C
{
public:
	uint8                                        Pad_380A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       GlyphAnchor_7;                                     // 0xBE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       GlyphAnchor_6;                                     // 0xBE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       GlyphAnchor_5;                                     // 0xBF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       GlyphAnchor_4;                                     // 0xBF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       GlyphAnchor_3;                                     // 0xC00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       GlyphAnchor_2;                                     // 0xC08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       GlyphAnchor_1;                                     // 0xC10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       GlyphAnchor_0;                                     // 0xC18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Hope_Echo_Target;                                  // 0xC20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       AudioLocation;                                     // 0xC28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_ColorTrack_EB552B244C1E00482BCA5B9A539BE382; // 0xC30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline__Direction_EB552B244C1E00482BCA5B9A539BE382; // 0xC34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_380B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline;                                          // 0xC38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        NumWaves;                                          // 0xC40(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ShieldIndex;                                       // 0xC44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Color_Track;                                       // 0xC48(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_380C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Wave_Timer;                                        // 0xC50(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HopeEchoVFX;                                       // 0xC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AdvertiseVFX;                                      // 0xC60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OriginalNumWaves;                                  // 0xC68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_EncounterTrigger_ArenaContainer_C* GetDefaultObj();

	void Get_Glyph_Anchors(int32 Anchors_Num, TArray<struct FTransform>* Out_Anchor_Transforms, bool* GetTransformsSuccess, const TArray<struct FTransform>& AnchorTransforms, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_1, class USceneComponent* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void ResetAudioRTPC(class UScopedAkComponent* ScopedAk, bool CallFunc_IsValid_ReturnValue, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk);
	struct FVector Get_Hope_Echo_Target(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void SetAudioSwitch(class UAkSwitchValue* SwitchValue, double RTPCResetDelayTime, class UScopedAkComponent* ScopedAk, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void Reset_Instability(int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Layer_VFX(class UNiagaraComponent* Advertise, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void OnRep_NumWaves(class UNiagaraComponent* Advertise, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void Activated_Enum();
	void Advertise_Enum();
	void Completed_Enum();
	void RemoveShieldLayerVFX();
	void Reset_Enum();
	void Remove_Shield_Layer();
	void Complete_Encounter();
	void Wave_In_Progress();
	void Start_Wave_Timer(double WaveTimer);
	void Wave_Defeated();
	void FinishSpawnFromContext(struct FStructureEncounterSpawnContext& SpawnContext);
	void Reset();
	void ExecuteUbergraph_BP_Structure_EncounterTrigger_ArenaContainer(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FName CallFunc_Conv_StringToName_ReturnValue_2, int32 Temp_int_Variable_1, double CallFunc_SafeDivide_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_4, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_2, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UNiagaraComponent* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_3, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_4, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_3, double K2Node_CustomEvent_WaveTimer, const struct FStructureEncounterSpawnContext& K2Node_Event_SpawnContext, float CallFunc_SetPlayRate_NewRate_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast);
};

}


