#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0xF8 - 0x30)
// BlueprintGeneratedClass ANS_CreatureConeTrace.ANS_CreatureConeTrace_C
class UANS_CreatureConeTrace_C : public UAnimNotifyState
{
public:
	struct FGuid                                 TraceGuid;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ConeStartSocket;                                   // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ConeLength;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ConeHalfAngle;                                     // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseItemMesh;                                       // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_977D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          AttackTag;                                         // 0x5C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_977E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x68(0x20)(Edit, BlueprintVisible)
	struct FS_CreatureKnockbackData              KnockbackData;                                     // 0x88(0x2E)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_977F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectDOT                      StatusEffectDOT;                                   // 0xB8(0x18)(Edit, BlueprintVisible, NoDestructor)
	class UStatusEffectDataAsset*                StatusEffect;                                      // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       StatusDuration;                                    // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        StatusLevel;                                       // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugCone;                                         // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9780[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TickRate;                                          // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       YOffset;                                           // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_CreatureConeTrace_C* GetDefaultObj();

	void ApplyInfiniteStatusEffects(class UObject* Target, class ABP_CreatureBase_C* Creature, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void RemoveAndApplyTimedStatusEffects(class UObject* Target, class ABP_CreatureBase_C* Creature, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveStatusEffect_ReturnValue);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class ABP_CreatureBase_C* LCreature, class USkeletalMeshComponent* LMesh, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, const struct FSocketHitObjects& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UObject*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess);
	void HandleHitActor(struct FHitResult& HitResult, class ABP_CreatureBase_C* Creature, class AActor* HitCreature, const struct FTagValueContainer& TagValueContainer, class ABP_CreatureBase_C* LCreature, TArray<struct FHitResult>& K2Node_MakeArray_Array, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResults_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class FName CallFunc_GetTraceData_Override_Data_Socket_Start, class FName CallFunc_GetTraceData_Override_Data_Socket_End, double CallFunc_GetTraceData_Override_Data_Radius, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromGameplayTagContainer_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	void HandleHits(class ABP_CreatureBase_C* Creature, TArray<struct FHitResult>& Hits, TSet<class UObject*> LNewHitObjects, const struct FVector& ImpactPoint, const struct FVector& LTraceStart, const struct FHitResult& LHitResult, TSet<class UObject*> LOldHitObjects, class UObject* LHitObject, class UPrimitiveComponent* LHitComponent, class AActor* LHitActor, class ABP_CreatureBase_C* LCreature, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnemy_bIsEnemy, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue_1, const struct FSocketHitObjects& K2Node_MakeStruct_SocketHitObjects, int32 Temp_int_Array_Index_Variable_1, const struct FSocketHitObjects& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FSocketHitObjects& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FSocketHitObjects& K2Node_MakeStruct_SocketHitObjects_1, TSet<class UObject*> CallFunc_Set_Difference_Result, TArray<class UObject*>& CallFunc_Set_ToArray_Result, class UObject* CallFunc_Array_Get_Item_1, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FSocketHitObjects& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetSkeletalMesh_Mesh, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1, double CallFunc_DegAcos_ReturnValue, double CallFunc_DegAcos_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_DegAcos_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast, float CallFunc_DrawDebugConeInDegrees_Length_ImplicitCast, float CallFunc_DrawDebugConeInDegrees_AngleWidth_ImplicitCast, float CallFunc_DrawDebugConeInDegrees_AngleHeight_ImplicitCast);
	void GetTraceLocation(class ABP_CreatureBase_C* Creature, bool* BoxTrace, struct FVector* Location, class USkeletalMeshComponent* LMesh, class ABP_CreatureBase_C* LCreature, class FName LEnd, class FName LStart, class USkeletalMeshComponent* CallFunc_GetSkeletalMesh_Mesh, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetSkeletalMesh(class ABP_CreatureBase_C* Creature, class USkeletalMeshComponent** Mesh, class AEquippableItem* LItem, class ABP_CreatureBase_C* LCreature, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetRootMesh_ReturnValue, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetItem_Weapon);
	void GetTraceData(class ABP_CreatureBase_C* Creature, class FName* Override_Data_Socket_Start, class FName* Override_Data_Socket_End, double* Override_Data_Radius, struct FGameplayTag* Override_Data_Attack_Tag, struct FGameplayTagContainer* Override_Data_Gameplay_Tags, struct FS_CreatureKnockbackData* Override_Data_Knockback_Data, class ABP_CreatureBase_C* LCreature, bool CallFunc_IsValid_ReturnValue);
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, double LCurrentTick, const struct FVector& LLocationOld, const struct FVector& LLocationCurrent, class ABP_CreatureBase_C* LCreature, class USkeletalMeshComponent* LMesh, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetItem_Weapon, TArray<class AActor*>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, TArray<struct FHitResult>& CallFunc_GetClosestHitResultForEachHitActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetTraceLocation_BoxTrace, const struct FVector& CallFunc_GetTraceLocation_Location, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_SphereTraceMultiForObjects_Radius_ImplicitCast);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class ABP_CreatureBase_C* LCreature, class USkeletalMeshComponent* LMesh, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_GetTraceLocation_BoxTrace, const struct FVector& CallFunc_GetTraceLocation_Location, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_Guid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


