#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x320 - 0x2A8)
// BlueprintGeneratedClass BP_Ambient_Audio_Component_Multiposition.BP_Ambient_Audio_Component_Multiposition_C
class UBP_Ambient_Audio_Component_Multiposition_C : public USceneComponent
{
public:
	uint8                                        Pad_A2E5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkAudioEvent*                         StartLoopEvent;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         StopLoopEvent;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         StaticPosition;                                    // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseReverbVolumes;                                  // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OcclusionRefreshInterval;                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AttenuationScalingFactor_;                         // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    AkComponent;                                       // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EAkMultiPositionType              MultiPositionType;                                 // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    ChildTransforms;                                   // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       ChildVectors;                                      // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USceneComponent*>               ChildComponents;                                   // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBP_Ambient_Audio_Component_Multiposition_C* GetDefaultObj();

	void SetMultiposition(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void GetClosestChild(bool* Success, struct FVector* ClosestChild, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TArray<struct FVector>& CallFunc_SortByDistanceToTargetVector_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_Array_Get_Item);
	void UpdateChildrenPositions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetClosestChild_Success, const struct FVector& CallFunc_GetClosestChild_ClosestChild, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void GetChildren(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void SetParameters(float CallFunc_SetAttenuationScalingFactor_Value_ImplicitCast, float K2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast);
	void PlaySound(class UAkAudioEvent* Temp_object_Variable, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAkAudioEvent* K2Node_Select_Default, bool CallFunc_PostAkEventScoped_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Ambient_Audio_Component_Multiposition(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_GetClosestChild_Success, const struct FVector& CallFunc_GetClosestChild_ClosestChild, bool CallFunc_IsDedicatedServer_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
};

}


