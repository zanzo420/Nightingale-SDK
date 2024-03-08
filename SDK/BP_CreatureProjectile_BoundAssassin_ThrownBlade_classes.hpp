#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xCE8 - 0xCC8)
// BlueprintGeneratedClass BP_CreatureProjectile_BoundAssassin_ThrownBlade.BP_CreatureProjectile_BoundAssassin_ThrownBlade_C
class ABP_CreatureProjectile_BoundAssassin_ThrownBlade_C : public ABP_Projectile_Piercing_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      StickyDefuseCollision;                             // 0xCD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDefused;                                         // 0xCD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_CreatureProjectile_BoundAssassin_ThrownBlade_C* GetDefaultObj();

	void ValidateImpactDetection(bool* ValidTraceImpact, const struct FGameplayTag& Temp_struct_Variable, const struct FHitResult& CallFunc_GetTraceImpactDetectionData_TraceHitResult, double CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact, const struct FVector& CallFunc_GetTraceImpactDetectionData_TraceHitVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ValidateImpactDetection_ValidTraceImpact, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Initialize(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue);
	void HandleLaunched();
	void ValidatePassthrough(bool* ValidPassthrough, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FHitResult& CallFunc_GetTraceImpactDetectionData_TraceHitResult, double CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact, const struct FVector& CallFunc_GetTraceImpactDetectionData_TraceHitVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void OnDamageReceived(float Damage, class AActor* Target, class AActor* Source, struct FGameplayTagContainer& EffectTags, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer);
	void ExecuteUbergraph_BP_CreatureProjectile_BoundAssassin_ThrownBlade(int32 EntryPoint, float K2Node_Event_Damage, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Source, const struct FGameplayTagContainer& K2Node_Event_EffectTags, const struct FHitResult& K2Node_Event_HitResult, const struct FTagValueContainer& K2Node_Event_TagValueContainer);
	void OnDefused__DelegateSignature();
};

}


