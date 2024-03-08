#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x110 - 0xA0)
// BlueprintGeneratedClass BP_QuestLocationTriggerComponent.BP_QuestLocationTriggerComponent_C
class UBP_QuestLocationTriggerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       SphereOverlapRadius;                               // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OverlapPosition;                                   // 0xB0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OverlapCheckStartDelay;                            // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OverlapCheckInterval;                              // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          LocationTag;                                       // 0xD8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BoxExtents;                                        // 0xE0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RangeToPlayer;                                     // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSphere;                                         // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A67D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          OverlapCheckTimer;                                 // 0x108(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_QuestLocationTriggerComponent_C* GetDefaultObj();

	void DisableTrigger();
	void EnableTrigger(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelayVariance_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_InitialStartDelayVariance_ImplicitCast_1);
	void ProcessOldActors();
	void ProcessNewActors();
	void TimedOverlapCheck_Box(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_BoxOverlapActors_OutActors, bool CallFunc_BoxOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ActorHasTag_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ActorHasTag_ReturnValue_1, TScriptInterface<class IBPI_TaskTracking_C> K2Node_DynamicCast_AsBPI_Task_Tracking, bool K2Node_DynamicCast_bSuccess_2);
	void Initialize(class USphereComponent* SphereCollision, class UBoxComponent* BoxCollision, bool IsSphere, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetScaledBoxExtent_ReturnValue, float CallFunc_GetScaledSphereRadius_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double K2Node_VariableSet_SphereOverlapRadius_ImplicitCast);
	void TimedOverlapCheck_Sphere(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ActorHasTag_ReturnValue, TScriptInterface<class IBPI_TaskTracking_C> K2Node_DynamicCast_AsBPI_Task_Tracking, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ActorHasTag_ReturnValue_1, float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast);
	void ReceiveAuthorityGained();
	void ReceiveAuthorityLost();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_QuestLocationTriggerComponent(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


