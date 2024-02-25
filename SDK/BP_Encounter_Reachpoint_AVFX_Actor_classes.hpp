#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// BlueprintGeneratedClass BP_Encounter_Reachpoint_AVFX_Actor.BP_Encounter_Reachpoint_AVFX_Actor_C
class ABP_Encounter_Reachpoint_AVFX_Actor_C : public ABP_Encounter_AVFX_Actor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Encounter_Reachpoint_AVFX_Actor_C* GetDefaultObj();

	void CheckBoundsForVFX(double VfxScale, const struct FVector& Origin, TArray<class UObject*>& Temp_object_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FBox& CallFunc_GetNiagaraComponentLocalBounds_OutBounds, bool CallFunc_GetNiagaraComponentLocalBounds_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_NWXLineTraceSingle_OutHit, bool CallFunc_NWXLineTraceSingle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_SetNiagaraVariableFloat_InValue_ImplicitCast);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Encounter_Reachpoint_AVFX_Actor(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


