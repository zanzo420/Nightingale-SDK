#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x6D8 - 0x6B8)
// BlueprintGeneratedClass GA_CreatureAbility_Ranged_HarpySpitProjectile.GA_CreatureAbility_Ranged_HarpySpitProjectile_C
class UGA_CreatureAbility_Ranged_HarpySpitProjectile_C : public UGA_CreatureAbility_Ranged_C
{
public:
	struct FVector                               VarianceVector;                                    // 0x6B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VarianceMagnitude;                                 // 0x6D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Ranged_HarpySpitProjectile_C* GetDefaultObj();

	struct FVector GetProjectileTarget(const struct FTransform& ProjectileStart, bool* bSuccess, const struct FVector& LDirection, double LDistance, const struct FVector& LTarget, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, double CallFunc_Vector_Distance_ReturnValue, TScriptInterface<class IBPI_StructureAIInterfaces_C> K2Node_DynamicCast_AsBPI_Structure_AIInterfaces, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FVector& CallFunc_GetRangedAttackLocation_Location, TScriptInterface<class IBPI_Targeter_C> CallFunc_GetTarget_self_CastInput, class AActor* CallFunc_GetTarget_Target);
	void SpawnProjectiles(class UClass* ProjectileClass, const struct FTransform& ProjectileStart, const struct FVector& ProjectileVelocity, class ABP_CreatureBase_C* InstigatingCreature, double ProjectileDamage, class AActor* IntendedTarget, const struct FVector& StartingLocation, TArray<class UClass*>& ImpactGameplayEffects, TMap<class ABP_ProjectileBase_C*, struct FVector>* Projectiles, bool* bSuccess, TMap<class ABP_ProjectileBase_C*, struct FVector> ProjectilesL, double CurrentOffset, TMap<int32, double> AngleOffsets, TMap<int32, double> K2Node_MakeVariable_MakeVariableOutput, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FS_ProjectileSourceData& K2Node_MakeStruct_S_ProjectileSourceData, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, class ABP_ProjectileBase_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast, float K2Node_MakeStruct_ProjectileDamage_35_6F7B2C90499376C84C4B638F2A609613_ImplicitCast);
};

}


