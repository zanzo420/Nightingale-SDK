#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AN_Bodyfall.AN_Bodyfall_C
class UAN_Bodyfall_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAN_Bodyfall_C* GetDefaultObj();

	void GetCurrentSurfaceType(class UPawnMovementComponent* MovementComponent, class UAkSwitchValue** SurfaceSwitch, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetLastUpdateLocation_ReturnValue, const struct FFindFloorResult& CallFunc_K2_FindFloor_FloorResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UNWXPhyiscalMaterial* K2Node_DynamicCast_AsNWXPhyiscal_Material, bool K2Node_DynamicCast_bSuccess_1);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class APawn* CachedCharacter, class UAkComponent* AkComponentBody, FDelegateProperty_ Temp_delegate_Variable, class AActor* CallFunc_GetOwner_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, FDelegateProperty_ Temp_delegate_Variable_1, int32 CallFunc_PostAkEvent_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, TArray<class UAkComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UAkSwitchValue* CallFunc_GetCurrentSurfaceType_SurfaceSwitch, class UAkComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 CallFunc_PostAssociatedAkEvent_ReturnValue);
};

}


