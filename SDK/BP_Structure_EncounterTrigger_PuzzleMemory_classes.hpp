#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xB40 - 0xB18)
// BlueprintGeneratedClass BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C
class ABP_Structure_EncounterTrigger_PuzzleMemory_C : public ABP_Structure_EncounterTrigger_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB18(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  VFXAnchor_Beam;                                    // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Instability;                                       // 0xB28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AssignedIndex;                                     // 0xB2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Lock_SFX_Active;                                   // 0xB30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       InteractionVFXInstability;                         // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_EncounterTrigger_PuzzleMemory_C* GetDefaultObj();

	void AVFXParams(struct FS_EncounterAVFXParams* S_EncounterAVFXParams, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams);
	void PuzzleAdvertiseVFX();
	void PuzzleResetAVFX();
	void PuzzleLockdownVFX();
	void SpawnVFX();
	void PuzzleCorrectVFX();
	void Activated_Enum();
	void Deactivated_Enum();
	void PuzzleCompleteVFX();
	void Completed_Enum();
	void PuzzleINITVFX();
	void Lock_SFX();
	void PuzzleReset();
	void PuzzleLockdown();
	void PuzzleCorrect();
	void InteractVFX();
	void InteractionVFX(float VFX_Instability);
	void ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemory(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, class FName Temp_name_Variable, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, class FName Temp_name_Variable_1, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_5, class FName Temp_name_Variable_2, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_1, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_2, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_3, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_4, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_5, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_6, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue_6, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_7, bool CallFunc_HasAuthority_ReturnValue_7, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_8, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_9, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_10, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_11, class FName Temp_name_Variable_3, class UNiagaraComponent* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_12, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_13, bool CallFunc_Not_PreBool_ReturnValue, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, class UNiagaraComponent* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, float K2Node_CustomEvent_VFX_Instability, bool CallFunc_HasAuthority_ReturnValue_8);
};

}


