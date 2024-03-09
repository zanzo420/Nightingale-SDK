#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x190 (0x4B0 - 0x320)
// BlueprintGeneratedClass BP_AVFXPlacer_Fog.BP_AVFXPlacer_Fog_C
class ABP_AVFXPlacer_Fog_C : public ABP_AVFXPlacer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<int32, TSoftObjectPtr<class UNiagaraSystem>> FogType;                                           // 0x328(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Child_FX_Type;                                     // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A35F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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
	uint8                                        Pad_A360[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Tick_Interval_AudioActive;                         // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Tick_Interval_AudioInactive;                       // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_fogthickness;                                   // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableNiagaraDataExport;                           // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A361[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UNiagaraSystem>         NiagaraAsset;                                      // 0x410(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         ValleyFogNS;                                       // 0x438(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         AmbienctGroundFogNiagaraAsset;                     // 0x460(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         VistaFogNiagaraAsset;                              // 0x488(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AVFXPlacer_Fog_C* GetDefaultObj();

	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset);
	void OnNiagaraAsyncLoadCompleteEvent(class UNiagaraSystem* Asset);
	void ReceiveBeginPlay();
	void StartImportFXFog();
	void StartAllAVFX();
	void StopImportFXFog();
	void StopAllAVFX();
	void ExecuteUbergraph_BP_AVFXPlacer_Fog(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, class UNiagaraSystem* K2Node_Event_Asset, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_MakeLiteralDouble_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, double CallFunc_MakeLiteralDouble_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast_1, float K2Node_MakeStruct_G_ImplicitCast_1, float K2Node_MakeStruct_B_ImplicitCast_1, float K2Node_MakeStruct_A_ImplicitCast_1, float K2Node_MakeStruct_R_ImplicitCast_2, float K2Node_MakeStruct_G_ImplicitCast_2, float K2Node_MakeStruct_B_ImplicitCast_2, float K2Node_MakeStruct_A_ImplicitCast_2, float CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast_4);
};

}


