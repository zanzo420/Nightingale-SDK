#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x430 - 0x320)
// BlueprintGeneratedClass BP_AVFXPlacer_RiverWaterSplash.BP_AVFXPlacer_RiverWaterSplash_C
class ABP_AVFXPlacer_RiverWaterSplash_C : public ABP_AVFXPlacer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Child_FX_Type;                                     // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A815[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Colorred;                                          // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Colorgreen;                                        // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Colorblue;                                         // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ColorAlpha;                                        // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PFX_Location;                                      // 0x350(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AudioMinTimeCache;                                 // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AudioMaxTimeCache;                                 // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AudioEmitterInterpSpeed;                           // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PFX_Loc_Interval_AudioActive;                      // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PFX_Loc_Interval_AudioInactive;                    // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PFX_Loc_Interval_Dynamic;                          // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AmbienceManagerPermission;                         // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A817[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Tick_Interval_AudioActive;                         // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Tick_Interval_AudioInactive;                       // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_waterspeed;                                     // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableNiagaraDataExport;                           // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A819[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Fx_waterbounce_dir_x;                              // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_waterbounce_dir_y;                              // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_waterbounce_dir_z;                              // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_watervelocity_x;                                // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_watervelocity_y;                                // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_watervelocity_z;                                // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_waterdepth;                                     // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_rock_dist;                                      // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewSplash;                                         // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugMode;                                         // 0x401(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A81B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UNiagaraSystem>         RiverRockSplashNiagaraAsset;                       // 0x408(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AVFXPlacer_RiverWaterSplash_C* GetDefaultObj();

	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset);
	void ReceiveBeginPlay();
	void StopImportFXWaterSplash();
	void StartImportFXWaterSpash();
	void StopAllAVFX();
	void StartAllAVFX();
	void OnNiagaraAsyncLoadCompleteEvent(class UNiagaraSystem* Asset);
	void ExecuteUbergraph_BP_AVFXPlacer_RiverWaterSplash(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, class UNiagaraSystem* K2Node_Event_Asset, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_4, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_SetFloatParameter_Param_ImplicitCast_4, float CallFunc_SetFloatParameter_Param_ImplicitCast_5);
};

}


