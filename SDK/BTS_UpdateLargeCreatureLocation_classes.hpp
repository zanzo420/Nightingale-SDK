#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xE0 - 0x98)
// BlueprintGeneratedClass BTS_UpdateLargeCreatureLocation.BTS_UpdateLargeCreatureLocation_C
class UBTS_UpdateLargeCreatureLocation_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Key;                                               // 0xA0(0x28)(Edit, BlueprintVisible)
	class APawn*                                 Pawn;                                              // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SKMesh;                                            // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTS_UpdateLargeCreatureLocation_C* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTS_UpdateLargeCreatureLocation(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_5, TArray<struct FVector>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_6, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_7, TArray<struct FVector>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_8, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_9, TArray<struct FVector>& K2Node_MakeArray_Array_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<struct FVector>& CallFunc_SortByDistanceToTargetVector_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsValidAILocation_ReturnValue, TArray<struct FVector>& CallFunc_SortByDistanceToTargetVector_ReturnValue_1, const struct FVector& CallFunc_Array_Get_Item_1, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches, bool CallFunc_IsValidAILocation_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches_1, TArray<struct FVector>& CallFunc_SortByDistanceToTargetVector_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_Array_Get_Item_2, bool CallFunc_IsValidAILocation_ReturnValue_2, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches_2, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches_4, bool K2Node_SwitchEnum_CmpSuccess_4, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches_5, bool K2Node_SwitchEnum_CmpSuccess_5);
};

}


