#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x458 - 0x320)
// BlueprintGeneratedClass BP_AVFXPlacer_CAM_ENV.BP_AVFXPlacer_CAM_ENV_C
class ABP_AVFXPlacer_CAM_ENV_C : public ABP_AVFXPlacer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<int32, TSoftObjectPtr<class UNiagaraSystem>> BirdType;                                          // 0x328(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Child_FX_Type;                                     // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Colorred;                                          // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Colorgreen;                                        // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Colorblue;                                         // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ColorAlpha;                                        // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     SpawnedSystemInsects;                              // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  DataTableRowName;                                  // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_envopenedge;                                    // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_envopenmid;                                     // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_envtrees;                                       // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PFX_Location;                                      // 0x3C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fx_envshrubshore;                                  // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableNiagaraDataExport;                           // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     SpawnedSystemFloaters;                             // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       InsectsBiomeRateScale;                             // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FloatersBiomeRateScale;                            // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         AmbientFloaterRuralNiagaraAsset;                   // 0x408(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         Flying_Insects_Niagara_Asset;                      // 0x430(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AVFXPlacer_CAM_ENV_C* GetDefaultObj();

	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset);
	void ReceiveBeginPlay();
	void StopImportFXInsects();
	void StartImportFXInsects();
	void StopAllAVFX();
	void StartAllAVFX();
	void Spawn_Ambient_Floater_Rural_VFX(class UNiagaraSystem* Asset);
	void Spawn_Flying_Insects_VFX(class UNiagaraSystem* Asset);
	void ExecuteUbergraph_BP_AVFXPlacer_CAM_ENV(int32 EntryPoint, enum class EBiomeID Temp_byte_Variable, enum class EBiomeID Temp_byte_Variable_1, float Temp_real_Variable, float Temp_real_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, float Temp_real_Variable_4, float Temp_real_Variable_5, float Temp_real_Variable_6, float Temp_real_Variable_7, float Temp_real_Variable_8, float Temp_real_Variable_9, float Temp_real_Variable_10, float Temp_real_Variable_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsValid_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue_1, double CallFunc_MakeLiteralDouble_ReturnValue_2, int32 Temp_int_Variable, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue_3, float K2Node_Select_Default_1, float Temp_real_Variable_12, float Temp_real_Variable_13, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, float Temp_real_Variable_14, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, class UNiagaraSystem* K2Node_CustomEvent_Asset_1, bool CallFunc_IsValid_ReturnValue_2, class UNiagaraSystem* K2Node_CustomEvent_Asset, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, float Temp_real_Variable_15, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, float Temp_real_Variable_16, float Temp_real_Variable_17, float Temp_real_Variable_18, float Temp_real_Variable_19, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, float Temp_real_Variable_20, float Temp_real_Variable_21, float Temp_real_Variable_22, float Temp_real_Variable_23, float K2Node_Select_Default_2, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float K2Node_Select_Any_ImplicitCast, float K2Node_Select_Any_ImplicitCast_1, double K2Node_VariableSet_FloatersBiomeRateScale_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_SetFloatParameter_Param_ImplicitCast_4, float CallFunc_SetFloatParameter_Param_ImplicitCast_5, float CallFunc_SetFloatParameter_Param_ImplicitCast_6, float CallFunc_SetFloatParameter_Param_ImplicitCast_7, float CallFunc_SetFloatParameter_Param_ImplicitCast_8, double K2Node_VariableSet_InsectsBiomeRateScale_ImplicitCast);
};

}


