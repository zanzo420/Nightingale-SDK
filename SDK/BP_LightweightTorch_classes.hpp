#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x3F8 - 0x3C8)
// BlueprintGeneratedClass BP_LightweightTorch.BP_LightweightTorch_C
class ABP_LightweightTorch_C : public ABP_LightweightAttachedItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_Torch;                                          // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         StartedSFX;                                        // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A862[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    FireSFXComponent;                                  // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       TorchVelocity;                                     // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FireVelocityTimer;                                 // 0x3F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LightweightTorch_C* GetDefaultObj();

	void StopAudioFireSFX(bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue);
	void HandleLightVisibility(bool CallFunc_ShouldShowLight_bShowLight);
	void AttachVFX(bool* Success, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateVelocity(bool CallFunc_IsValid_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void OnEquippedInternal();
	void PlayAudioFireSFX(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue);
	void TurnOn();
	void TurnOff();
	void ReceiveBeginPlay();
	void OnLoadComplete();
	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_LightweightTorch(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, double CallFunc_VSize_ReturnValue, bool CallFunc_AttachVFX_Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


