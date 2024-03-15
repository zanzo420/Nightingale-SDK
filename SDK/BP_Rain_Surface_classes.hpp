#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x2E9 - 0x2A8)
// BlueprintGeneratedClass BP_Rain_Surface.BP_Rain_Surface_C
class UBP_Rain_Surface_C : public USceneComponent
{
public:
	uint8                                        Pad_A611[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScopedAkComponent*                    AkComponentRain;                                   // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         RainActive;                                        // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HailActive;                                        // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A612[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkSwitchValue*                        Material_Switch;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         EmitsSound;                                        // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A613[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    AkComponentHail;                                   // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       EmitterMovementSpeed;                              // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ParentAffectsOcclusion;                            // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Rain_Surface_C* GetDefaultObj();

	void UpdatePerPrecipitation(const struct FVector& NearestPoint, const class FString& NiagaraParam, class UAkAudioEvent* StartEvent, class UAkAudioEvent* StopEvent, class UScopedAkComponent*& AkComponent, class UAkRtpc* Rtpc, bool& ActiveBool, double CallFunc_UpdateRTPC_RTPCAmount, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetRTPCValue_Value, enum class ERTPCValueType CallFunc_GetRTPCValue_OutputValueType, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast);
	void StopEvent(class UAkAudioEvent* StopEvent, class UScopedAkComponent* AkComponent, bool& ActiveBool, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void Start_Event(const struct FVector& Location, const class FString& NiagaraParam, class UAkAudioEvent* StartEvent, class UAkAudioEvent* StopEvent, class UScopedAkComponent*& AkComponent, class UAkRtpc* Rtpc, bool& ActiveBool, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UScopedAkComponent* CallFunc_Spawn_External_Scoped_Ak_Component_Scoped_Ak_Component, double CallFunc_UpdateRTPC_RTPCAmount, bool CallFunc_PostAkEventScoped_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_IsComponentTickEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateRTPC(const class FString& NiagaraParam, class UAkComponent* AkComponent, class UAkRtpc* Rtpc, int32 LerpTime, double* RTPCAmount, double RTPCValue, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetFloatParameter_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetFloatParameter_ReturnValue_1, float CallFunc_SetRTPCValue_Value_ImplicitCast, double K2Node_VariableSet_RTPCValue_ImplicitCast);
	void SlowTick(const struct FVector& NearestPoint, bool CallFunc_GetNearestPoint_Success, const struct FVector& CallFunc_GetNearestPoint_NearestPoint);
	void GetNearestPoint(bool* Success, struct FVector* NearestPoint, class APlayerController* PlayerController, class FName Temp_name_Variable, class USceneComponent* CallFunc_GetAttachParent_ReturnValue, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetClosestPointOnComponentCollision_OutPointOnBody, enum class EGetResult CallFunc_GetClosestPointOnComponentCollision_Branches, float CallFunc_GetClosestPointOnComponentCollision_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateAkPosition(const struct FVector& NearestPoint, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, bool CallFunc_GetNearestPoint_Success, const struct FVector& CallFunc_GetNearestPoint_NearestPoint, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_VInterpTo_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, float CallFunc_VInterpTo_InterpSpeed_ImplicitCast, float CallFunc_VInterpTo_DeltaTime_ImplicitCast, float CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1, float CallFunc_VInterpTo_DeltaTime_ImplicitCast_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Rain_Surface(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


