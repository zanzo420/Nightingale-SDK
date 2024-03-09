#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x89 (0xC5A - 0xBD1)
// BlueprintGeneratedClass BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C
class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C : public ABP_Structure_EncounterTrigger_HopeEchoContainer_C
{
public:
	uint8                                        Pad_A5AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Hope_Echo_Target;                                  // 0xBE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  VFXAnchor_Beam;                                    // 0xBE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Instability;                                       // 0xBF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FVector>            PuzzlePieceArray;                                  // 0xBF8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       PuzzleBeamVFXVectors;                              // 0xC48(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	bool                                         IncompleteLoopActive;                              // 0xC58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TriggedCompleteSequence;                           // 0xC59(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C* GetDefaultObj();

	struct FVector Get_Hope_Echo_Target(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void SetAudioState(class UAkSwitchValue* SwitchValue, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, bool CallFunc_IsValid_ReturnValue);
	void Assign_Puzzle_Beam(const struct FVector& Piece_Vector, int32 Piece_Index, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void OnRep_PuzzleBeamVFXVectors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void PuzzleLockdownVFX();
	void SpawnVFX();
	void Puzzle_Piece_Beam_VFX(class FName Piece_Name);
	void Remove_Puzzle_Piece_Beams_VFX();
	void Advertise_Enum();
	void Deactivated_Enum();
	void PuzzleAdvertiseVFX();
	void Puzzle_Complete_VFX();
	void Puzzle_Flourish();
	void PuzzleComplete();
	void PuzzleStart();
	void Add_Puzzle_Beam(const struct FVector& Piece_Vector, int32 Piece_Index);
	void Remove_Puzzle_Beam(int32 Piece_Index);
	void ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemoryCentre(int32 EntryPoint, int32 K2Node_CustomEvent_Piece_Index, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class FName K2Node_CustomEvent_Piece_Name, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName Temp_name_Variable, bool CallFunc_HasAuthority_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, class FName Temp_name_Variable_1, bool CallFunc_HasAuthority_ReturnValue_3, class UNiagaraComponent* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue_4, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_6, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_6, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_7, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_8, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_7, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_8, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_9, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_9, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_1, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_2, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_2, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_3, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_4, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_3, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_4, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_5, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_6, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_5, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_6, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_7, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_8, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_7, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_8, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_9, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_9, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& K2Node_CustomEvent_Piece_Vector, int32 K2Node_CustomEvent_Piece_Index_1, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


