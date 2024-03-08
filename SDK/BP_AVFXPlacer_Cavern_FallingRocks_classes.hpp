#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x438 - 0x320)
// BlueprintGeneratedClass BP_AVFXPlacer_Cavern_FallingRocks.BP_AVFXPlacer_Cavern_FallingRocks_C
class ABP_AVFXPlacer_Cavern_FallingRocks_C : public ABP_AVFXPlacer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<int32, TSoftObjectPtr<class UNiagaraSystem>> FXType;                                            // 0x328(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Child_FX_Type;                                     // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Colorred;                                          // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Colorgreen;                                        // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Colorblue;                                         // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ColorAlpha;                                        // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PFX_Location;                                      // 0x3A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AudioMinTimeCache;                                 // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AudioMaxTimeCache;                                 // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AudioEmitterInterpSpeed;                           // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PFX_Loc_Interval_AudioActive;                      // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PFX_Loc_Interval_AudioInactive;                    // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PFX_Loc_Interval_Dynamic;                          // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AmbienceManagerPermission;                         // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Tick_Interval_AudioActive;                         // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Tick_Interval_AudioInactive;                       // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_dustthickness;                                  // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableNiagaraDataExport;                           // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UNiagaraComponent*>             SpawnedSystems;                                    // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       Fx_SampleRVTColorLerp;                             // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_loopDelayMin;                                   // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_loopDelayMax;                                   // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AVFXPlacer_Cavern_FallingRocks_C* GetDefaultObj();

	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset);
	void ReceiveBeginPlay();
	void StopImportFXDust();
	void StartImportFXDust();
	void StopAllAVFX();
	void StartAllAVFX();
	void OnNiagaraAsyncLoadCompleteEvent(class UNiagaraSystem* Asset);
	void ExecuteUbergraph_BP_AVFXPlacer_Cavern_FallingRocks(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, double CallFunc_MakeLiteralDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UNiagaraSystem* K2Node_Event_Asset, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, int32 Temp_int_Variable, TSoftObjectPtr<class UNiagaraSystem> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_2);
};

}


